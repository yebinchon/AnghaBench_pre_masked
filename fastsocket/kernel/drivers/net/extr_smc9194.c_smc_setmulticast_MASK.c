
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dev_mc_list {int* dmi_addr; struct dev_mc_list* next; } ;
typedef int multicast_table ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int*) ;
 int FUNC_2 (unsigned char*,int ,int) ;
 int FUNC_3 (unsigned char,scalar_t__) ;

__attribute__((used)) static void FUNC_4( int VAR_1, int VAR_2, struct dev_mc_list * VAR_3 ) {
 int VAR_4;
 unsigned char VAR_5[ 8 ];
 struct dev_mc_list * VAR_6;

 unsigned char VAR_7[] = { 0, 4, 2, 6, 1, 5, 3, 7 };


 FUNC_2( VAR_5, 0, sizeof( VAR_5 ) );

 VAR_6 = VAR_3;
 for ( VAR_4 = 0; VAR_4 < VAR_2 ; VAR_4 ++, VAR_6 = VAR_6->next ) {
  int VAR_8;


  if ( !VAR_6 )
   break;


  if ( !( *VAR_6->dmi_addr & 1 ) )
   continue;


  VAR_8 = FUNC_1(6, VAR_6->dmi_addr) & 0x3f;


  VAR_5[VAR_7[VAR_8&7]] |=
     (1<<VAR_7[(VAR_8>>3)&7]);

 }

 FUNC_0( 3 );

 for ( VAR_4 = 0; VAR_4 < 8 ; VAR_4++ ) {
  FUNC_3( VAR_5[VAR_4], VAR_1 + VAR_0 + VAR_4 );
 }
}
