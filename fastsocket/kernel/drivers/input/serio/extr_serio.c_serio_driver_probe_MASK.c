
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serio_driver {int dummy; } ;
struct serio {int dummy; } ;
struct device {int driver; } ;


 int FUNC_0 (struct serio*,struct serio_driver*) ;
 struct serio_driver* FUNC_1 (int ) ;
 struct serio* FUNC_2 (struct device*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0)
{
 struct serio *VAR_1 = FUNC_2(VAR_0);
 struct serio_driver *VAR_2 = FUNC_1(VAR_0->driver);

 return FUNC_0(VAR_1, VAR_2);
}
