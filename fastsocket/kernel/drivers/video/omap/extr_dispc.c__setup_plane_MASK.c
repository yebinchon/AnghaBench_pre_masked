
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int * fir_hinc; int * fir_vinc; TYPE_1__* fbdev; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int const VAR_1 ;
 int const VAR_2 ;
 int const VAR_3 ;
 int const VAR_4 ;
 int const VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int const VAR_8 ;
 int const VAR_9 ;
 int const VAR_10 ;
 int const VAR_11 ;
 int const VAR_12 ;
 int const VAR_13 ;
 int const VAR_14 ;
 int const VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int const,int,int) ;
 int FUNC_2 (int ,char*,int,int,int,int,int,int,int,int,int) ;
 TYPE_2__ VAR_18 ;
 int FUNC_3 (int const) ;
 int FUNC_4 (int const,int) ;

__attribute__((used)) static inline int FUNC_5(int VAR_19, int VAR_20,
      u32 VAR_21, int VAR_22,
      int VAR_23, int VAR_24, int VAR_25, int VAR_26,
      int VAR_27)
{
 const u32 VAR_28[] = { VAR_1,
    VAR_8 + VAR_10,
           VAR_9 + VAR_10 };
 const u32 VAR_29[] = { VAR_2, VAR_8 + VAR_11,
    VAR_9 + VAR_11 };
 const u32 VAR_30[] = { VAR_3,
    VAR_8 + VAR_13,
    VAR_9 + VAR_13 };
 const u32 VAR_31[] = { VAR_5,
    VAR_8 + VAR_12,
    VAR_9 + VAR_12 };
 const u32 VAR_32[] = { VAR_4,
    VAR_8 + VAR_14,
           VAR_9 + VAR_14 };
 const u32 VAR_33[] = { 0, VAR_8 + VAR_15,
    VAR_9 + VAR_15 };

 int VAR_34, VAR_35;
 int VAR_36;
 int VAR_37;
 int VAR_38;
 int VAR_39;
 int VAR_40;
 u32 VAR_41;
 VAR_40 = 0;
 switch (VAR_19) {
 case 130:
  VAR_35 = 6;
  VAR_34 = 8;
  break;
 case 129:
 case 128:
  VAR_35 = 14;
  VAR_34 = 16;
  VAR_40 = 1;
  break;
 default:
  return -VAR_17;
 }

 switch (VAR_20) {
 case 134:
  VAR_36 = 0;
  break;
 case 135:
  VAR_36 = 1;
  break;
 default:
  return -VAR_17;
 }

 VAR_39 = 0;
 switch (VAR_27) {
 case 133:
  VAR_37 = VAR_6;
  VAR_38 = 16;
  break;
 case 132:
  if (VAR_19 == 0)
   return -VAR_17;
  VAR_37 = VAR_7;
  VAR_39 = 1;
  VAR_38 = 16;
  break;
 case 131:
  if (VAR_19 == 0)
   return -VAR_17;
  VAR_37 = VAR_16;
  VAR_39 = 1;
  VAR_38 = 16;
  break;
 default:
  return -VAR_17;
 }

 VAR_41 = FUNC_3(VAR_28[VAR_19]);

 VAR_41 &= ~(0x0f << 1);
 VAR_41 |= VAR_37 << 1;
 VAR_41 &= ~(1 << 9);
 VAR_41 |= VAR_39 << 9;

 VAR_41 &= ~(0x03 << VAR_35);
 VAR_41 |= VAR_0 << VAR_35;

 VAR_41 &= ~(1 << VAR_34);
 VAR_41 |= VAR_36 << VAR_34;

 FUNC_4(VAR_28[VAR_19], VAR_41);

 FUNC_4(VAR_29[VAR_19], VAR_21);
 FUNC_1(VAR_30[VAR_19],
      FUNC_0(16, 11) | FUNC_0(0, 11), (VAR_24 << 16) | VAR_23);

 FUNC_1(VAR_31[VAR_19], FUNC_0(16, 11) | FUNC_0(0, 11),
   ((VAR_26 - 1) << 16) | (VAR_25 - 1));

 if (VAR_40) {

  if (!VAR_18.fir_vinc[VAR_19])
   FUNC_1(VAR_33[VAR_19],
    FUNC_0(16, 11), (VAR_26 - 1) << 16);
  if (!VAR_18.fir_hinc[VAR_19])
   FUNC_1(VAR_33[VAR_19],
    FUNC_0(0, 11), VAR_25 - 1);
 }

 FUNC_4(VAR_32[VAR_19], (VAR_22 - VAR_25) * VAR_38 / 8 + 1);

 return VAR_26 * VAR_22 * VAR_38 / 8;
}
