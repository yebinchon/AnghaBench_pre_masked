
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wb35_reg {int D00_DmaControl; } ;
struct hw_data {struct wb35_reg reg; } ;


 int FUNC_0 (struct hw_data*) ;
 int FUNC_1 (struct hw_data*,int,int) ;

void FUNC_2( struct hw_data * VAR_0 )
{
 struct wb35_reg *VAR_1 = &VAR_0->reg;



 VAR_1->D00_DmaControl = 0xc0000004;

 if( !FUNC_0( VAR_0 ) )
  VAR_1->D00_DmaControl = 0xc0000000;

 FUNC_1( VAR_0, 0x0400, VAR_1->D00_DmaControl );
}
