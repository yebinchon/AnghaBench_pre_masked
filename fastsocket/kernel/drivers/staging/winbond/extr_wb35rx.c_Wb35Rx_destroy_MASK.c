
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wb35_rx {scalar_t__ EP3vm_state; scalar_t__ RxUrb; } ;
struct hw_data {struct wb35_rx Wb35Rx; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (scalar_t__) ;

void FUNC_3(struct hw_data * VAR_1)
{
 struct wb35_rx *VAR_2 = &VAR_1->Wb35Rx;

 do {
  FUNC_0(10);
 } while (VAR_2->EP3vm_state != VAR_0);
 FUNC_0(10);

 if (VAR_2->RxUrb)
  FUNC_2( VAR_2->RxUrb );



}
