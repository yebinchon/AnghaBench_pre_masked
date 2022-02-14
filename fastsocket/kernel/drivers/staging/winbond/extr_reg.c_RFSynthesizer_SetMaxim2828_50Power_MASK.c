
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct hw_data {int dummy; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct hw_data*,int,int) ;
 int * VAR_0 ;

u8 FUNC_2( struct hw_data * VAR_1, u8 VAR_2 )
{
 u32 VAR_3;
 if( VAR_2 > 1 ) VAR_2 = 1;
 VAR_3 = (1 << 31) | (0 << 30) | (18 << 24) | FUNC_0( VAR_0[VAR_2], 18);
 FUNC_1( VAR_1, 0x0864, VAR_3 );
 return VAR_2;
}
