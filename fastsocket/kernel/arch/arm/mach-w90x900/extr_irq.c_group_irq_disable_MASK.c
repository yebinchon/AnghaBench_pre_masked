
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct group_irq {scalar_t__ enabled; int (* enable ) (struct group_irq*,int ) ;} ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (struct group_irq*,int ) ;

__attribute__((used)) static void FUNC_4(struct group_irq *VAR_1)
{
 unsigned long VAR_2;

 FUNC_0(VAR_1->enabled == 0);

 FUNC_1(&VAR_0, VAR_2);
 if (--VAR_1->enabled == 0)
  (VAR_1->enable)(VAR_1, 0);
 FUNC_2(&VAR_0, VAR_2);
}
