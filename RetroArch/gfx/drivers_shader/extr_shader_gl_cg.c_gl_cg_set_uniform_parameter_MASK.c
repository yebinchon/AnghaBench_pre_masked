
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int v3; int v2; int v1; int v0; } ;
struct TYPE_9__ {int floatv; TYPE_3__ f; } ;
struct TYPE_7__ {int type; size_t idx; char* ident; scalar_t__ add_prefix; scalar_t__ enable; } ;
struct uniform_info {int type; TYPE_4__ result; TYPE_2__ lookup; int enabled; } ;
struct uniform_cg {int loc; } ;
typedef int ident ;
struct TYPE_10__ {TYPE_1__* prg; } ;
typedef TYPE_5__ cg_shader_data_t ;
struct TYPE_6__ {int fprg; int vprg; } ;
typedef int CGprogram ;
typedef int CGparameter ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ,int ,int ,int ) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (char*,int,char*,char*) ;

__attribute__((used)) static void FUNC_9(
      void *VAR_0,
      struct uniform_info *VAR_1,
      void *VAR_2)
{
   CGparameter VAR_3;
   cg_shader_data_t *VAR_4 = (cg_shader_data_t*)VAR_0;

   if (!VAR_1 || !VAR_1->enabled)
      return;

   if (VAR_1->lookup.enable)
   {
      char VAR_5[64];
      CGprogram VAR_6 = 0;

      VAR_5[0] = '\0';

      switch (VAR_1->lookup.type)
      {
         case 137:
            VAR_6 = VAR_4->prg[VAR_1->lookup.idx].vprg;
            break;
         case 138:
         default:
            VAR_6 = VAR_4->prg[VAR_1->lookup.idx].fprg;
            break;
      }

      if (VAR_1->lookup.add_prefix)
         FUNC_8(VAR_5, sizeof(VAR_5), "IN.%s", VAR_1->lookup.ident);
      VAR_3 = FUNC_7(VAR_6, VAR_1->lookup.add_prefix ? VAR_5 : VAR_1->lookup.ident);
   }
   else
   {
      struct uniform_cg *VAR_7 = (struct uniform_cg*)VAR_2;
      VAR_3 = VAR_7->loc;
   }

   switch (VAR_1->type)
   {
      case 136:
         FUNC_0(VAR_3, VAR_1->result.f.v0);
         break;
      case 133:
         FUNC_2(VAR_3, VAR_1->result.f.v0, VAR_1->result.f.v1);
         break;
      case 131:
         FUNC_4(VAR_3, VAR_1->result.f.v0, VAR_1->result.f.v1,
               VAR_1->result.f.v2);
         break;
      case 129:
         FUNC_6(VAR_3, VAR_1->result.f.v0, VAR_1->result.f.v1,
               VAR_1->result.f.v2, VAR_1->result.f.v3);
         break;
      case 135:
         FUNC_1(VAR_3, VAR_1->result.floatv);
         break;
      case 132:
         FUNC_3(VAR_3, VAR_1->result.floatv);
         break;
      case 130:
         FUNC_5(VAR_3, VAR_1->result.floatv);
         break;
      case 128:
         FUNC_5(VAR_3, VAR_1->result.floatv);
         break;
      case 134:

         break;
   }
}
