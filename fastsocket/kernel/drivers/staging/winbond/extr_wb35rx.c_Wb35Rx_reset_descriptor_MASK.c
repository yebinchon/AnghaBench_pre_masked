
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct wb35_rx {int* RxOwner; scalar_t__ rx_halt; int EP3vm_state; scalar_t__ RxBufferId; scalar_t__ RxProcessIndex; scalar_t__ ByteReceived; } ;
struct hw_data {struct wb35_rx Wb35Rx; } ;


 size_t VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0( struct hw_data * VAR_2 )
{
 struct wb35_rx *VAR_3 = &VAR_2->Wb35Rx;
 u32 VAR_4;

 VAR_3->ByteReceived = 0;
 VAR_3->RxProcessIndex = 0;
 VAR_3->RxBufferId = 0;
 VAR_3->EP3vm_state = VAR_1;
 VAR_3->rx_halt = 0;


 for( VAR_4=0; VAR_4<VAR_0; VAR_4++ )
  VAR_3->RxOwner[VAR_4] = 1;
}
