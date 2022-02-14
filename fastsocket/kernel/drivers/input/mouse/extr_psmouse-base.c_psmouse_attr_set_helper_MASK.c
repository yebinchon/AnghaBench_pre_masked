
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ type; } ;
struct serio {struct serio* parent; TYPE_1__ id; int * drv; } ;
struct psmouse_attribute {int (* set ) (struct psmouse*,int ,char const*,size_t) ;scalar_t__ protect; int data; } ;
struct psmouse {scalar_t__ state; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct psmouse*) ;
 int FUNC_3 (struct psmouse*) ;
 int VAR_3 ;
 int VAR_4 ;
 struct psmouse* FUNC_4 (struct serio*) ;
 int FUNC_5 (struct serio*) ;
 int FUNC_6 (struct serio*) ;
 int FUNC_7 (struct psmouse*,int ,char const*,size_t) ;
 struct psmouse_attribute* FUNC_8 (struct device_attribute*) ;
 struct serio* FUNC_9 (struct device*) ;

ssize_t FUNC_10(struct device *VAR_5, struct device_attribute *VAR_6,
    const char *VAR_7, size_t VAR_8)
{
 struct serio *VAR_9 = FUNC_9(VAR_5);
 struct psmouse_attribute *VAR_10 = FUNC_8(VAR_6);
 struct psmouse *VAR_11, *VAR_12 = ((void*)0);
 int VAR_13;

 VAR_13 = FUNC_5(VAR_9);
 if (VAR_13)
  return VAR_13;

 if (VAR_9->drv != &VAR_3) {
  VAR_13 = -VAR_0;
  goto out_unpin;
 }

 VAR_13 = FUNC_0(&VAR_4);
 if (VAR_13)
  goto out_unpin;

 VAR_11 = FUNC_4(VAR_9);

 if (VAR_10->protect) {
  if (VAR_11->state == VAR_1) {
   VAR_13 = -VAR_0;
   goto out_unlock;
  }

  if (VAR_9->parent && VAR_9->id.type == VAR_2) {
   VAR_12 = FUNC_4(VAR_9->parent);
   FUNC_3(VAR_12);
  }

  FUNC_3(VAR_11);
 }

 VAR_13 = VAR_10->set(VAR_11, VAR_10->data, VAR_7, VAR_8);

 if (VAR_10->protect) {
  if (VAR_13 != -VAR_0)
   FUNC_2(VAR_11);

  if (VAR_12)
   FUNC_2(VAR_12);
 }

 out_unlock:
 FUNC_1(&VAR_4);
 out_unpin:
 FUNC_6(VAR_9);
 return VAR_13;
}
