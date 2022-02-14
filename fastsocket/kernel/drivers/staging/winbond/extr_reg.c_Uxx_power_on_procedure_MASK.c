
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hw_data {scalar_t__ phy_type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct hw_data*,int,int*) ;
 int FUNC_1 (struct hw_data*,int,int) ;
 int FUNC_2 (int) ;

void FUNC_3( struct hw_data * VAR_3 )
{
 u32 VAR_4, VAR_5;

 if( VAR_3->phy_type <= VAR_0 )
  FUNC_1( VAR_3, 0x03d4, 0xffffff38 );
 else
 {
  FUNC_1( VAR_3, 0x03f4, 0xFF5807FF );


  FUNC_1( VAR_3, 0x03d4, 0x80 );
  FUNC_2(10);
  FUNC_1( VAR_3, 0x03d4, 0xb8 );
  FUNC_2(10);

  VAR_4 = 0x4968;
  if( (VAR_3->phy_type == VAR_1) ||
   (VAR_2 == VAR_3->phy_type) )
   VAR_4 = 0x4468;
  FUNC_1( VAR_3, 0x03d0, VAR_4 );

  FUNC_1( VAR_3, 0x03d4, 0xa0 );

  FUNC_2(20);
  FUNC_0( VAR_3, 0x03d0, &VAR_4 );
  VAR_5 = 500;
  while( !(VAR_4 & 0x20) && VAR_5-- )
  {
   FUNC_2(10);
   if( !FUNC_0( VAR_3, 0x03d0, &VAR_4 ) )
    break;
  }

  FUNC_1( VAR_3, 0x03d4, 0xe0 );
 }

 FUNC_1( VAR_3, 0x03b0, 1 );
 FUNC_2(10);


 FUNC_1( VAR_3, 0x03f8, 0x7ff );
}
