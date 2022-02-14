
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wb35_rx {scalar_t__ EP3vm_state; int RxUrb; } ;
struct hw_data {struct wb35_rx Wb35Rx; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;

void FUNC_2(struct hw_data * VAR_1)
{
 struct wb35_rx *VAR_2 = &VAR_1->Wb35Rx;


 if (VAR_2->EP3vm_state == VAR_0) {
  FUNC_1( VAR_2->RxUrb );



 }
}
