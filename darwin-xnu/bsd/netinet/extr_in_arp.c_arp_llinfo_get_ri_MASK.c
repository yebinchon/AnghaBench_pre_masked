
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtentry {struct llinfo_arp* rt_llinfo; } ;
struct rt_reach_info {int ri_snd_expire; int ri_npm; int ri_lqm; int ri_rssi; } ;
struct llinfo_arp {int la_lastused; struct if_llreach* la_llreach; } ;
struct if_llreach {int dummy; } ;


 int FUNC_0 (struct if_llreach*) ;
 int FUNC_1 (struct if_llreach*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct rt_reach_info*,int) ;
 int FUNC_3 (struct if_llreach*,int ) ;
 int FUNC_4 (struct if_llreach*,struct rt_reach_info*) ;

__attribute__((used)) static void
FUNC_5(struct rtentry *VAR_3, struct rt_reach_info *VAR_4)
{
 struct llinfo_arp *VAR_5 = VAR_3->rt_llinfo;
 struct if_llreach *VAR_6 = VAR_5->la_llreach;

 if (VAR_6 == ((void*)0)) {
  FUNC_2(VAR_4, sizeof (*VAR_4));
  VAR_4->ri_rssi = VAR_2;
  VAR_4->ri_lqm = VAR_0;
  VAR_4->ri_npm = VAR_1;
 } else {
  FUNC_0(VAR_6);

  FUNC_4(VAR_6, VAR_4);

  VAR_4->ri_snd_expire =
      FUNC_3(VAR_6, VAR_5->la_lastused);
  FUNC_1(VAR_6);
 }
}
