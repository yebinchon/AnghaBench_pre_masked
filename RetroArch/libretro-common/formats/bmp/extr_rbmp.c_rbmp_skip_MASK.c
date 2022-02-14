
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int img_buffer; int img_buffer_end; } ;
typedef TYPE_1__ rbmp_context ;



__attribute__((used)) static void FUNC_0(rbmp_context *VAR_0, int VAR_1)
{
   if (VAR_1 < 0)
   {
      VAR_0->img_buffer = VAR_0->img_buffer_end;
      return;
   }

   VAR_0->img_buffer += VAR_1;
}
