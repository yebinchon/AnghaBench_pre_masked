
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt_reach_info {int ri_npm; int ri_lqm; int ri_rssi; int ri_rcv_expire; int ri_probes; int ri_refcnt; } ;
struct if_llreach_info {int lri_npm; int lri_lqm; int lri_rssi; int lri_expire; int lri_probes; int lri_refcnt; } ;
struct if_llreach {int dummy; } ;


 int FUNC_0 (struct if_llreach*) ;
 int FUNC_1 (struct rt_reach_info*,int) ;
 int FUNC_2 (struct if_llreach*,struct if_llreach_info*) ;

void
FUNC_3(struct if_llreach *VAR_0, struct rt_reach_info *VAR_1)
{
 struct if_llreach_info VAR_2;

 FUNC_0(VAR_0);

 FUNC_1(VAR_1, sizeof (*VAR_1));
 FUNC_2(VAR_0, &VAR_2);
 VAR_1->ri_refcnt = VAR_2.lri_refcnt;
 VAR_1->ri_probes = VAR_2.lri_probes;
 VAR_1->ri_rcv_expire = VAR_2.lri_expire;
 VAR_1->ri_rssi = VAR_2.lri_rssi;
 VAR_1->ri_lqm = VAR_2.lri_lqm;
 VAR_1->ri_npm = VAR_2.lri_npm;
}
