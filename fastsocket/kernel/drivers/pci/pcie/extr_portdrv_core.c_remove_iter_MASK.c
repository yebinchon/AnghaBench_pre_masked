
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int * bus; } ;


 int FUNC_0 (struct device*) ;
 int VAR_0 ;
 int FUNC_1 (struct device*) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_1, void *VAR_2)
{
 if (VAR_1->bus == &VAR_0) {
  FUNC_1(VAR_1);
  FUNC_0(VAR_1);
 }
 return 0;
}
