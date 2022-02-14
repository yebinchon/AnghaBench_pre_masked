
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int txviokint; int txoverflow; int txcmdpktokint; int txbeaconerr; int txbeaconokint; int txmanageokint; int txbkokint; int txbeokint; int txvookint; } ;
struct r8192_priv {TYPE_3__ stats; TYPE_2__* ieee80211; } ;
struct net_device {int dummy; } ;
typedef int off_t ;
struct TYPE_4__ {int tx_bytes; int tx_packets; } ;
struct TYPE_5__ {TYPE_1__ stats; } ;


 scalar_t__ FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (char*,int,char*,int,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(char *VAR_0, char **VAR_1,
     off_t VAR_2, int VAR_3,
     int *VAR_4, void *VAR_5)
{
 struct net_device *VAR_6 = VAR_5;
 struct r8192_priv *VAR_7 = (struct r8192_priv *)FUNC_0(VAR_6);

 int VAR_8 = 0;

 VAR_8 += FUNC_2(VAR_0 + VAR_8, VAR_3 - VAR_8,
  "TX VI priority ok int: %lu\n"

  "TX VO priority ok int: %lu\n"

  "TX BE priority ok int: %lu\n"

  "TX BK priority ok int: %lu\n"

  "TX MANAGE priority ok int: %lu\n"

  "TX BEACON priority ok int: %lu\n"
  "TX BEACON priority error int: %lu\n"
  "TX CMDPKT priority ok int: %lu\n"



  "TX queue stopped?: %d\n"
  "TX fifo overflow: %lu\n"
  "TX total data packets %lu\n"
  "TX total data bytes :%lu\n",

  VAR_7->stats.txviokint,

  VAR_7->stats.txvookint,

  VAR_7->stats.txbeokint,

  VAR_7->stats.txbkokint,

  VAR_7->stats.txmanageokint,

  VAR_7->stats.txbeaconokint,
  VAR_7->stats.txbeaconerr,
  VAR_7->stats.txcmdpktokint,



  FUNC_1(VAR_6),
  VAR_7->stats.txoverflow,
  VAR_7->ieee80211->stats.tx_packets,
  VAR_7->ieee80211->stats.tx_bytes






  );

 *VAR_4 = 1;
 return VAR_8;
}
