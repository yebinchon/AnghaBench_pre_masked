
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v4l2_std_id ;
struct v4l2_subdev {int dummy; } ;
struct ks0127 {int norm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct v4l2_subdev*,int ,int,int) ;
 int FUNC_1 (struct v4l2_subdev*,int ) ;
 int FUNC_2 (int) ;
 struct ks0127* FUNC_3 (struct v4l2_subdev*) ;
 int FUNC_4 (int,int ,struct v4l2_subdev*,char*,...) ;

__attribute__((used)) static int FUNC_5(struct v4l2_subdev *VAR_9, v4l2_std_id VAR_10)
{
 struct ks0127 *VAR_11 = FUNC_3(VAR_9);


 FUNC_0(VAR_9, VAR_2, 0xf0, 0x00);

 VAR_11->norm = VAR_10;
 if (VAR_10 & VAR_3) {
  FUNC_4(1, VAR_8, VAR_9,
   "s_std: NTSC_M\n");
  FUNC_0(VAR_9, VAR_1, 0x9f, 0x20);
 } else if (VAR_10 & VAR_6) {
  FUNC_4(1, VAR_8, VAR_9,
   "s_std: NTSC_N (fixme)\n");
  FUNC_0(VAR_9, VAR_1, 0x9f, 0x40);
 } else if (VAR_10 & VAR_4) {
  FUNC_4(1, VAR_8, VAR_9,
   "s_std: PAL_N\n");
  FUNC_0(VAR_9, VAR_1, 0x9f, 0x20);
 } else if (VAR_10 & VAR_5) {
  FUNC_4(1, VAR_8, VAR_9,
   "s_std: PAL_M (fixme)\n");
  FUNC_0(VAR_9, VAR_1, 0x9f, 0x40);
 } else if (VAR_10 & VAR_7) {
  FUNC_4(1, VAR_8, VAR_9,
   "s_std: SECAM\n");


  FUNC_0(VAR_9, VAR_1, 0xdf, 0x20);
  FUNC_0(VAR_9, VAR_2, 0xf0, 0x00);
  FUNC_2(VAR_0/10+1);


  if (!(FUNC_1(VAR_9, VAR_2) & 0x40))

   FUNC_0(VAR_9, VAR_2, 0xf0, 0x0f);
 } else {
  FUNC_4(1, VAR_8, VAR_9, "s_std: Unknown norm %llx\n",
          (unsigned long long)VAR_10);
 }
 return 0;
}
