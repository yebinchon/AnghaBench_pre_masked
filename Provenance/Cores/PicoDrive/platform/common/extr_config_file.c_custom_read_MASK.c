
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int id; } ;
typedef TYPE_1__ menu_entry ;
struct TYPE_5__ {int Frameskip; int msh2_khz; int ssh2_khz; int EmuOpt; void* hscale40; void* hscale32; void* scale; void* gamma; } ;
 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_1 (char const*) ;
 void* FUNC_2 (char const*) ;
 TYPE_3__ VAR_5 ;
 int FUNC_3 (char*,int,char const*) ;
 int FUNC_4 (char const*,char*) ;
 int FUNC_5 (char const*) ;
 int FUNC_6 (char const*,char*,int) ;
 int FUNC_7 (char const*,char**,int) ;

__attribute__((used)) static int FUNC_8(menu_entry *VAR_6, const char *VAR_7, const char *VAR_8)
{
 char *VAR_9;

 switch (VAR_6->id)
 {
  case 130:
   if (FUNC_4(VAR_7, "Frameskip") != 0) return 0;
   if (FUNC_4(VAR_8, "Auto") == 0)
        VAR_5.Frameskip = -1;
   else VAR_5.Frameskip = FUNC_2(VAR_8);
   return 1;

  case 128:
   if (FUNC_4(VAR_7, "Sound Quality") != 0) return 0;
   VAR_4 = FUNC_7(VAR_8, &VAR_9, 10);
   if (VAR_4 < 8000 || VAR_4 > 44100)
    VAR_4 = 22050;
   if (*VAR_9 == 'H' || *VAR_9 == 'h') VAR_9++;
   if (*VAR_9 == 'Z' || *VAR_9 == 'z') VAR_9++;
   while (*VAR_9 == ' ') VAR_9++;
   if (FUNC_4(VAR_9, "stereo") == 0) {
    VAR_2 |= VAR_0;
   } else if (FUNC_4(VAR_9, "mono") == 0) {
    VAR_2 &= ~VAR_0;
   } else
    return 0;
   return 1;

  case 129:
   if (FUNC_4(VAR_7, "Region") != 0) return 0;
   if (FUNC_6(VAR_8, "Auto: ", 6) == 0)
   {
    const char *VAR_10 = VAR_8 + 5, *VAR_11 = VAR_8 + FUNC_5(VAR_8);
    int VAR_12;
    VAR_3 = VAR_1 = 0;
    for (VAR_12 = 0; VAR_10 < VAR_11 && VAR_12 < 3; VAR_12++)
    {
     while (*VAR_10 == ' ') VAR_10++;
     if (VAR_10[0] == 'J' && VAR_10[1] == 'P') {
      VAR_1 |= 1 << (VAR_12*4);
     } else if (VAR_10[0] == 'U' && VAR_10[1] == 'S') {
      VAR_1 |= 4 << (VAR_12*4);
     } else if (VAR_10[0] == 'E' && VAR_10[1] == 'U') {
      VAR_1 |= 8 << (VAR_12*4);
     }
     while (*VAR_10 != ' ' && *VAR_10 != 0) VAR_10++;
     if (*VAR_10 == 0) break;
    }
   }
   else if (FUNC_4(VAR_8, "Auto") == 0) {
    VAR_3 = 0;
   } else if (FUNC_4(VAR_8, "Japan NTSC") == 0) {
    VAR_3 = 1;
   } else if (FUNC_4(VAR_8, "Japan PAL") == 0) {
    VAR_3 = 2;
   } else if (FUNC_4(VAR_8, "USA") == 0) {
    VAR_3 = 4;
   } else if (FUNC_4(VAR_8, "Europe") == 0) {
    VAR_3 = 8;
   } else
    return 0;
   return 1;

  case 137:
   VAR_5.msh2_khz = FUNC_2(VAR_8);
   FUNC_0(VAR_5.msh2_khz * 1000, 0);
   return 1;

  case 136:
   VAR_5.ssh2_khz = FUNC_2(VAR_8);
   FUNC_0(0, VAR_5.ssh2_khz * 1000);
   return 1;

  case 135:
   VAR_5.gamma = FUNC_2(VAR_8);
   return 1;


  case 132:
   if (FUNC_4(VAR_7, "Scale factor") != 0) return 0;
   VAR_5.scale = FUNC_1(VAR_8);
   return 1;
  case 134:
   if (FUNC_4(VAR_7, "Hor. scale (for low res. games)") != 0) return 0;
   VAR_5.hscale32 = FUNC_1(VAR_8);
   return 1;
  case 133:
   if (FUNC_4(VAR_7, "Hor. scale (for hi res. games)") != 0) return 0;
   VAR_5.hscale40 = FUNC_1(VAR_8);
   return 1;
  case 131:

   if (FUNC_4(VAR_7, "Wait for vsync") != 0) return 0;
   if (FUNC_4(VAR_8, "never") == 0) {
    VAR_5.EmuOpt &= ~0x12000;
   } else if (FUNC_4(VAR_8, "sometimes") == 0) {
    VAR_5.EmuOpt |= 0x12000;
   } else if (FUNC_4(VAR_8, "always") == 0) {
    VAR_5.EmuOpt &= ~0x12000;
    VAR_5.EmuOpt |= 0x02000;
   } else
    return 0;
   return 1;

  default:
   FUNC_3("unhandled custom_read %i: %s\n", VAR_6->id, VAR_7);
   return 0;
 }
}
