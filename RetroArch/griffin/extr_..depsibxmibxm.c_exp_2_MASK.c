
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int* VAR_2 ;

__attribute__((used)) static int FUNC_0( int VAR_3 ) {
 int VAR_4, VAR_5, VAR_6;
 int VAR_7 = ( VAR_3 & VAR_0 ) >> ( VAR_1 - 7 );
 VAR_4 = VAR_2[ VAR_7 ];
 VAR_5 = VAR_2[ VAR_7 + 1 ] - VAR_4;
 VAR_6 = ( VAR_5 * ( VAR_3 & ( VAR_0 >> 7 ) ) >> 8 ) + VAR_4;
 return ( VAR_6 << VAR_1 ) >> ( VAR_1 - ( VAR_3 >> VAR_1 ) );
}
