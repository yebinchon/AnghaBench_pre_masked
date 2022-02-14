
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtentry {struct llinfo_arp* rt_llinfo; } ;
struct llinfo_arp {int la_lastused; struct if_llreach* la_llreach; } ;
struct ifnet_llreach_info {int iflri_snd_expire; int iflri_npm; int iflri_lqm; int iflri_rssi; } ;
struct if_llreach {int dummy; } ;


 int FUNC_0 (struct if_llreach*) ;
 int FUNC_1 (struct if_llreach*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct ifnet_llreach_info*,int) ;
 int FUNC_3 (struct if_llreach*,int ) ;
 int FUNC_4 (struct if_llreach*,struct ifnet_llreach_info*) ;

__attribute__((used)) static void
FUNC_5(struct rtentry *VAR_3, struct ifnet_llreach_info *VAR_4)
{
 struct llinfo_arp *VAR_5 = VAR_3->rt_llinfo;
 struct if_llreach *VAR_6 = VAR_5->la_llreach;

 if (VAR_6 == ((void*)0)) {
  FUNC_2(VAR_4, sizeof (*VAR_4));
  VAR_4->iflri_rssi = VAR_2;
  VAR_4->iflri_lqm = VAR_0;
  VAR_4->iflri_npm = VAR_1;
 } else {
  FUNC_0(VAR_6);

  FUNC_4(VAR_6, VAR_4);

  VAR_4->iflri_snd_expire =
      FUNC_3(VAR_6, VAR_5->la_lastused);
  FUNC_1(VAR_6);
 }
}
