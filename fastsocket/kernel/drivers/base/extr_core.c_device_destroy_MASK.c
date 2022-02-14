
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct class {int dummy; } ;
typedef int dev_t ;


 int VAR_0 ;
 struct device* FUNC_0 (struct class*,int *,int *,int ) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*) ;

void FUNC_3(struct class *VAR_1, dev_t VAR_2)
{
 struct device *VAR_3;

 VAR_3 = FUNC_0(VAR_1, ((void*)0), &VAR_2, VAR_0);
 if (VAR_3) {
  FUNC_2(VAR_3);
  FUNC_1(VAR_3);
 }
}
