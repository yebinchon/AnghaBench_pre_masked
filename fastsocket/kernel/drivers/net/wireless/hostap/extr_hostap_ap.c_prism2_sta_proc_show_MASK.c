
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {char channel; int ssid_len; int* ssid; } ;
struct TYPE_8__ {TYPE_3__ ap; } ;
struct sta_info {int flags; int* supported_rates; int last_rx_rate; TYPE_4__ u; scalar_t__ ap; TYPE_2__* crypt; int * rx_count; int * tx_count; int tx_rate; int last_rx_signal; int last_rx_silence; int tx_buf; int tx_bytes; int rx_bytes; int tx_packets; int rx_packets; int last_tx; int last_rx; int last_assoc; int last_auth; int listen_interval; int capability; int aid; int users; int addr; } ;
struct seq_file {struct sta_info* private; } ;
struct TYPE_6__ {int priv; TYPE_1__* ops; } ;
struct TYPE_5__ {int (* print_stats ) (struct seq_file*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 int VAR_7 ;
 int FUNC_1 (struct seq_file*,char*,...) ;
 int FUNC_2 (struct seq_file*,char) ;
 int FUNC_3 (struct seq_file*,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct seq_file*,int ) ;

__attribute__((used)) static int FUNC_6(struct seq_file *VAR_8, void *VAR_9)
{
 struct sta_info *VAR_10 = VAR_8->private;
 int VAR_11;





 FUNC_1(VAR_8,
     "%s=%pM\nusers=%d\naid=%d\n"
     "flags=0x%04x%s%s%s%s%s%s%s\n"
     "capability=0x%02x\nlisten_interval=%d\nsupported_rates=",
     VAR_10->ap ? "AP" : "STA",
     VAR_10->addr, FUNC_0(&VAR_10->users), VAR_10->aid,
     VAR_10->flags,
     VAR_10->flags & VAR_1 ? " AUTH" : "",
     VAR_10->flags & VAR_0 ? " ASSOC" : "",
     VAR_10->flags & VAR_5 ? " PS" : "",
     VAR_10->flags & VAR_6 ? " TIM" : "",
     VAR_10->flags & VAR_4 ? " PERM" : "",
     VAR_10->flags & VAR_2 ? " AUTHORIZED" : "",
     VAR_10->flags & VAR_3 ? " POLL" : "",
     VAR_10->capability, VAR_10->listen_interval);

 for (VAR_11 = 0; VAR_11 < sizeof(VAR_10->supported_rates); VAR_11++)
  if (VAR_10->supported_rates[VAR_11] != 0)
   FUNC_1(VAR_8, "%d%sMbps ",
       (VAR_10->supported_rates[VAR_11] & 0x7f) / 2,
       VAR_10->supported_rates[VAR_11] & 1 ? ".5" : "");
 FUNC_1(VAR_8,
     "\njiffies=%lu\nlast_auth=%lu\nlast_assoc=%lu\n"
     "last_rx=%lu\nlast_tx=%lu\nrx_packets=%lu\n"
     "tx_packets=%lu\n"
     "rx_bytes=%lu\ntx_bytes=%lu\nbuffer_count=%d\n"
     "last_rx: silence=%d dBm signal=%d dBm rate=%d%s Mbps\n"
     "tx_rate=%d\ntx[1M]=%d\ntx[2M]=%d\ntx[5.5M]=%d\n"
     "tx[11M]=%d\n"
     "rx[1M]=%d\nrx[2M]=%d\nrx[5.5M]=%d\nrx[11M]=%d\n",
     VAR_7, VAR_10->last_auth, VAR_10->last_assoc, VAR_10->last_rx,
     VAR_10->last_tx,
     VAR_10->rx_packets, VAR_10->tx_packets, VAR_10->rx_bytes,
     VAR_10->tx_bytes, FUNC_4(&VAR_10->tx_buf),
     VAR_10->last_rx_silence,
     VAR_10->last_rx_signal, VAR_10->last_rx_rate / 10,
     VAR_10->last_rx_rate % 10 ? ".5" : "",
     VAR_10->tx_rate, VAR_10->tx_count[0], VAR_10->tx_count[1],
     VAR_10->tx_count[2], VAR_10->tx_count[3], VAR_10->rx_count[0],
     VAR_10->rx_count[1], VAR_10->rx_count[2], VAR_10->rx_count[3]);
 if (VAR_10->crypt && VAR_10->crypt->ops && VAR_10->crypt->ops->print_stats)
  VAR_10->crypt->ops->print_stats(VAR_8, VAR_10->crypt->priv);

 if (VAR_10->ap) {
  if (VAR_10->u.ap.channel >= 0)
   FUNC_1(VAR_8, "channel=%d\n", VAR_10->u.ap.channel);
  FUNC_3(VAR_8, "ssid=");
  for (VAR_11 = 0; VAR_11 < VAR_10->u.ap.ssid_len; VAR_11++) {
   if (VAR_10->u.ap.ssid[VAR_11] >= 32 && VAR_10->u.ap.ssid[VAR_11] < 127)
    FUNC_2(VAR_8, VAR_10->u.ap.ssid[VAR_11]);
   else
    FUNC_1(VAR_8, "<%02x>", VAR_10->u.ap.ssid[VAR_11]);
  }
  FUNC_2(VAR_8, '\n');
 }


 return 0;
}
