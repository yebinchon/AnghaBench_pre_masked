
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wb35_reg {void* BB48; void* BB4C; } ;
struct hw_data {int phy_type; struct wb35_reg reg; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;



 int FUNC_0 (struct hw_data*,int,void*) ;

void FUNC_1( struct hw_data * VAR_8, u8 VAR_9 )
{
 struct wb35_reg *VAR_10 = &VAR_8->reg;
 unsigned char VAR_11;

 VAR_11 = (VAR_9 % 6) ? 1 : 0;
 switch( VAR_8->phy_type )
 {
  case 130:
  case 129:
   if( VAR_11 )
   {
    if( (VAR_10->BB48 != VAR_0) &&
     (VAR_10->BB4C != VAR_4) )
    {
     FUNC_0( VAR_8, 0x1048, VAR_0 );
     FUNC_0( VAR_8, 0x104c, VAR_4 );
    }
   }
   else
   {
    if( (VAR_10->BB48 != VAR_1) &&
     (VAR_10->BB4C != VAR_5) )
    {
     FUNC_0( VAR_8, 0x1048, VAR_1 );
     FUNC_0( VAR_8, 0x104c, VAR_5 );
    }
   }
   break;

  case 128:
   if( VAR_11 )
   {
    if( (VAR_10->BB48 != VAR_2) &&
     (VAR_10->BB4C != VAR_6) )
    {
     VAR_10->BB48 = VAR_2;
     VAR_10->BB4C = VAR_6;
     FUNC_0( VAR_8, 0x1048, VAR_2 );
     FUNC_0( VAR_8, 0x104c, VAR_6 );
    }
   }
   else
   {
    if( (VAR_10->BB48 != VAR_3) &&
     (VAR_10->BB4C != VAR_7) )
    {
     VAR_10->BB48 = VAR_3;
     VAR_10->BB4C = VAR_7;
     FUNC_0( VAR_8, 0x1048, VAR_3 );
     FUNC_0( VAR_8, 0x104c, VAR_7 );
    }
   }
   break;
 }
}
