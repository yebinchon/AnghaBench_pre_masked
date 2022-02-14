
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int v0; } ;
struct TYPE_9__ {int v3; int v2; int v1; int v0; } ;
struct TYPE_11__ {TYPE_4__ integer; int floatv; TYPE_3__ f; } ;
struct TYPE_8__ {size_t idx; int ident; scalar_t__ enable; } ;
struct uniform_info {int type; TYPE_5__ result; int location; TYPE_2__ lookup; } ;
struct TYPE_12__ {TYPE_1__* prg; } ;
typedef TYPE_6__ glsl_shader_data_t ;
struct TYPE_7__ {int id; } ;
typedef int GLint ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,int,int ) ;
 int FUNC_6 (int ,int ,int ,int ) ;
 int FUNC_7 (int ,int,int ) ;
 int FUNC_8 (int ,int ,int ,int ,int ) ;
 int FUNC_9 (int ,int,int ) ;

__attribute__((used)) static void FUNC_10(
      void *VAR_0,
      struct uniform_info *VAR_1,
      void *VAR_2)
{
   GLint VAR_3 = 0;
   glsl_shader_data_t *VAR_4 = (glsl_shader_data_t*)VAR_0;

   if (!VAR_4 || !VAR_1)
      return;

   if (VAR_1->lookup.enable)
      VAR_3 = FUNC_0(VAR_4->prg[VAR_1->lookup.idx].id, VAR_1->lookup.ident);
   else
      VAR_3 = VAR_1->location;

   switch (VAR_1->type)
   {
      case 136:
         FUNC_1(VAR_3, VAR_1->result.f.v0);
         break;
      case 133:
         FUNC_4(VAR_3, VAR_1->result.f.v0,
               VAR_1->result.f.v1);
         break;
      case 131:
         FUNC_6(VAR_3, VAR_1->result.f.v0,
               VAR_1->result.f.v1, VAR_1->result.f.v2);
         break;
      case 129:
         FUNC_8(VAR_3, VAR_1->result.f.v0,
               VAR_1->result.f.v1, VAR_1->result.f.v2,
               VAR_1->result.f.v3);
         break;
      case 135:
         FUNC_2(VAR_3, 1, VAR_1->result.floatv);
         break;
      case 132:
         FUNC_5(VAR_3, 1, VAR_1->result.floatv);
         break;
      case 130:
         FUNC_7(VAR_3, 1, VAR_1->result.floatv);
         break;
      case 128:
         FUNC_9(VAR_3, 1, VAR_1->result.floatv);
         break;
      case 134:
         FUNC_3(VAR_3, (GLint)VAR_1->result.integer.v0);
         break;
   }
}
