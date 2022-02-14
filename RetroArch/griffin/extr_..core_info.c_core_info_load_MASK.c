
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int core_info_t ;
struct TYPE_3__ {int path; } ;
typedef TYPE_1__ core_info_ctx_find_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int **) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int *,int ) ;

bool FUNC_3(core_info_ctx_find_t *VAR_2)
{
   core_info_t *VAR_3 = ((void*)0);

   if (!VAR_2)
      return 0;

   if (!VAR_1)
      FUNC_1();

   FUNC_0(&VAR_3);

   if (!VAR_0)
      return 0;

   if (!FUNC_2(VAR_0,
            VAR_3, VAR_2->path))
      return 0;

   return 1;
}
