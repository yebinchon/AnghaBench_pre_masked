
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_7__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_10__ {int disp; } ;
struct TYPE_8__ {int pixmap; } ;
struct TYPE_9__ {scalar_t__ type; int magic; int surface; TYPE_1__ u; } ;
typedef int GX_CLIENT_STATE_T ;
typedef TYPE_2__* GRAPHICS_RESOURCE_HANDLE ;
typedef int EGLBoolean ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,...) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_7__ VAR_3 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,TYPE_2__*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 () ;

int32_t FUNC_10( GRAPHICS_RESOURCE_HANDLE VAR_4 )
{
   EGLBoolean VAR_5;

   if (!VAR_4)
   {

      return 0;
   }
   FUNC_0("delete resource @%p", VAR_4);

   FUNC_6(VAR_4->magic == VAR_2);

   if (VAR_4->type == VAR_0)
   {
      GX_CLIENT_STATE_T VAR_6;
      FUNC_5(&VAR_6, VAR_4);
      FUNC_8(VAR_4->u.pixmap);
      FUNC_6(FUNC_9() == 0);
      FUNC_4(&VAR_6);
   }

   FUNC_0("graphics_delete_resource: calling eglDestroySurface...");
   VAR_5 = FUNC_1(VAR_3.disp, VAR_4->surface);
   FUNC_6(VAR_5);

   FUNC_0("graphics_delete_resource: calling eglWaitClient...");
   FUNC_2();

   if (VAR_4->type == VAR_1)
   {
      FUNC_0("graphics_delete_resource: calling gx_priv_destroy_native_window...");
      FUNC_3(VAR_4);
   }

   VAR_4->magic = ~VAR_2;
   FUNC_7(VAR_4);
   FUNC_0("graphics_delete_resource: done");

   return 0;
}
