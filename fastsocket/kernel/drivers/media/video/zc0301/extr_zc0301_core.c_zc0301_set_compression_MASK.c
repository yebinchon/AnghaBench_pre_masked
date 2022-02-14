
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zc0301_device {int dummy; } ;
struct v4l2_jpegcompression {int quality; } ;


 int VAR_0 ;
 int FUNC_0 (struct zc0301_device*,int) ;
 scalar_t__ FUNC_1 (struct zc0301_device*,int,int) ;

__attribute__((used)) static int
FUNC_2(struct zc0301_device* VAR_1,
         struct v4l2_jpegcompression* VAR_2)
{
 int VAR_3, VAR_4 = 0;

 if ((VAR_3 = FUNC_0(VAR_1, 0x0008)) < 0)
  VAR_4 += VAR_3;
 VAR_4 += FUNC_1(VAR_1, 0x0008, VAR_3 | 0x11 | VAR_2->quality);

 return VAR_4 ? -VAR_0 : 0;
}
