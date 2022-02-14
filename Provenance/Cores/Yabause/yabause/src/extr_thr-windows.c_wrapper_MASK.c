
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thd_s {int mutex; int arg; int (* func ) (int ) ;} ;
typedef int DWORD ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,void*) ;
 int VAR_0 ;
 int FUNC_3 (int ) ;

__attribute__((used)) static DWORD FUNC_4(void *VAR_1)
{
   struct thd_s *VAR_2 = (struct thd_s *)VAR_1;

   FUNC_0(&VAR_2->mutex);


   FUNC_2(VAR_0, VAR_1);
   VAR_2->func(VAR_2->arg);

   FUNC_1(&VAR_2->mutex);

   return 0;
}
