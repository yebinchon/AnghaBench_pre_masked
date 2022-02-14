
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_driver {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int driver_id; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (char const*,int ,int ) ;
 int VAR_1 ;

__attribute__((used)) static ssize_t
FUNC_1(struct device_driver *VAR_2, const char *VAR_3,
      size_t VAR_4)
{
 int VAR_5;
 VAR_5 = FUNC_0(VAR_3, VAR_1,
     VAR_0.driver_id);
 if (VAR_5)
  return VAR_5;
 else
  return VAR_4;
}
