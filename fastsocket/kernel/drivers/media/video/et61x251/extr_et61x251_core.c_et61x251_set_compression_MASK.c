
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_jpegcompression {scalar_t__ quality; } ;
struct et61x251_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct et61x251_device*,int) ;
 scalar_t__ FUNC_1 (struct et61x251_device*,int,int) ;

__attribute__((used)) static int
FUNC_2(struct et61x251_device* VAR_1,
    struct v4l2_jpegcompression* VAR_2)
{
 int VAR_3, VAR_4 = 0;

 if ((VAR_3 = FUNC_0(VAR_1, 0x12)) < 0)
  VAR_4 += VAR_3;
 if (VAR_2->quality == 0)
  VAR_4 += FUNC_1(VAR_1, VAR_3 & 0xfb, 0x12);
 else
  VAR_4 += FUNC_1(VAR_1, VAR_3 | 0x04, 0x12);

 return VAR_4 ? -VAR_0 : 0;
}
