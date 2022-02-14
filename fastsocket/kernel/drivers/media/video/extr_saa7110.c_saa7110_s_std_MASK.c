
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v4l2_std_id ;
struct v4l2_subdev {int dummy; } ;
struct saa7110 {int norm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct v4l2_subdev*,int,int) ;
 struct saa7110* FUNC_1 (struct v4l2_subdev*) ;
 int FUNC_2 (int,int ,struct v4l2_subdev*,char*) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_5, v4l2_std_id VAR_6)
{
 struct saa7110 *VAR_7 = FUNC_1(VAR_5);

 if (VAR_7->norm != VAR_6) {
  VAR_7->norm = VAR_6;

  if (VAR_6 & VAR_1) {
   FUNC_0(VAR_5, 0x0D, 0x86);
   FUNC_0(VAR_5, 0x0F, 0x50);
   FUNC_0(VAR_5, 0x11, 0x2C);

   FUNC_2(1, VAR_4, VAR_5, "switched to NTSC\n");
  } else if (VAR_6 & VAR_2) {
   FUNC_0(VAR_5, 0x0D, 0x86);
   FUNC_0(VAR_5, 0x0F, 0x10);
   FUNC_0(VAR_5, 0x11, 0x59);

   FUNC_2(1, VAR_4, VAR_5, "switched to PAL\n");
  } else if (VAR_6 & VAR_3) {
   FUNC_0(VAR_5, 0x0D, 0x87);
   FUNC_0(VAR_5, 0x0F, 0x10);
   FUNC_0(VAR_5, 0x11, 0x59);

   FUNC_2(1, VAR_4, VAR_5, "switched to SECAM\n");
  } else {
   return -VAR_0;
  }
 }
 return 0;
}
