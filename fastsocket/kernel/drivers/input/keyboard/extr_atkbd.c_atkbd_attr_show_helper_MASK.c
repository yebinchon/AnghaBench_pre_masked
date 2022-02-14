
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serio {int * drv; } ;
struct device {int dummy; } ;
typedef struct atkbd atkbd ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct serio*) ;
 int FUNC_1 (struct serio*) ;
 int FUNC_2 (struct serio*) ;
 struct serio* FUNC_3 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_2, char *VAR_3,
    ssize_t (*VAR_4)(struct atkbd *, char *))
{
 struct serio *VAR_5 = FUNC_3(VAR_2);
 int VAR_6;

 VAR_6 = FUNC_1(VAR_5);
 if (VAR_6)
  return VAR_6;

 if (VAR_5->drv != &VAR_1) {
  VAR_6 = -VAR_0;
  goto out;
 }

 VAR_6 = VAR_4((struct atkbd *)FUNC_0(VAR_5), VAR_3);

out:
 FUNC_2(VAR_5);
 return VAR_6;
}
