
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtentry {scalar_t__ rt_refcnt; } ;


 int VAR_0 ;
 int FUNC_0 (char*,struct rtentry*,scalar_t__) ;
 int VAR_1 ;
 int FUNC_1 (struct rtentry*) ;
 int VAR_2 ;
 int FUNC_2 (int ,struct rtentry*) ;

__attribute__((used)) static void
FUNC_3(struct rtentry *VAR_3)
{
 if (VAR_1 & VAR_0) {
  FUNC_1(VAR_3);
  return;
 }

 if (VAR_3->rt_refcnt != 0) {
  FUNC_0("rte_free: rte=%p refcnt=%d non-zero\n", VAR_3, VAR_3->rt_refcnt);

 }

 FUNC_2(VAR_2, VAR_3);
}
