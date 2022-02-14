
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_jpegcompression {int quality; } ;
struct sn9c102_device {int bridge; int* reg; } ;







 int VAR_0 ;
 int* VAR_1 ;
 int* VAR_2 ;
 int FUNC_0 (struct sn9c102_device*,int,int) ;

__attribute__((used)) static int
FUNC_1(struct sn9c102_device* VAR_3,
   struct v4l2_jpegcompression* VAR_4)
{
 int VAR_5, VAR_6 = 0;

 switch (VAR_3->bridge) {
 case 132:
 case 131:
 case 130:
  if (VAR_4->quality == 0)
   VAR_6 += FUNC_0(VAR_3, VAR_3->reg[0x17] | 0x01,
       0x17);
  else if (VAR_4->quality == 1)
   VAR_6 += FUNC_0(VAR_3, VAR_3->reg[0x17] & 0xfe,
       0x17);
  break;
 case 129:
 case 128:
  if (VAR_4->quality == 0) {
   for (VAR_5 = 0; VAR_5 <= 63; VAR_5++) {
    VAR_6 += FUNC_0(VAR_3,
        VAR_2[VAR_5],
        0x100 + VAR_5);
    VAR_6 += FUNC_0(VAR_3,
        VAR_1[VAR_5],
        0x140 + VAR_5);
   }
   VAR_6 += FUNC_0(VAR_3, VAR_3->reg[0x18] & 0xbf,
       0x18);
  } else if (VAR_4->quality == 1) {
   for (VAR_5 = 0; VAR_5 <= 63; VAR_5++) {
    VAR_6 += FUNC_0(VAR_3,
        VAR_2[VAR_5],
        0x100 + VAR_5);
    VAR_6 += FUNC_0(VAR_3,
        VAR_1[VAR_5],
        0x140 + VAR_5);
   }
   VAR_6 += FUNC_0(VAR_3, VAR_3->reg[0x18] | 0x40,
       0x18);
  }
  break;
 }

 return VAR_6 ? -VAR_0 : 0;
}
