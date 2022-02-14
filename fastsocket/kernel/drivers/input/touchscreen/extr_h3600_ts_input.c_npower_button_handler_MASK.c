
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_dev {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct input_dev*,int ,int) ;
 int FUNC_1 (struct input_dev*) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_4, void *VAR_5)
{
 int VAR_6 = (VAR_1 & VAR_0) ? 0 : 1;
 struct input_dev *VAR_7 = VAR_5;





 FUNC_0(VAR_7, VAR_3, 1);
 FUNC_0(VAR_7, VAR_3, VAR_6);
 FUNC_1(VAR_7);

 return VAR_2;
}
