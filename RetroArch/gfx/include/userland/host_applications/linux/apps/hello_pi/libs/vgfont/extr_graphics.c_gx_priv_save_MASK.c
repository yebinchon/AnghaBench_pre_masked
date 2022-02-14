
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_8__ {int disp; } ;
struct TYPE_7__ {scalar_t__ magic; int context_bound; scalar_t__ context; scalar_t__ surface; } ;
struct TYPE_6__ {int api; TYPE_2__* res; void* draw_surface; void* read_surface; int context; } ;
typedef TYPE_1__ GX_CLIENT_STATE_T ;
typedef TYPE_2__* GRAPHICS_RESOURCE_HANDLE ;
typedef int EGLBoolean ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ,int ,int ,int ) ;
 scalar_t__ VAR_3 ;
 TYPE_5__ VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (int ,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_5 () ;
 int VAR_5 ;
 int FUNC_6 (int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 () ;
 int FUNC_9 (int ) ;

void FUNC_10(GX_CLIENT_STATE_T *VAR_6, GRAPHICS_RESOURCE_HANDLE VAR_7)
{
   EGLBoolean VAR_8;
   FUNC_6(VAR_7 == ((void*)0) || (VAR_7->magic == VAR_3));
   FUNC_6(VAR_7 == ((void*)0) || !VAR_7->context_bound);

   VAR_6->context = FUNC_2();
   VAR_6->api = FUNC_5();
   VAR_6->read_surface = FUNC_3(VAR_2);
   VAR_6->draw_surface = FUNC_3(VAR_0);
   VAR_6->res = VAR_7;

   FUNC_6(VAR_6->api);

   FUNC_7(&VAR_5);

   VAR_8 = FUNC_1(VAR_1);
   FUNC_6(VAR_8);

   if (VAR_7)
   {
      FUNC_0("gx_priv_save: eglMakeCurrent: %s, res %x surface %x, cxt %x", FUNC_9(FUNC_8()),
         (uint32_t)VAR_7, (uint32_t)VAR_7->surface, (uint32_t)VAR_7->context);

      VAR_8 = FUNC_4(VAR_4.disp, VAR_7->surface,
                                  VAR_7->surface, VAR_7->context);
      FUNC_6(VAR_8);

      VAR_7->context_bound = 1;
   }
}
