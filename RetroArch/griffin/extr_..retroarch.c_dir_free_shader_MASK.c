
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rarch_dir_list {scalar_t__ ptr; int * list; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;

__attribute__((used)) static bool FUNC_1(void)
{
   struct rarch_dir_list *VAR_1 =
      (struct rarch_dir_list*)&VAR_0;

   FUNC_0(VAR_1->list);
   VAR_1->list = ((void*)0);
   VAR_1->ptr = 0;

   return 1;
}
