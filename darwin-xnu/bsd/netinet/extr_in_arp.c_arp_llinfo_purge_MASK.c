
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtentry {scalar_t__ rt_llinfo_purge; struct llinfo_arp* rt_llinfo; } ;
struct llinfo_arp {scalar_t__ la_lastused; int * la_llreach; } ;


 int FUNC_0 (struct rtentry*) ;
 int FUNC_1 (struct rtentry*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(struct rtentry *VAR_0)
{
 struct llinfo_arp *VAR_1 = VAR_0->rt_llinfo;

 FUNC_1(VAR_0);
 FUNC_2(VAR_0->rt_llinfo_purge == FUNC_4 && VAR_1 != ((void*)0));

 if (VAR_1->la_llreach != ((void*)0)) {
  FUNC_0(VAR_0);
  FUNC_3(VAR_1->la_llreach);
  VAR_1->la_llreach = ((void*)0);
 }
 VAR_1->la_lastused = 0;
}
