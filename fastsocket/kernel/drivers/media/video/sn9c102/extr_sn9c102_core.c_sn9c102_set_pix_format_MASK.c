
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_pix_format {scalar_t__ pixelformat; } ;
struct sn9c102_device {int bridge; int* reg; } ;







 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct sn9c102_device*,int,int) ;

__attribute__((used)) static int
FUNC_1(struct sn9c102_device* VAR_3, struct v4l2_pix_format* VAR_4)
{
 int VAR_5 = 0;

 if (VAR_4->pixelformat == VAR_2 ||
     VAR_4->pixelformat == VAR_1) {
  switch (VAR_3->bridge) {
  case 132:
  case 131:
  case 130:
   VAR_5 += FUNC_0(VAR_3, VAR_3->reg[0x18] | 0x80,
       0x18);
   break;
  case 129:
  case 128:
   VAR_5 += FUNC_0(VAR_3, VAR_3->reg[0x18] & 0x7f,
       0x18);
   break;
  }
 } else {
  switch (VAR_3->bridge) {
  case 132:
  case 131:
  case 130:
   VAR_5 += FUNC_0(VAR_3, VAR_3->reg[0x18] & 0x7f,
       0x18);
   break;
  case 129:
  case 128:
   VAR_5 += FUNC_0(VAR_3, VAR_3->reg[0x18] | 0x80,
       0x18);
   break;
  }
 }

 return VAR_5 ? -VAR_0 : 0;
}
