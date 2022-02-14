
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct MMAL_VC_COMP_STATS_T {int state; char* name; int pid; int pool_mem_alloc_size; int comp; } ;
struct TYPE_4__ {int list_size; int created; int destroyed; int destroying; int failed; struct MMAL_VC_COMP_STATS_T* component_list; } ;
struct TYPE_5__ {TYPE_1__ components; } ;
typedef TYPE_2__ MMAL_VC_STATS_T ;





 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (char*,...) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_2(const MMAL_VC_STATS_T *VAR_2)
{
   size_t VAR_3;
   if (VAR_2->components.list_size > 64)
   {
      FUNC_0(VAR_1,"component array looks corrupt (list size %d\n",
            VAR_2->components.list_size);
      goto fail;
   }
   FUNC_1("%d created, %d destroyed (%d destroying), %d create failures\n",
         VAR_2->components.created,
         VAR_2->components.destroyed,
         VAR_2->components.destroying,
         VAR_2->components.failed);

   for (VAR_3=0; VAR_3 < VAR_2->components.list_size; VAR_3++)
   {
      const struct MMAL_VC_COMP_STATS_T *VAR_4 = VAR_2->components.component_list+VAR_3;
      const char *VAR_5;

      if (VAR_4->state != VAR_0)
      {
         switch (VAR_4->state)
         {
            case 130: VAR_5 = "created"; break;
            case 128: VAR_5 = "destroying"; break;
            case 129: VAR_5 = "destroyed"; break;
            default: VAR_5 = "corrupt"; break;
         }
         FUNC_1("%-32s: %s: pid %d address %p pool mem alloc size %d\n",
               VAR_4->name, VAR_5, VAR_4->pid, VAR_4->comp, VAR_4->pool_mem_alloc_size);
      }
   }
   return 0;
fail:
   return -1;
}
