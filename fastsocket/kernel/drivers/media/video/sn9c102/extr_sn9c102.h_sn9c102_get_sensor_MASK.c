
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sn9c102_sensor {int dummy; } ;
struct sn9c102_device {struct sn9c102_sensor sensor; } ;



struct sn9c102_sensor* FUNC_0(struct sn9c102_device* VAR_0)
{
 return &VAR_0->sensor;
}
