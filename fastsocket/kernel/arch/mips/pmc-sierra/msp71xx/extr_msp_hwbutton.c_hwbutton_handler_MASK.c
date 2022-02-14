
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hwbutton_interrupt {int data; int (* handle_lo ) (int ) ;int eirq; int (* handle_hi ) (int ) ;} ;
typedef int irqreturn_t ;


 unsigned long* VAR_0 ;
 scalar_t__ FUNC_0 (unsigned long,int ) ;
 int FUNC_1 (unsigned long,int ) ;
 int FUNC_2 (unsigned long,int ) ;
 int VAR_1 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_2, void *VAR_3)
{
 struct hwbutton_interrupt *VAR_4 = VAR_3;
 unsigned long VAR_5 = *VAR_0;

 if (FUNC_0(VAR_5, VAR_4->eirq)) {

  FUNC_2(VAR_5, VAR_4->eirq);
  VAR_4->handle_hi(VAR_4->data);
 } else {

  FUNC_1(VAR_5, VAR_4->eirq);
  VAR_4->handle_lo(VAR_4->data);
 }





 *VAR_0 = VAR_5;

 return VAR_1;
}
