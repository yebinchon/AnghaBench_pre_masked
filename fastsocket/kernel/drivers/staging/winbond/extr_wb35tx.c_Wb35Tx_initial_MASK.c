
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wb35_tx {void* Tx4Urb; void* Tx2Urb; } ;
struct hw_data {struct wb35_tx Wb35Tx; } ;


 int VAR_0 ;
 void* FUNC_0 (int ,int ) ;
 int FUNC_1 (void*) ;

unsigned char FUNC_2(struct hw_data * VAR_1)
{
 struct wb35_tx *VAR_2 = &VAR_1->Wb35Tx;

 VAR_2->Tx4Urb = FUNC_0(0, VAR_0);
 if (!VAR_2->Tx4Urb)
  return 0;

 VAR_2->Tx2Urb = FUNC_0(0, VAR_0);
 if (!VAR_2->Tx2Urb)
 {
  FUNC_1( VAR_2->Tx4Urb );
  return 0;
 }

 return 1;
}
