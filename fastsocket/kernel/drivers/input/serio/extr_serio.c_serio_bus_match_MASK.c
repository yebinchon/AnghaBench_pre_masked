
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serio_driver {int id_table; scalar_t__ manual_bind; } ;
struct serio {scalar_t__ manual_bind; } ;
struct device_driver {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ,struct serio*) ;
 struct serio_driver* FUNC_1 (struct device_driver*) ;
 struct serio* FUNC_2 (struct device*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0, struct device_driver *VAR_1)
{
 struct serio *VAR_2 = FUNC_2(VAR_0);
 struct serio_driver *VAR_3 = FUNC_1(VAR_1);

 if (VAR_2->manual_bind || VAR_3->manual_bind)
  return 0;

 return FUNC_0(VAR_3->id_table, VAR_2);
}
