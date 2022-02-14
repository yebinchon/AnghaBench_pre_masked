
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wb35_tx {int ** TxBuffer; } ;
struct hw_data {struct wb35_tx Wb35Tx; } ;



unsigned char
FUNC_0(struct hw_data * VAR_0, u8 **VAR_1)
{
 struct wb35_tx *VAR_2 = &VAR_0->Wb35Tx;

 *VAR_1 = VAR_2->TxBuffer[0];
 return 1;
}
