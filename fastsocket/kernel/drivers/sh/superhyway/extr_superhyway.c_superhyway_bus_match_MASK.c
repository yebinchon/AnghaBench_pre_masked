
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct superhyway_driver {struct superhyway_device_id* id_table; } ;
struct superhyway_device_id {int dummy; } ;
struct superhyway_device {int dummy; } ;
struct device_driver {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct superhyway_device_id const*,struct superhyway_device*) ;
 struct superhyway_device* FUNC_1 (struct device*) ;
 struct superhyway_driver* FUNC_2 (struct device_driver*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_2, struct device_driver *VAR_3)
{
 struct superhyway_device *VAR_4 = FUNC_1(VAR_2);
 struct superhyway_driver *VAR_5 = FUNC_2(VAR_3);
 const struct superhyway_device_id *VAR_6 = VAR_5->id_table;

 if (!VAR_6)
  return -VAR_0;
 if (FUNC_0(VAR_6, VAR_4))
  return 1;

 return -VAR_1;
}
