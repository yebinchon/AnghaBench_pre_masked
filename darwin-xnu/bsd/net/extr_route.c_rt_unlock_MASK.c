
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtentry_dbg {int dummy; } ;
struct rtentry {int rt_lock; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (struct rtentry_dbg*) ;

void
FUNC_2(struct rtentry *VAR_2)
{
 if (VAR_1 & VAR_0)
  FUNC_1((struct rtentry_dbg *)VAR_2);
 FUNC_0(&VAR_2->rt_lock);

}
