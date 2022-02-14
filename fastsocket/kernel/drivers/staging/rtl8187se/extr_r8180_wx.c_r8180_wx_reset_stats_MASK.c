
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union iwreq_data {int dummy; } iwreq_data ;
struct TYPE_2__ {scalar_t__ rxicverr; scalar_t__ rxcrcerrmax; scalar_t__ rxcrcerrmid; scalar_t__ rxcrcerrmin; scalar_t__ txretry; scalar_t__ txlperr; scalar_t__ txlpokint; scalar_t__ txbeaconerr; scalar_t__ txbeacon; scalar_t__ rxdmafail; scalar_t__ txoverflow; scalar_t__ shints; scalar_t__ ints; scalar_t__ txhperr; scalar_t__ txhpokint; scalar_t__ txnpokint; scalar_t__ rxint; scalar_t__ rxoverflow; scalar_t__ rxerr; scalar_t__ txresumed; scalar_t__ txnperr; scalar_t__ rxnopointer; scalar_t__ rxnodata; scalar_t__ rxnolast; scalar_t__ rxrdu; scalar_t__ txrdu; } ;
struct r8180_priv {int wx_sem; TYPE_1__ stats; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;


 int FUNC_0 (int *) ;
 struct r8180_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_0,
    struct iw_request_info *VAR_1,
    union iwreq_data *VAR_2, char *VAR_3)
{
 struct r8180_priv *VAR_4 =FUNC_1(VAR_0);
 FUNC_0(&VAR_4->wx_sem);

 VAR_4->stats.txrdu = 0;
 VAR_4->stats.rxrdu = 0;
 VAR_4->stats.rxnolast = 0;
 VAR_4->stats.rxnodata = 0;
 VAR_4->stats.rxnopointer = 0;
 VAR_4->stats.txnperr = 0;
 VAR_4->stats.txresumed = 0;
 VAR_4->stats.rxerr = 0;
 VAR_4->stats.rxoverflow = 0;
 VAR_4->stats.rxint = 0;

 VAR_4->stats.txnpokint = 0;
 VAR_4->stats.txhpokint = 0;
 VAR_4->stats.txhperr = 0;
 VAR_4->stats.ints = 0;
 VAR_4->stats.shints = 0;
 VAR_4->stats.txoverflow = 0;
 VAR_4->stats.rxdmafail = 0;
 VAR_4->stats.txbeacon = 0;
 VAR_4->stats.txbeaconerr = 0;
 VAR_4->stats.txlpokint = 0;
 VAR_4->stats.txlperr = 0;
 VAR_4->stats.txretry =0;
 VAR_4->stats.rxcrcerrmin=0;
 VAR_4->stats.rxcrcerrmid=0;
 VAR_4->stats.rxcrcerrmax=0;
 VAR_4->stats.rxicverr=0;

 FUNC_2(&VAR_4->wx_sem);

 return 0;

}
