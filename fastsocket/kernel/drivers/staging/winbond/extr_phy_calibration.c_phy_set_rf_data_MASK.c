
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hw_data {int phy_type; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (struct hw_data*,int,int) ;

void FUNC_2( struct hw_data * VAR_0, u32 VAR_1, u32 VAR_2 )
{
   u32 VAR_3=0;

    switch( VAR_0->phy_type )
 {
  case 134:
  case 130:
   VAR_3 = (1 << 31) | (0 << 30) | (18 << 24) | FUNC_0( VAR_2, 18 );
   break;

  case 133:
   VAR_3 = (1 << 31) | (0 << 30) | (18 << 24) | FUNC_0( VAR_2, 18 );
   break;

  case 132:
   VAR_3 = (1 << 31) | (0 << 30) | (18 << 24) | FUNC_0( VAR_2, 18 );
   break;

  case 131:
   VAR_3 = (1 << 31) | (0 << 30) | (18 << 24) | FUNC_0( VAR_2, 18 );
   break;

  case 137:
  case 136:
   VAR_3 = (1 << 31) | (0 << 30) | (20 << 24) | FUNC_0( VAR_2, 20 );
   break;

  case 135:
   VAR_3 = (1 << 31) | (0 << 30) | (24 << 24) | (VAR_2&0xffffff);
   break;

  case 129:
  case 128:
   VAR_3 = (1 << 31) | (0 << 30) | (24 << 24) | FUNC_0( VAR_2, 24 );
   break;
 }

 FUNC_1( VAR_0, 0x0864, VAR_3 );
}
