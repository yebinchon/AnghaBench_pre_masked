
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef scalar_t__ u16 ;
struct mgsl_struct {scalar_t__ bus_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct mgsl_struct*,int ) ;
 int FUNC_1 (struct mgsl_struct*,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2( struct mgsl_struct *VAR_6, u32 VAR_7 )
{
 u32 VAR_8;
 u16 VAR_9;

 if ( VAR_7 ) {
  if ( VAR_6->bus_type == VAR_4 )
   VAR_8 = 11059200;
  else
   VAR_8 = 14745600;
  VAR_9 = (u16)(VAR_8/VAR_7);
  if ( !(((VAR_8 % VAR_7) * 2) / VAR_7) )
   VAR_9--;


  FUNC_1( VAR_6, VAR_5, VAR_9 );







  FUNC_1( VAR_6, VAR_2, (u16)((FUNC_0( VAR_6, VAR_2 ) & ~VAR_1) | VAR_0) );


  FUNC_1( VAR_6, VAR_3, (u16)((FUNC_0(VAR_6, VAR_3) & 0xfff8) | 0x0004) );
 } else {

  FUNC_1( VAR_6, VAR_2, (u16)(FUNC_0( VAR_6, VAR_2 ) & ~VAR_0) );
 }

}
