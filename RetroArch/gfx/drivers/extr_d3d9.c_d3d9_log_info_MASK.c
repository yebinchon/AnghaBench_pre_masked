
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct LinkInfo {char* tex_w; char* tex_h; TYPE_2__* pass; } ;
struct TYPE_3__ {int type_x; char* scale_x; char* abs_x; int type_y; char* scale_y; char* abs_y; } ;
struct TYPE_4__ {scalar_t__ filter; TYPE_1__ fbo; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,...) ;




__attribute__((used)) static void FUNC_1(const struct LinkInfo *VAR_1)
{
   FUNC_0("[D3D9]: Render pass info:\n");
   FUNC_0("\tTexture width: %u\n", VAR_1->tex_w);
   FUNC_0("\tTexture height: %u\n", VAR_1->tex_h);

   FUNC_0("\tScale type (X): ");

   switch (VAR_1->pass->fbo.type_x)
   {
      case 129:
         FUNC_0("Relative @ %fx\n", VAR_1->pass->fbo.scale_x);
         break;

      case 128:
         FUNC_0("Viewport @ %fx\n", VAR_1->pass->fbo.scale_x);
         break;

      case 130:
         FUNC_0("Absolute @ %u px\n", VAR_1->pass->fbo.abs_x);
         break;
   }

   FUNC_0("\tScale type (Y): ");

   switch (VAR_1->pass->fbo.type_y)
   {
      case 129:
         FUNC_0("Relative @ %fx\n", VAR_1->pass->fbo.scale_y);
         break;

      case 128:
         FUNC_0("Viewport @ %fx\n", VAR_1->pass->fbo.scale_y);
         break;

      case 130:
         FUNC_0("Absolute @ %u px\n", VAR_1->pass->fbo.abs_y);
         break;
   }

   FUNC_0("\tBilinear filter: %s\n",
         VAR_1->pass->filter == VAR_0 ? "true" : "false");
}
