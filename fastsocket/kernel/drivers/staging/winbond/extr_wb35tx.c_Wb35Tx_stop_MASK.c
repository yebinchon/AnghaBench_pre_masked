
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wb35_tx {scalar_t__ EP2vm_state; scalar_t__ EP4vm_state; int Tx4Urb; int Tx2Urb; } ;
struct hw_data {struct wb35_tx Wb35Tx; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;

void FUNC_2(struct hw_data * VAR_1)
{
 struct wb35_tx *VAR_2 = &VAR_1->Wb35Tx;


 if (VAR_2->EP2vm_state == VAR_0)
  FUNC_1( VAR_2->Tx2Urb );





 if (VAR_2->EP4vm_state == VAR_0)
  FUNC_1( VAR_2->Tx4Urb );



}
