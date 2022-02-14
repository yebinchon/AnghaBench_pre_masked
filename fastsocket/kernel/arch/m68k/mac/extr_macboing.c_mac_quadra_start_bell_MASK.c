
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int mac_asc_wave_tab ;
typedef int __u32 ;
struct TYPE_3__ {scalar_t__ expires; int function; } ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int* VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 TYPE_1__ VAR_7 ;

__attribute__((used)) static void FUNC_3( unsigned int VAR_8, unsigned int VAR_9, unsigned int VAR_10 )
{
 __u32 VAR_11;


 if ( VAR_3 > 0 )
 {
  VAR_3 += VAR_9;
  return;
 }

 VAR_3 = VAR_9;
 VAR_4 = 0;
 VAR_5 = ( VAR_8 * sizeof( mac_asc_wave_tab ) ) / VAR_2;


 FUNC_2(VAR_11);


 VAR_1[ 0x806 ] = VAR_10;


 if ( VAR_1[ 0x801 ] != 1 )
 {

  VAR_1[ 0x807 ] = 0;

  VAR_1[ 0x802 ] = 0;

  VAR_1[ 0x801 ] = 1;
  VAR_1[ 0x803 ] |= 0x80;
  VAR_1[ 0x803 ] &= 0x7F;
 }

 VAR_7.function = VAR_6;
 VAR_7.expires = VAR_0 + 1;
 FUNC_0( &VAR_7 );

 FUNC_1(VAR_11);
}
