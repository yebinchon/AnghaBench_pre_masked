
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_pix_format {int pixelformat; } ;
struct sn9c102_device {int dummy; } ;





 int VAR_0 ;
 int FUNC_0 (struct sn9c102_device*) ;
 int FUNC_1 (struct sn9c102_device*,int,int) ;
 int FUNC_2 (struct sn9c102_device*,int,int) ;

__attribute__((used)) static int FUNC_3(struct sn9c102_device* VAR_1,
      const struct v4l2_pix_format* VAR_2)
{
 int VAR_3 = 0;

 switch (FUNC_0(VAR_1)) {
 case 130:
  if (VAR_2->pixelformat == VAR_0) {
   VAR_3 += FUNC_2(VAR_1, 0xa0, 0x19);
   VAR_3 += FUNC_1(VAR_1, 0x01, 0x04);
  } else {
   VAR_3 += FUNC_2(VAR_1, 0x30, 0x19);
   VAR_3 += FUNC_1(VAR_1, 0x01, 0x04);
  }
  break;
 case 129:
 case 128:
  if (VAR_2->pixelformat == VAR_0) {
   VAR_3 += FUNC_2(VAR_1, 0xa5, 0x17);
   VAR_3 += FUNC_1(VAR_1, 0x01, 0x24);
  } else {
   VAR_3 += FUNC_2(VAR_1, 0xa3, 0x17);
   VAR_3 += FUNC_1(VAR_1, 0x01, 0x04);
  }
  break;
 default:
  break;
 }

 return VAR_3;
}
