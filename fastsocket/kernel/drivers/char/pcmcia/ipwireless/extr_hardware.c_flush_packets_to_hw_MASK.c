
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipw_hardware {int lock; } ;


 int FUNC_0 (struct ipw_hardware*) ;
 scalar_t__ FUNC_1 (struct ipw_hardware*,int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct ipw_hardware *VAR_0)
{
 int VAR_1;
 unsigned long VAR_2;

 FUNC_2(&VAR_0->lock, VAR_2);
 VAR_1 = FUNC_0(VAR_0);
 FUNC_3(&VAR_0->lock, VAR_2);

 while (FUNC_1(VAR_0, VAR_1));
}
