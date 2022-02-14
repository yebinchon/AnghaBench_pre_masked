
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct slcompress {int sls_i_compressed; int sls_i_uncompressed; int sls_i_tossed; int sls_i_error; int sls_o_misses; int sls_o_searches; scalar_t__ sls_o_compressed; scalar_t__ sls_o_uncompressed; } ;
struct TYPE_8__ {int vjs_compressedin; int vjs_uncompressedin; int vjs_tossed; int vjs_errorin; int vjs_misses; int vjs_searches; scalar_t__ vjs_compressed; scalar_t__ vjs_packets; } ;
struct TYPE_5__ {int ppp_obytes; int ppp_oerrors; int ppp_opackets; int ppp_ibytes; int ppp_ierrors; int ppp_ipackets; } ;
struct ppp_stats {TYPE_4__ vj; TYPE_1__ p; } ;
struct ppp {TYPE_3__* dev; struct slcompress* vj; } ;
struct TYPE_6__ {int tx_bytes; int tx_errors; int tx_packets; int rx_bytes; int rx_errors; int rx_packets; } ;
struct TYPE_7__ {TYPE_2__ stats; } ;


 int FUNC_0 (struct ppp_stats*,int ,int) ;

__attribute__((used)) static void
FUNC_1(struct ppp *VAR_0, struct ppp_stats *VAR_1)
{
 struct slcompress *VAR_2 = VAR_0->vj;

 FUNC_0(VAR_1, 0, sizeof(*VAR_1));
 VAR_1->p.ppp_ipackets = VAR_0->dev->stats.rx_packets;
 VAR_1->p.ppp_ierrors = VAR_0->dev->stats.rx_errors;
 VAR_1->p.ppp_ibytes = VAR_0->dev->stats.rx_bytes;
 VAR_1->p.ppp_opackets = VAR_0->dev->stats.tx_packets;
 VAR_1->p.ppp_oerrors = VAR_0->dev->stats.tx_errors;
 VAR_1->p.ppp_obytes = VAR_0->dev->stats.tx_bytes;
 if (!VAR_2)
  return;
 VAR_1->vj.vjs_packets = VAR_2->sls_o_compressed + VAR_2->sls_o_uncompressed;
 VAR_1->vj.vjs_compressed = VAR_2->sls_o_compressed;
 VAR_1->vj.vjs_searches = VAR_2->sls_o_searches;
 VAR_1->vj.vjs_misses = VAR_2->sls_o_misses;
 VAR_1->vj.vjs_errorin = VAR_2->sls_i_error;
 VAR_1->vj.vjs_tossed = VAR_2->sls_i_tossed;
 VAR_1->vj.vjs_uncompressedin = VAR_2->sls_i_uncompressed;
 VAR_1->vj.vjs_compressedin = VAR_2->sls_i_compressed;
}
