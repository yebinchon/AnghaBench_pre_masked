
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct v4l2_rect {int height; int width; scalar_t__ top; scalar_t__ left; } ;
struct TYPE_6__ {scalar_t__ top; scalar_t__ left; } ;
struct TYPE_4__ {scalar_t__ top; scalar_t__ left; } ;
struct TYPE_5__ {TYPE_1__ bounds; } ;
struct et61x251_sensor {TYPE_3__ active_pixel; TYPE_2__ cropcap; } ;
struct et61x251_device {struct et61x251_sensor sensor; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int,int,int,int) ;
 scalar_t__ FUNC_1 (struct et61x251_device*,int,int) ;

__attribute__((used)) static int
FUNC_2(struct et61x251_device* VAR_1, struct v4l2_rect* VAR_2)
{
 struct et61x251_sensor* VAR_3 = &VAR_1->sensor;
 u16 VAR_4 = (u16)(VAR_2->left - VAR_3->cropcap.bounds.left +
      VAR_3->active_pixel.left),
     VAR_5 = (u16)(VAR_2->top - VAR_3->cropcap.bounds.top +
      VAR_3->active_pixel.top),
     VAR_6 = (u16)(VAR_2->width),
     VAR_7 = (u16)(VAR_2->height);
 int VAR_8 = 0;

 VAR_8 += FUNC_1(VAR_1, VAR_4 & 0xff, 0x69);
 VAR_8 += FUNC_1(VAR_1, VAR_5 & 0xff, 0x6a);
 VAR_8 += FUNC_1(VAR_1, VAR_6 & 0xff, 0x6b);
 VAR_8 += FUNC_1(VAR_1, VAR_7 & 0xff, 0x6c);
 VAR_8 += FUNC_1(VAR_1, (VAR_4 >> 8) | ((VAR_5 & 0x300) >> 6)
           | ((VAR_6 & 0x300) >> 4)
           | ((VAR_7 & 0x300) >> 2), 0x6d);
 if (VAR_8)
  return -VAR_0;

 FUNC_0("fmw_sx, fmw_sy, fmw_length, fmw_height: %u %u %u %u",
       VAR_4, VAR_5, VAR_6, VAR_7);

 return 0;
}
