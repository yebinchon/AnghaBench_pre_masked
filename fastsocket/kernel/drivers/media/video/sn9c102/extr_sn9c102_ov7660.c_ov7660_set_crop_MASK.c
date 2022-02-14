
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct v4l2_rect {scalar_t__ top; scalar_t__ left; } ;
struct TYPE_3__ {scalar_t__ top; scalar_t__ left; } ;
struct TYPE_4__ {TYPE_1__ bounds; } ;
struct sn9c102_sensor {TYPE_2__ cropcap; } ;
struct sn9c102_device {int dummy; } ;


 struct sn9c102_sensor* FUNC_0 (struct sn9c102_device*) ;
 scalar_t__ FUNC_1 (struct sn9c102_device*,scalar_t__,int) ;

__attribute__((used)) static int FUNC_2(struct sn9c102_device* VAR_0,
      const struct v4l2_rect* VAR_1)
{
 struct sn9c102_sensor* VAR_2 = FUNC_0(VAR_0);
 int VAR_3 = 0;
 u8 VAR_4 = (u8)(VAR_1->left - VAR_2->cropcap.bounds.left) + 1,
    VAR_5 = (u8)(VAR_1->top - VAR_2->cropcap.bounds.top) + 1;

 VAR_3 += FUNC_1(VAR_0, VAR_4, 0x12);
 VAR_3 += FUNC_1(VAR_0, VAR_5, 0x13);

 return VAR_3;
}
