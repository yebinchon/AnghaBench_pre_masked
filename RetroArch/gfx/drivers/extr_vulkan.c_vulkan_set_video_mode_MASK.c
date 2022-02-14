
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int width; unsigned int height; int fullscreen; } ;
typedef TYPE_1__ gfx_ctx_mode_t ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(void *VAR_0,
      unsigned VAR_1, unsigned VAR_2,
      bool VAR_3)
{
   gfx_ctx_mode_t VAR_4;

   (void)VAR_0;

   VAR_4.width = VAR_1;
   VAR_4.height = VAR_2;
   VAR_4.fullscreen = VAR_3;

   FUNC_0(&VAR_4);
}
