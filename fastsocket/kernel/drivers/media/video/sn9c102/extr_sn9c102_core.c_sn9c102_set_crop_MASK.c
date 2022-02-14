
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct v4l2_rect {int width; int height; scalar_t__ top; scalar_t__ left; } ;
struct TYPE_3__ {scalar_t__ top; scalar_t__ left; } ;
struct TYPE_4__ {TYPE_1__ bounds; } ;
struct sn9c102_sensor {TYPE_2__ cropcap; } ;
struct sn9c102_device {struct sn9c102_sensor sensor; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int ,int ,int ) ;
 scalar_t__ FUNC_1 (struct sn9c102_device*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct sn9c102_device* VAR_1, struct v4l2_rect* VAR_2)
{
 struct sn9c102_sensor* VAR_3 = &VAR_1->sensor;
 u8 VAR_4 = (u8)(VAR_2->left - VAR_3->cropcap.bounds.left),
    VAR_5 = (u8)(VAR_2->top - VAR_3->cropcap.bounds.top),
    VAR_6 = (u8)(VAR_2->width / 16),
    VAR_7 = (u8)(VAR_2->height / 16);
 int VAR_8 = 0;

 VAR_8 += FUNC_1(VAR_1, VAR_4, 0x12);
 VAR_8 += FUNC_1(VAR_1, VAR_5, 0x13);
 VAR_8 += FUNC_1(VAR_1, VAR_6, 0x15);
 VAR_8 += FUNC_1(VAR_1, VAR_7, 0x16);
 if (VAR_8)
  return -VAR_0;

 FUNC_0("h_start, v_start, h_size, v_size, ho_size, vo_size "
       "%u %u %u %u", VAR_4, VAR_5, VAR_6, VAR_7);

 return 0;
}
