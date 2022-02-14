
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,int *) ;

int FUNC_1(struct device *VAR_1)
{
 static int VAR_2;
 int VAR_3;

 if (!VAR_2) {
  VAR_3 = FUNC_0(VAR_1, &VAR_0);
  VAR_2 = 1;
 }
 else
  VAR_3 = 0;

 return VAR_3;
}
