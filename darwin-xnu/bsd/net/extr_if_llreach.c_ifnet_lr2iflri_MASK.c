
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ifnet_llreach_info {int iflri_npm; int iflri_lqm; int iflri_rssi; int iflri_addr; int iflri_netproto; int iflri_curtime; int iflri_rcv_expire; int iflri_probes; int iflri_refcnt; } ;
struct TYPE_2__ {int proto; int addr; } ;
struct if_llreach {int lr_npm; int lr_lqm; int lr_rssi; TYPE_1__ lr_key; int lr_lastrcvd; int lr_probes; int lr_reqcnt; } ;




 int FUNC_0 (struct if_llreach*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int *,int ) ;
 int FUNC_2 (struct ifnet_llreach_info*,int) ;
 int FUNC_3 (struct if_llreach*,int ) ;
 int FUNC_4 () ;

void
FUNC_5(struct if_llreach *VAR_4, struct ifnet_llreach_info *VAR_5)
{
 FUNC_0(VAR_4);

 FUNC_2(VAR_5, sizeof (*VAR_5));



 VAR_5->iflri_refcnt = VAR_4->lr_reqcnt;
 VAR_5->iflri_probes = VAR_4->lr_probes;
 VAR_5->iflri_rcv_expire = FUNC_3(VAR_4, VAR_4->lr_lastrcvd);
 VAR_5->iflri_curtime = FUNC_4();
 switch (VAR_4->lr_key.proto) {
 case 129:
  VAR_5->iflri_netproto = VAR_1;
  break;
 case 128:
  VAR_5->iflri_netproto = VAR_2;
  break;
 default:





  VAR_5->iflri_netproto = VAR_3;
  break;
 }
 FUNC_1(&VAR_4->lr_key.addr, &VAR_5->iflri_addr, VAR_0);
 VAR_5->iflri_rssi = VAR_4->lr_rssi;
 VAR_5->iflri_lqm = VAR_4->lr_lqm;
 VAR_5->iflri_npm = VAR_4->lr_npm;
}
