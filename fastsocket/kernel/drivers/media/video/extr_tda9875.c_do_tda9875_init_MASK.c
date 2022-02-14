
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct tda9875 {scalar_t__ treble; scalar_t__ bass; scalar_t__ rvol; scalar_t__ lvol; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
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
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int FUNC_0 (struct v4l2_subdev*) ;
 int FUNC_1 (struct v4l2_subdev*,int ,int) ;
 struct tda9875* FUNC_2 (struct v4l2_subdev*) ;
 int FUNC_3 (int,int ,struct v4l2_subdev*,char*) ;

__attribute__((used)) static void FUNC_4(struct v4l2_subdev *VAR_31)
{
 struct tda9875 *VAR_32 = FUNC_2(VAR_31);

 FUNC_3(1, VAR_30, VAR_31, "In tda9875_init\n");
 FUNC_1(VAR_31, VAR_13, 0xd0);
 FUNC_1(VAR_31, VAR_23, 0x03);
 FUNC_1(VAR_31, VAR_9, 0x00);
 FUNC_1(VAR_31, VAR_8, 0x00);
 FUNC_1(VAR_31, VAR_7, 0x00);
 FUNC_1(VAR_31, VAR_12, 0x00);
 FUNC_1(VAR_31, VAR_11, 0x00);
 FUNC_1(VAR_31, VAR_10, 0x00);
 FUNC_1(VAR_31, VAR_17, 0x00);
 FUNC_1(VAR_31, VAR_18, 0x44);
 FUNC_1(VAR_31, VAR_19, 0x00);
 FUNC_1(VAR_31, VAR_28, 0x00);
 FUNC_1(VAR_31, VAR_29, 0x01);

 FUNC_1(VAR_31, VAR_14, 0x10);
 FUNC_1(VAR_31, VAR_15, 0x10);
 FUNC_1(VAR_31, VAR_16, 0x02);
 FUNC_1(VAR_31, VAR_2, 0x6f);
 FUNC_1(VAR_31, VAR_20, 0x00);
 FUNC_1(VAR_31, VAR_3, 0x00);
 FUNC_1(VAR_31, VAR_22, 0x44);
 FUNC_1(VAR_31, VAR_26, 0x03);
 FUNC_1(VAR_31, VAR_27, 0x03);
 FUNC_1(VAR_31, VAR_21, 0x00);
 FUNC_1(VAR_31, VAR_24, 0x00);
 FUNC_1(VAR_31, VAR_1, 0x44);
 FUNC_1(VAR_31, VAR_5, 0x00);
 FUNC_1(VAR_31, VAR_6, 0x00);
 FUNC_1(VAR_31, VAR_0, 0x00);
 FUNC_1(VAR_31, VAR_4, 0x00);

 FUNC_1(VAR_31, VAR_25, 0xcc);

 VAR_32->lvol = VAR_32->rvol = 0;
 VAR_32->bass = 0;
 VAR_32->treble = 0;
 FUNC_0(VAR_31);
}
