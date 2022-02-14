
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int id; } ;
typedef TYPE_1__ menu_entry ;
struct TYPE_5__ {char* scale; char* hscale32; char* hscale40; char* gamma; char* gamma2; int EmuOpt; int scaling; } ;
 TYPE_3__ VAR_0 ;
 int FUNC_0 (int,int,char*,char*) ;

__attribute__((used)) static void FUNC_1(const menu_entry *VAR_1, int VAR_2, int VAR_3, void *VAR_4)
{
 switch (VAR_1->id)
 {
  case 129:
   FUNC_0(VAR_2, VAR_3, "Scale factor:                      %.2f", VAR_0.scale);
   break;
  case 131:
   FUNC_0(VAR_2, VAR_3, "Hor. scale (for low res. games):   %.2f", VAR_0.hscale32);
   break;
  case 130:
   FUNC_0(VAR_2, VAR_3, "Hor. scale (for hi res. games):    %.2f", VAR_0.hscale40);
   break;
  case 133:
   FUNC_0(VAR_2, VAR_3, "Bilinear filtering                 %s", VAR_0.scaling?"ON":"OFF");
   break;
  case 132:
   FUNC_0(VAR_2, VAR_3, "Gamma adjustment                  %2i", VAR_0.gamma);
   break;
  case 134:
   FUNC_0(VAR_2, VAR_3, "Black level                       %2i", VAR_0.gamma2);
   break;
  case 128: {
   char *VAR_5 = "    never";
   if (VAR_0.EmuOpt & 0x2000)
    VAR_5 = (VAR_0.EmuOpt & 0x10000) ? "sometimes" : "   always";
   FUNC_0(VAR_2, VAR_3, "Wait for vsync (slow)         %s", VAR_5);
   break;
  }
  default: break;
 }
}
