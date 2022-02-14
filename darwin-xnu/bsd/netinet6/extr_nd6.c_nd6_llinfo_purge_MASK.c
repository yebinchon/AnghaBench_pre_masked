
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtentry {scalar_t__ rt_llinfo_purge; struct llinfo_nd6* rt_llinfo; } ;
struct llinfo_nd6 {scalar_t__ ln_lastused; int * ln_llreach; } ;


 int FUNC_0 (struct rtentry*) ;
 int FUNC_1 (struct rtentry*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(struct rtentry *VAR_0)
{
 struct llinfo_nd6 *VAR_1 = VAR_0->rt_llinfo;

 FUNC_1(VAR_0);
 FUNC_2(VAR_0->rt_llinfo_purge == FUNC_4 && VAR_1 != ((void*)0));

 if (VAR_1->ln_llreach != ((void*)0)) {
  FUNC_0(VAR_0);
  FUNC_3(VAR_1->ln_llreach);
  VAR_1->ln_llreach = ((void*)0);
 }
 VAR_1->ln_lastused = 0;
}
