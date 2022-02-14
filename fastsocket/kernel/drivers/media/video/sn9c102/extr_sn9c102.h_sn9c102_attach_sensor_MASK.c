
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sn9c102_sensor {int dummy; } ;
struct sn9c102_device {int sensor; } ;


 int FUNC_0 (int *,struct sn9c102_sensor const*,int) ;

void
FUNC_1(struct sn9c102_device* VAR_0,
        const struct sn9c102_sensor* VAR_1)
{
 FUNC_0(&VAR_0->sensor, VAR_1, sizeof(struct sn9c102_sensor));
}
