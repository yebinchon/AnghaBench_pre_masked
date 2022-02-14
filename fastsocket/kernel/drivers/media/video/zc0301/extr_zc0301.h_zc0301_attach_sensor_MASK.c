
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zc0301_sensor {int dummy; } ;
struct zc0301_device {int sensor; } ;


 int FUNC_0 (int *,struct zc0301_sensor*,int) ;

void
FUNC_1(struct zc0301_device* VAR_0, struct zc0301_sensor* VAR_1)
{
 FUNC_0(&VAR_0->sensor, VAR_1, sizeof(struct zc0301_sensor));
}
