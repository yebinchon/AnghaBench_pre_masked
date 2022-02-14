
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wb35_tx {scalar_t__ EP2vm_state; scalar_t__ EP4vm_state; scalar_t__ Tx2Urb; scalar_t__ Tx4Urb; } ;
struct hw_data {struct wb35_tx Wb35Tx; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (scalar_t__) ;

void FUNC_3(struct hw_data * VAR_1)
{
 struct wb35_tx *VAR_2 = &VAR_1->Wb35Tx;


 do {
  FUNC_0(10);
 } while( (VAR_2->EP2vm_state != VAR_0) && (VAR_2->EP4vm_state != VAR_0) );
 FUNC_0(10);

 if (VAR_2->Tx4Urb)
  FUNC_2( VAR_2->Tx4Urb );

 if (VAR_2->Tx2Urb)
  FUNC_2( VAR_2->Tx2Urb );




}
