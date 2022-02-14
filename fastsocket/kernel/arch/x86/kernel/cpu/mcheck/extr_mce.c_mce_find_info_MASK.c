
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mce_info {scalar_t__ t; int inuse; } ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ VAR_1 ;
 struct mce_info* VAR_2 ;

__attribute__((used)) static struct mce_info *FUNC_1(void)
{
 struct mce_info *VAR_3;

 for (VAR_3 = VAR_2; VAR_3 < &VAR_2[VAR_0]; VAR_3++)
  if (FUNC_0(&VAR_3->inuse) && VAR_3->t == VAR_1)
   return VAR_3;
 return ((void*)0);
}
