
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct v4l2_sliced_vbi_data {int id; int* data; int field; } ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (struct v4l2_subdev*,int) ;

__attribute__((used)) static int FUNC_1(struct v4l2_subdev *VAR_2, struct v4l2_sliced_vbi_data *VAR_3)
{



 switch (VAR_3->id) {
 case 128:
  if (FUNC_0(VAR_2, 0x6b) & 0xc0)
   return -VAR_1;
  VAR_3->data[0] = FUNC_0(VAR_2, 0x6c);
  VAR_3->data[1] = FUNC_0(VAR_2, 0x6d);
  return 0;
 case 129:
  if (VAR_3->field == 0) {

   if (FUNC_0(VAR_2, 0x66) & 0x30)
    return -VAR_1;
   VAR_3->data[0] = FUNC_0(VAR_2, 0x69);
   VAR_3->data[1] = FUNC_0(VAR_2, 0x6a);
   return 0;
  }

  if (FUNC_0(VAR_2, 0x66) & 0xc0)
   return -VAR_1;
  VAR_3->data[0] = FUNC_0(VAR_2, 0x67);
  VAR_3->data[1] = FUNC_0(VAR_2, 0x68);
  return 0;
 default:
  return -VAR_0;
 }
}
