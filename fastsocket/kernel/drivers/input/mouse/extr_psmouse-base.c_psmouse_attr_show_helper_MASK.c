
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serio {int * drv; } ;
struct psmouse_attribute {int (* show ) (struct psmouse*,int ,char*) ;int data; } ;
struct psmouse {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct psmouse* FUNC_0 (struct serio*) ;
 int FUNC_1 (struct serio*) ;
 int FUNC_2 (struct serio*) ;
 int FUNC_3 (struct psmouse*,int ,char*) ;
 struct psmouse_attribute* FUNC_4 (struct device_attribute*) ;
 struct serio* FUNC_5 (struct device*) ;

ssize_t FUNC_6(struct device *VAR_2, struct device_attribute *VAR_3,
     char *VAR_4)
{
 struct serio *VAR_5 = FUNC_5(VAR_2);
 struct psmouse_attribute *VAR_6 = FUNC_4(VAR_3);
 struct psmouse *VAR_7;
 int VAR_8;

 VAR_8 = FUNC_1(VAR_5);
 if (VAR_8)
  return VAR_8;

 if (VAR_5->drv != &VAR_1) {
  VAR_8 = -VAR_0;
  goto out;
 }

 VAR_7 = FUNC_0(VAR_5);

 VAR_8 = VAR_6->show(VAR_7, VAR_6->data, VAR_4);

out:
 FUNC_2(VAR_5);
 return VAR_8;
}
