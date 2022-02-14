
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtentry_dbg {int dummy; } ;
struct rtentry {int rt_lock; } ;
typedef scalar_t__ boolean_t ;


 int VAR_0 ;
 int FUNC_0 (struct rtentry*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int FUNC_3 (struct rtentry_dbg*) ;

void
FUNC_4(struct rtentry *VAR_2, boolean_t VAR_3)
{
 FUNC_0(VAR_2);
 if (VAR_3)
  FUNC_2(&VAR_2->rt_lock);
 else
  FUNC_1(&VAR_2->rt_lock);
 if (VAR_1 & VAR_0)
  FUNC_3((struct rtentry_dbg *)VAR_2);
}
