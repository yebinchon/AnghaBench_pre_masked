
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sht15_data {scalar_t__ flag; int read_work; int interrupt_handled; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_2, void *VAR_3)
{
 struct sht15_data *VAR_4 = VAR_3;

 FUNC_1(VAR_2);
 FUNC_0(&VAR_4->interrupt_handled);

 if (VAR_4->flag != VAR_1)
  FUNC_2(&VAR_4->read_work);
 return VAR_0;
}
