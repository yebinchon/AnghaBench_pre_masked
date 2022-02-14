
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {scalar_t__ class; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct device*) ;
 scalar_t__ VAR_1 ;

int FUNC_2(struct device *VAR_2)
{
 if (!VAR_1 || FUNC_0(VAR_1))
  return -VAR_0;

 VAR_2->class = VAR_1;
 return FUNC_1(VAR_2);
}
