
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ghes {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ghes*) ;

__attribute__((used)) static irqreturn_t FUNC_1(int VAR_2, void *VAR_3)
{
 struct ghes *VAR_4 = VAR_3;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_4);
 if (VAR_5)
  return VAR_1;

 return VAR_0;
}
