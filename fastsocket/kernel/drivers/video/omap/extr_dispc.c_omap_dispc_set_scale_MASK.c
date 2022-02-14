
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int* fir_hinc; int* fir_vinc; TYPE_1__* fbdev; } ;
struct TYPE_3__ {int dev; } ;


 int const VAR_0 ;
 int const VAR_1 ;
 int const VAR_2 ;
 int const VAR_3 ;
 int const VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int const,int,int) ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 int FUNC_2 (int ,char*,int,int,int,int,int,int) ;
 TYPE_2__ VAR_9 ;
 int FUNC_3 (int const) ;
 int FUNC_4 (int const,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(int VAR_10,
    int VAR_11, int VAR_12,
    int VAR_13, int VAR_14)
{
 const u32 VAR_15[] = { 0, VAR_0 + VAR_2,
    VAR_1 + VAR_2 };
 const u32 VAR_16[] = { 0, VAR_0 + VAR_4,
    VAR_1 + VAR_4 };
 const u32 VAR_17[] = { 0, VAR_0 + VAR_3,
    VAR_1 + VAR_3 };

 u32 VAR_18;
 int VAR_19;
 int VAR_20;

 if ((unsigned)VAR_10 > VAR_8)
  return -VAR_6;

 if (VAR_10 == VAR_7 &&
     (VAR_13 != VAR_11 || VAR_14 != VAR_12))
  return -VAR_5;

 FUNC_5(1);
 if (VAR_11 < VAR_13) {




  if (VAR_12 > VAR_14 ||
      VAR_11 * 8 < VAR_13 ||
      VAR_12 * 8 < VAR_14) {
   FUNC_5(0);
   return -VAR_5;
  }
  FUNC_6(VAR_10);
 } else if (VAR_11 > VAR_13) {



  FUNC_5(0);
  return -VAR_5;
 }
 if (!VAR_11 || VAR_11 == VAR_13)
  VAR_19 = 0;
 else
  VAR_19 = 1024 * VAR_11 / VAR_13;
 if (!VAR_12 || VAR_12 == VAR_14)
  VAR_20 = 0;
 else
  VAR_20 = 1024 * VAR_12 / VAR_14;
 VAR_9.fir_hinc[VAR_10] = VAR_19;
 VAR_9.fir_vinc[VAR_10] = VAR_20;

 FUNC_1(VAR_17[VAR_10],
      FUNC_0(16, 12) | FUNC_0(0, 12),
      ((VAR_20 & 4095) << 16) |
      (VAR_19 & 4095));

 FUNC_2(VAR_9.fbdev->dev, "out_width %d out_height %d orig_width %d "
  "orig_height %d fir_hinc  %d fir_vinc %d\n",
  VAR_13, VAR_14, VAR_11, VAR_12,
  VAR_19, VAR_20);

 FUNC_1(VAR_16[VAR_10],
      FUNC_0(16, 11) | FUNC_0(0, 11),
      ((VAR_14 - 1) << 16) | (VAR_13 - 1));

 VAR_18 = FUNC_3(VAR_15[VAR_10]);
 VAR_18 &= ~(0x03 << 5);
 VAR_18 |= VAR_19 ? (1 << 5) : 0;
 VAR_18 |= VAR_20 ? (1 << 6) : 0;
 FUNC_4(VAR_15[VAR_10], VAR_18);

 FUNC_5(0);
 return 0;
}
