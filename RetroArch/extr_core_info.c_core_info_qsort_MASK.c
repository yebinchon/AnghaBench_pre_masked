
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef enum core_info_list_qsort_type { ____Placeholder_core_info_list_qsort_type } core_info_list_qsort_type ;
typedef int core_info_t ;
struct TYPE_3__ {int count; int list; } ;
typedef TYPE_1__ core_info_list_t ;






 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,int,int,int (*) (void const*,void const*)) ;

void FUNC_1(core_info_list_t *VAR_4,
      enum core_info_list_qsort_type VAR_5)
{
   if (!VAR_4)
      return;

   if (VAR_4->count < 2)
      return;

   switch (VAR_5)
   {
      case 129:
         FUNC_0(VAR_4->list,
               VAR_4->count,
               sizeof(core_info_t),
               (int (*)(const void *, const void *))
               VAR_2);
         break;
      case 130:
         FUNC_0(VAR_4->list,
               VAR_4->count,
               sizeof(core_info_t),
               (int (*)(const void *, const void *))
               VAR_1);
         break;
      case 131:
         FUNC_0(VAR_4->list,
               VAR_4->count,
               sizeof(core_info_t),
               (int (*)(const void *, const void *))
               VAR_0);
         break;
      case 128:
         FUNC_0(VAR_4->list,
               VAR_4->count,
               sizeof(core_info_t),
               (int (*)(const void *, const void *))
               VAR_3);
         break;
      default:
         return;
   }
}
