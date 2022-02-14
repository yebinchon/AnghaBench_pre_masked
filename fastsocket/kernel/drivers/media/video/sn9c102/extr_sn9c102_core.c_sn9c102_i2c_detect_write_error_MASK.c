
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sn9c102_sensor {int dummy; } ;
struct sn9c102_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct sn9c102_device*,int) ;

__attribute__((used)) static int
FUNC_1(struct sn9c102_device* VAR_1,
          const struct sn9c102_sensor* VAR_2)
{
 int VAR_3;
 VAR_3 = FUNC_0(VAR_1, 0x08);
 return (VAR_3 < 0 || (VAR_3 >= 0 && (VAR_3 & 0x08))) ? -VAR_0 : 0;
}
