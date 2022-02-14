
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_pix_format {scalar_t__ pixelformat; } ;
struct et61x251_device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct et61x251_device*,int) ;
 scalar_t__ FUNC_1 (struct et61x251_device*,int,int) ;

__attribute__((used)) static int
FUNC_2(struct et61x251_device* VAR_2,
   struct v4l2_pix_format* VAR_3)
{
 int VAR_4, VAR_5 = 0;

 if ((VAR_4 = FUNC_0(VAR_2, 0x12)) < 0)
  VAR_5 += VAR_4;
 if (VAR_3->pixelformat == VAR_1)
  VAR_5 += FUNC_1(VAR_2, VAR_4 & 0xfd, 0x12);
 else
  VAR_5 += FUNC_1(VAR_2, VAR_4 | 0x02, 0x12);

 return VAR_5 ? -VAR_0 : 0;
}
