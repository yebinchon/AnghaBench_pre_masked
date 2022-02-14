
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct v4l2_subdev {int dummy; } ;
struct firmware {int size; scalar_t__* data; } ;
struct TYPE_3__ {struct v4l2_subdev sd; } ;
struct cx18 {TYPE_2__* pci_dev; TYPE_1__ av_state; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct v4l2_subdev*,char*,int ) ;
 int FUNC_1 (struct v4l2_subdev*,char*,int ,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_2 (struct cx18*,int ,int ,int) ;
 int FUNC_3 (struct cx18*,int) ;
 scalar_t__ FUNC_4 (struct cx18*,struct firmware const*) ;
 int FUNC_5 (struct cx18*,int,int) ;
 int FUNC_6 (struct cx18*,int,int,int,int) ;
 int FUNC_7 (struct cx18*,int,int) ;
 int FUNC_8 (struct cx18*,int,int,int,int) ;
 int FUNC_9 (struct cx18*,int ) ;
 int FUNC_10 (struct cx18*,int,int ,int,int) ;
 int FUNC_11 (struct firmware const*) ;
 scalar_t__ FUNC_12 (struct firmware const**,int ,int *) ;
 int FUNC_13 (int) ;

int FUNC_14(struct cx18 *VAR_16)
{
 struct v4l2_subdev *VAR_17 = &VAR_16->av_state.sd;
 const struct firmware *VAR_18 = ((void*)0);
 u32 VAR_19;
 u32 VAR_20, VAR_21;
 const u8 *VAR_22;
 int VAR_23;
 int VAR_24 = 0;

 if (FUNC_12(&VAR_18, VAR_15, &VAR_16->pci_dev->dev) != 0) {
  FUNC_0(VAR_17, "unable to open firmware %s\n", VAR_15);
  return -VAR_13;
 }



 while (VAR_24 < 5) {
  FUNC_6(VAR_16, VAR_6, 0x00010000,
       0x00008430, 0xffffffff);
  FUNC_8(VAR_16, VAR_12, 0xf6, 0xf6, 0xff);


  FUNC_6(VAR_16, 0x8100, 0x00010000,
       0x00008430, 0xffffffff);


  FUNC_7(VAR_16, VAR_7, 0x0F000000);

  VAR_22 = VAR_18->data;
  VAR_19 = VAR_18->size;

  for (VAR_23 = 0; VAR_23 < VAR_19; VAR_23++) {
   u32 VAR_25 = 0x0F000000 | VAR_23 | ((u32)VAR_22[VAR_23] << 16);
   u32 VAR_26 = 0;
   int VAR_27;
   int VAR_28 = 0;

   for (VAR_27 = 0; VAR_27 < VAR_5;
        VAR_27++) {
    FUNC_7(VAR_16, VAR_7,
             VAR_25);
    FUNC_13(10);
    VAR_26 = FUNC_3(VAR_16, VAR_7);
    if (VAR_26 == VAR_25)
     break;



    if ((VAR_26 & 0x3F00) != (VAR_25 & 0x3F00)) {
     VAR_28 = 1;
     break;
    }
   }
   if (VAR_28 || VAR_27 >= VAR_5)
    break;
  }
  if (VAR_23 == VAR_19)
   break;
  VAR_24++;
 }
 if (VAR_24 >= 5) {
  FUNC_0(VAR_17, "unable to load firmware %s\n", VAR_15);
  FUNC_11(VAR_18);
  return -VAR_14;
 }

 FUNC_6(VAR_16, VAR_7,
    0x03000000 | VAR_18->size, 0x03000000, 0x13000000);

 FUNC_1(VAR_17, "loaded %s firmware (%d bytes)\n", VAR_15, VAR_19);

 if (FUNC_4(VAR_16, VAR_18) == 0)
  FUNC_6(VAR_16, VAR_7,
    0x13000000 | VAR_18->size, 0x13000000, 0x13000000);


 FUNC_2(VAR_16, VAR_11, ~0, 0x78000);






 FUNC_5(VAR_16, VAR_8, 0x000000A0);
 FUNC_5(VAR_16, VAR_9, 0x000001A0);



 FUNC_5(VAR_16, VAR_10, 0x5600B687);

 FUNC_6(VAR_16, VAR_12, 0x000000F6, 0x000000F6,
          0x3F00FFFF);





 FUNC_5(VAR_16, 0x09CC, 1);

 VAR_21 = FUNC_9(VAR_16, VAR_4);

 if (VAR_21 & 0x800)
  FUNC_10(VAR_16, VAR_21 & 0xFFFFFBFF, VAR_4,
          0, 0x400);


 VAR_21 = FUNC_9(VAR_16, VAR_4);
 VAR_20 = VAR_21 & VAR_3;
 VAR_21 &= ~VAR_3;
 if (VAR_20 == VAR_0 || VAR_20 == VAR_2) {

  VAR_21 |= VAR_1;
  FUNC_10(VAR_16, VAR_21 | 0xb00, VAR_4,
          VAR_21, VAR_3);

  VAR_21 = (VAR_21 & ~VAR_3) | VAR_0;
 } else {

  VAR_21 |= VAR_0;
  FUNC_10(VAR_16, VAR_21 | 0xb00, VAR_4,
          VAR_21, VAR_3);

  VAR_21 = (VAR_21 & ~VAR_3) | VAR_20;
 }
 FUNC_10(VAR_16, VAR_21 | 0xb00, VAR_4,
         VAR_21, VAR_3);


 VAR_21 = FUNC_3(VAR_16, VAR_12);
 VAR_21 |= 0xFF;
 VAR_21 |= 0x400;
 VAR_21 |= 0x14000000;
 FUNC_6(VAR_16, VAR_12, VAR_21, VAR_21, 0x3F00FFFF);

 FUNC_11(VAR_18);
 return 0;
}
