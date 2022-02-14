
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gentity_t ;


 int FUNC_0 (int ) ;
 int * FUNC_1 (int *,int ,char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int *) ;
 int VAR_1 ;
 int FUNC_3 () ;

gentity_t *FUNC_4( void ) {
 gentity_t *VAR_2;
 int VAR_3;
 int VAR_4;
 gentity_t *VAR_5[VAR_0];

 VAR_3 = 0;
 VAR_2 = ((void*)0);

 while ((VAR_2 = FUNC_1 (VAR_2, FUNC_0(VAR_1), "info_player_deathmatch")) != ((void*)0)) {
  if ( FUNC_2( VAR_2 ) ) {
   continue;
  }
  VAR_5[ VAR_3 ] = VAR_2;
  VAR_3++;
 }

 if ( !VAR_3 ) {
  return FUNC_1( ((void*)0), FUNC_0(VAR_1), "info_player_deathmatch");
 }

 VAR_4 = FUNC_3() % VAR_3;
 return VAR_5[ VAR_4 ];
}
