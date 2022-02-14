
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int kobj; } ;


 scalar_t__ FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*) ;
 struct device* VAR_0 ;
 int FUNC_2 () ;
 int VAR_1 ;
 struct device* FUNC_3 (struct device*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *,int *) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_2)
{
 struct device *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_3(VAR_2);
 if (FUNC_0(VAR_3)) {
  FUNC_4("Could not register eeepc hwmon device\n");
  VAR_0 = ((void*)0);
  return FUNC_1(VAR_3);
 }
 VAR_0 = VAR_3;
 VAR_4 = FUNC_5(&VAR_3->kobj,
        &VAR_1);
 if (VAR_4)
  FUNC_2();
 return VAR_4;
}
