
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serio {int * drv; } ;
struct device {int dummy; } ;
typedef struct atkbd atkbd ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (struct atkbd*) ;
 int VAR_1 ;
 int FUNC_1 (struct atkbd*) ;
 struct atkbd* FUNC_2 (struct serio*) ;
 int FUNC_3 (struct serio*) ;
 int FUNC_4 (struct serio*) ;
 struct serio* FUNC_5 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_2, const char *VAR_3, size_t VAR_4,
    ssize_t (*VAR_5)(struct atkbd *, const char *, size_t))
{
 struct serio *VAR_6 = FUNC_5(VAR_2);
 struct atkbd *VAR_7;
 int VAR_8;

 VAR_8 = FUNC_3(VAR_6);
 if (VAR_8)
  return VAR_8;

 if (VAR_6->drv != &VAR_1) {
  VAR_8 = -VAR_0;
  goto out;
 }

 VAR_7 = FUNC_2(VAR_6);
 FUNC_0(VAR_7);
 VAR_8 = VAR_5(VAR_7, VAR_3, VAR_4);
 FUNC_1(VAR_7);

out:
 FUNC_4(VAR_6);
 return VAR_8;
}
