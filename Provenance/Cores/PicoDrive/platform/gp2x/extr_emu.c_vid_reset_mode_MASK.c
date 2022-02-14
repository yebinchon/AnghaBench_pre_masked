
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int dirtyPal; int pal; } ;
struct TYPE_6__ {TYPE_1__ m; } ;
struct TYPE_5__ {int EmuOpt; scalar_t__ scaling; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;
 int * VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 TYPE_3__ VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int) ;
 int VAR_15 ;



 TYPE_2__ VAR_16 ;
 int VAR_17 ;
 int * VAR_18 ;
 int * VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int,int) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (int*,int) ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 () ;
 int* VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int FUNC_9 (char*) ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;

__attribute__((used)) static void FUNC_10(void)
{
 int VAR_33 = 16;
 int VAR_34 = FUNC_3();

 VAR_15 &= ~VAR_11;
 VAR_18 = ((void*)0);
 VAR_19 = ((void*)0);

 switch (VAR_34) {
 case 130:
  FUNC_2(VAR_10, 0);
  FUNC_1(VAR_20, VAR_21 * 2);
  break;
 case 129:
  FUNC_2(VAR_8, 0);
  FUNC_1(VAR_20, VAR_21);
  VAR_33 = 8;
  break;
 case 128:
  VAR_15 |= VAR_11;
  FUNC_2(VAR_9, 0);
  VAR_30 = VAR_31;
  VAR_33 = 8;
  break;
 default:
  FUNC_9("bad renderer\n");
  break;
 }

 if (VAR_14 & VAR_6) {

  if (VAR_34 == 130 && (VAR_16.EmuOpt & VAR_1)) {
   FUNC_2(VAR_10, 1);
  }
  else {
   FUNC_2(VAR_9, 0);
  }
  FUNC_1(VAR_20, VAR_21 * 2);
  VAR_33 = 16;
 }

 if (VAR_16.EmuOpt & VAR_1) {
  if ((VAR_14 & VAR_6) || VAR_34 == 130) {
   VAR_18 = VAR_2;
   VAR_19 = VAR_4;
  }
  else if (VAR_34 == 129) {
   VAR_18 = VAR_3;
   VAR_19 = VAR_5;
  }
  else if (VAR_34 == 128)
   VAR_30 = VAR_32;
 }

 FUNC_0(VAR_18, VAR_19);

 if (FUNC_8())
  VAR_26 = (VAR_16.EmuOpt & VAR_1) ? VAR_27 : VAR_17;
 else
  VAR_26 = (VAR_16.EmuOpt & VAR_1) ? VAR_29 : VAR_28;

 FUNC_7();
 if (!FUNC_8()) {

  VAR_22[0xc0] = 0x0000c000;
  VAR_22[0xd0] = 0x00c00000;
  VAR_22[0xe0] = 0x00000000;
  VAR_22[0xf0] = 0x00ffffff;
  FUNC_6(VAR_22, 0x100);
  FUNC_4(0, 0xe0, 320*240);
 }
 else
  FUNC_4(0, 0, 320*240*2);

 if (VAR_16.EmuOpt & VAR_1)
  VAR_33 = -VAR_33;

 FUNC_5(VAR_33, VAR_13.m.pal);

 VAR_13.m.dirtyPal = 1;

 VAR_15 &= ~VAR_12;
 if (VAR_16.scaling == VAR_0)
  VAR_15 |= VAR_12;


 VAR_23 = (VAR_14 & VAR_7) ? VAR_25 : VAR_24;
}
