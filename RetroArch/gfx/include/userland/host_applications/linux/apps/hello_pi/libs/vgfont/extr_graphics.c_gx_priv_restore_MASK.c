
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_7__ {int disp; } ;
struct TYPE_6__ {TYPE_1__* res; scalar_t__ context; scalar_t__ read_surface; scalar_t__ draw_surface; int api; } ;
struct TYPE_5__ {scalar_t__ context_bound; } ;
typedef TYPE_2__ GX_CLIENT_STATE_T ;
typedef int EGLBoolean ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,int ,int ,int ,int ,int ) ;
 TYPE_4__ VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,scalar_t__,scalar_t__,scalar_t__) ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;

void FUNC_7(GX_CLIENT_STATE_T *VAR_4)
{
   EGLBoolean VAR_5;

   FUNC_0("gx_priv_restore: eglMakeCurrent: %s, res %x draw_surface %x, surface %x, cxt %x", FUNC_6(FUNC_5()),
      (uint32_t)VAR_4->res, (uint32_t)VAR_4->draw_surface, (uint32_t)VAR_4->read_surface, (uint32_t)VAR_4->context);



   VAR_5 = FUNC_2(VAR_2.disp, VAR_1, VAR_1, VAR_0);
   FUNC_3(VAR_5);


   VAR_5 = FUNC_1(VAR_4->api);
   FUNC_3(VAR_5);

   VAR_5 = FUNC_2(VAR_2.disp, VAR_4->draw_surface, VAR_4->read_surface, VAR_4->context);
   FUNC_3(VAR_5);

   if (VAR_4->res) VAR_4->res->context_bound = 0;

   FUNC_4(&VAR_3);
}
