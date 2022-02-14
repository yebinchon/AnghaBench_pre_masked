
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_pix_format {scalar_t__ pixelformat; } ;
struct sn9c102_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct sn9c102_device*,int,int) ;

__attribute__((used)) static int FUNC_1(struct sn9c102_device* VAR_1,
         const struct v4l2_pix_format* VAR_2)
{
 int VAR_3 = 0;

 if (VAR_2->pixelformat == VAR_0)
  VAR_3 += FUNC_0(VAR_1, 0x63, 0x19);
 else
  VAR_3 += FUNC_0(VAR_1, 0xf3, 0x19);

 return VAR_3;
}
