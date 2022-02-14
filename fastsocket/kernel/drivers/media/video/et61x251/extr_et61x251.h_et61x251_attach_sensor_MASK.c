
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct et61x251_sensor {int dummy; } ;
struct et61x251_device {int sensor; } ;


 int FUNC_0 (int *,struct et61x251_sensor const*,int) ;

void
FUNC_1(struct et61x251_device* VAR_0,
         const struct et61x251_sensor* VAR_1)
{
 FUNC_0(&VAR_0->sensor, VAR_1, sizeof(struct et61x251_sensor));
}
