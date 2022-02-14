
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mgsl_struct {int serial_signals; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct mgsl_struct*,int ) ;

__attribute__((used)) static void FUNC_1( struct mgsl_struct *VAR_11 )
{
 u16 VAR_12;


 VAR_11->serial_signals &= VAR_8 + VAR_10;




 VAR_12 = FUNC_0( VAR_11, VAR_4 );



 if ( VAR_12 & VAR_0 )
  VAR_11->serial_signals |= VAR_5;

 if ( VAR_12 & VAR_1 )
  VAR_11->serial_signals |= VAR_6;

 if ( VAR_12 & VAR_3 )
  VAR_11->serial_signals |= VAR_9;

 if ( VAR_12 & VAR_2 )
  VAR_11->serial_signals |= VAR_7;

}
