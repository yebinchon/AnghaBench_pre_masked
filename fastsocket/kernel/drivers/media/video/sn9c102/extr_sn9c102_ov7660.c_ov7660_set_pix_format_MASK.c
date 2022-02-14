
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_pix_format {scalar_t__ pixelformat; } ;
struct sn9c102_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct sn9c102_device*,int,int) ;
 int FUNC_1 (struct sn9c102_device*,int) ;
 scalar_t__ FUNC_2 (struct sn9c102_device*,int,int) ;

__attribute__((used)) static int FUNC_3(struct sn9c102_device* VAR_1,
     const struct v4l2_pix_format* VAR_2)
{
 int VAR_3, VAR_4 = 0;

 VAR_3 = FUNC_1(VAR_1, 0x01);

 if (VAR_2->pixelformat == VAR_0) {
  VAR_4 += FUNC_2(VAR_1, VAR_3 | 0x40, 0x01);
  VAR_4 += FUNC_2(VAR_1, 0xa2, 0x17);
  VAR_4 += FUNC_0(VAR_1, 0x11, 0x00);
 } else {
  VAR_4 += FUNC_2(VAR_1, VAR_3 | 0x40, 0x01);
  VAR_4 += FUNC_2(VAR_1, 0xa2, 0x17);
  VAR_4 += FUNC_0(VAR_1, 0x11, 0x0d);
 }

 return VAR_4;
}
