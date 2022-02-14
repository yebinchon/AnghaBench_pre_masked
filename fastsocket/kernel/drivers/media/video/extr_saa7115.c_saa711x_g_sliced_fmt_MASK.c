
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef void* u16 ;
struct v4l2_subdev {int dummy; } ;
struct v4l2_sliced_vbi_format {int** service_lines; int service_set; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;




 int FUNC_0 (struct v4l2_sliced_vbi_format*,int ,int) ;
 int FUNC_1 (struct v4l2_subdev*,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_2, struct v4l2_sliced_vbi_format *VAR_3)
{
 static u16 VAR_4[] = {
  0, 130, 0,
  0, 131,
  128, 0,
  129, 0, 0, 0, 0,
  0, 0, 0, 0
 };
 int VAR_5;

 FUNC_0(VAR_3, 0, sizeof(*VAR_3));

 if (FUNC_1(VAR_2, VAR_1) & 0x10)
  return 0;
 for (VAR_5 = 2; VAR_5 <= 23; VAR_5++) {
  u8 VAR_6 = FUNC_1(VAR_2, VAR_5 - 2 + VAR_0);

  VAR_3->service_lines[0][VAR_5] = VAR_4[VAR_6 >> 4];
  VAR_3->service_lines[1][VAR_5] = VAR_4[VAR_6 & 0xf];
  VAR_3->service_set |=
   VAR_3->service_lines[0][VAR_5] | VAR_3->service_lines[1][VAR_5];
 }
 return 0;
}
