
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {unsigned int idx; int len; scalar_t__* s; } ;
typedef TYPE_3__ rcheevos_ctx_desc_t ;
struct TYPE_10__ {TYPE_1__* info; } ;
typedef TYPE_4__ rcheevos_cheevo_t ;
struct TYPE_8__ {unsigned int core_count; unsigned int unofficial_count; } ;
struct TYPE_11__ {TYPE_4__* unofficial; TYPE_2__ patchdata; TYPE_4__* core; } ;
struct TYPE_7__ {int description; } ;


 scalar_t__ VAR_0 ;
 TYPE_5__ VAR_1 ;
 int FUNC_0 (scalar_t__*,int ,int ) ;

bool FUNC_1(rcheevos_ctx_desc_t* VAR_2)
{
   unsigned VAR_3;
   const rcheevos_cheevo_t* VAR_4;

   if (!VAR_2)
      return 0;

   *VAR_2->s = 0;

   if (VAR_0)
   {
      VAR_3 = VAR_2->idx;

      if (VAR_3 < VAR_1.patchdata.core_count)
         VAR_4 = VAR_1.core + VAR_3;
      else
      {
         VAR_3 -= VAR_1.patchdata.core_count;

         if (VAR_3 < VAR_1.patchdata.unofficial_count)
            VAR_4 = VAR_1.unofficial + VAR_3;
         else
            return 1;
      }

      FUNC_0(VAR_2->s, VAR_4->info->description, VAR_2->len);
   }

   return 1;
}
