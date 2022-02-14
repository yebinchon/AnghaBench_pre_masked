
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int completed_sem; int start_sem; } ;
struct TYPE_7__ {int (* close ) (TYPE_3__*) ;int (* destroy_native_window ) (TYPE_3__*) ;} ;
struct TYPE_9__ {TYPE_2__ capture; TYPE_1__ ops; int * preview_queue; int * preview_pool; } ;
typedef TYPE_3__ RASPITEX_STATE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (int *) ;

void FUNC_6(RASPITEX_STATE *VAR_1)
{
   FUNC_4("%s", VAR_0);
   if (VAR_1->preview_pool)
   {
      FUNC_0(VAR_1->preview_pool);
      VAR_1->preview_pool = ((void*)0);
   }

   if (VAR_1->preview_queue)
   {
      FUNC_1(VAR_1->preview_queue);
      VAR_1->preview_queue = ((void*)0);
   }

   if (VAR_1->ops.destroy_native_window)
      VAR_1->ops.destroy_native_window(VAR_1);

   if (VAR_1->ops.close)
      VAR_1->ops.close(VAR_1);

   FUNC_5(&VAR_1->capture.start_sem);
   FUNC_5(&VAR_1->capture.completed_sem);
}
