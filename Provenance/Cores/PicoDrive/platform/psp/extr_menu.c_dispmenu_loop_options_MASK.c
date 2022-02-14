
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int menu_id ;
struct TYPE_4__ {int* reg; } ;
struct TYPE_6__ {TYPE_1__ video; } ;
struct TYPE_5__ {float scale; float hscale40; float hscale32; int EmuOpt; } ;
 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 TYPE_3__ VAR_7 ;
 TYPE_2__ VAR_8 ;
 int FUNC_0 (int) ;
 unsigned long FUNC_1 (unsigned long,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int ,int,int) ;
 int FUNC_5 (int) ;
 int VAR_9 ;
 unsigned long FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(void)
{
 static int VAR_10 = 0;
 int VAR_11, VAR_12 = (VAR_7.video.reg[12]&1)^1;
 unsigned long VAR_13 = 0;
 menu_id VAR_14;

 VAR_11 = FUNC_2(VAR_9, VAR_0) - 1;

 for (;;)
 {
  FUNC_0(VAR_10);
  VAR_13 = FUNC_1(VAR_5|VAR_2|VAR_3|VAR_4|VAR_6|VAR_1, 0);
  if (VAR_13 & VAR_5 ) { VAR_10--; if (VAR_10 < 0) VAR_10 = VAR_11; }
  if (VAR_13 & VAR_2) { VAR_10++; if (VAR_10 > VAR_11) VAR_10 = 0; }
  VAR_14 = FUNC_3(VAR_9, VAR_0, VAR_10);
  if (VAR_14 == 133 && VAR_12) { VAR_12 = 0; FUNC_5(VAR_12); }
  if (VAR_14 == 134 && !VAR_12) { VAR_12 = 1; FUNC_5(VAR_12); }

  if (VAR_13 & (VAR_3|VAR_4))
  {
   float *VAR_15 = ((void*)0);
   int VAR_16;
   FUNC_4(VAR_9, VAR_0, VAR_14, (VAR_13&VAR_4) ? 1 : 0);
   switch (VAR_14) {
    case 129: VAR_15 = &VAR_8.scale; break;
    case 133: VAR_15 = &VAR_8.hscale40; VAR_12 = 0; break;
    case 134: VAR_15 = &VAR_8.hscale32; VAR_12 = 1; break;
    case 136:
    case 135:
    case 138: FUNC_5(VAR_12); break;
    case 128:
     VAR_16 = ((VAR_8.EmuOpt>>13)&1) | ((VAR_8.EmuOpt>>15)&2);
     VAR_16 = (VAR_13 & VAR_3) ? (VAR_16>>1) : ((VAR_16<<1)|1);
     if (VAR_16 > 3) VAR_16 = 3;
     VAR_8.EmuOpt &= ~0x12000;
     VAR_8.EmuOpt |= ((VAR_16&2)<<15) | ((VAR_16&1)<<13);
     break;
    default: break;
   }
   if (VAR_15 != ((void*)0)) {
    while ((VAR_13 = FUNC_6(0)) & (VAR_3|VAR_4)) {
     *VAR_15 += (VAR_13 & VAR_3) ? -0.01 : 0.01;
     if (*VAR_15 <= 0) *VAR_15 = 0.01;
     FUNC_5(VAR_12);
     FUNC_0(VAR_10);
    }
   }
  }
  if (VAR_13 & VAR_1) {
   FUNC_4(VAR_9, VAR_0, VAR_14, 1);
   switch (VAR_14) {
    case 137:
     return;
    case 131:
     VAR_8.scale = VAR_8.hscale40 = VAR_8.hscale32 = 1.0;
     FUNC_5(VAR_12);
     break;
    case 130:
     VAR_8.scale = 1.20;
     VAR_8.hscale40 = 1.00;
     VAR_8.hscale32 = 1.25;
     FUNC_5(VAR_12);
     break;
    case 132:
     VAR_8.scale = 1.20;
     VAR_8.hscale40 = 1.25;
     VAR_8.hscale32 = 1.56;
     FUNC_5(VAR_12);
     break;
    case 136:
     FUNC_5(VAR_12);
     break;
    default: break;
   }
  }
  if (VAR_13 & VAR_6) return;
 }
}
