
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_device {int dummy; } ;
struct v4l2_pix_format {int pixelformat; int colorspace; int sizeimage; int bytesperline; int field; int height; int width; } ;


 int FUNC_0 (char*,int ,int ,int,int,int,int,int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static inline void FUNC_2(struct video_device *VAR_1,
      struct v4l2_pix_format *VAR_2)
{
 FUNC_0("width=%d, height=%d, format=%c%c%c%c, field=%s, "
  "bytesperline=%d sizeimage=%d, colorspace=%d\n",
  VAR_2->width, VAR_2->height,
  (VAR_2->pixelformat & 0xff),
  (VAR_2->pixelformat >> 8) & 0xff,
  (VAR_2->pixelformat >> 16) & 0xff,
  (VAR_2->pixelformat >> 24) & 0xff,
  FUNC_1(VAR_2->field, VAR_0),
  VAR_2->bytesperline, VAR_2->sizeimage, VAR_2->colorspace);
}
