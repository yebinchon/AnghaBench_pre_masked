
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ team_t ;
typedef int gentity_t ;


 int FUNC_0 (char*) ;
 int * FUNC_1 (int *,int ,char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int *) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 () ;

gentity_t *FUNC_4( int VAR_4, team_t VAR_5 ) {
 gentity_t *VAR_6;
 int VAR_7;
 int VAR_8;
 gentity_t *VAR_9[VAR_0];
 char *VAR_10;

 if (VAR_4 == VAR_1) {
  if (VAR_5 == VAR_3)
   VAR_10 = "team_CTF_redplayer";
  else if (VAR_5 == VAR_2)
   VAR_10 = "team_CTF_blueplayer";
  else
   return ((void*)0);
 } else {
  if (VAR_5 == VAR_3)
   VAR_10 = "team_CTF_redspawn";
  else if (VAR_5 == VAR_2)
   VAR_10 = "team_CTF_bluespawn";
  else
   return ((void*)0);
 }
 VAR_7 = 0;

 VAR_6 = ((void*)0);

 while ((VAR_6 = FUNC_1 (VAR_6, FUNC_0(VAR_10), VAR_10)) != ((void*)0)) {
  if ( FUNC_2( VAR_6 ) ) {
   continue;
  }
  VAR_9[ VAR_7 ] = VAR_6;
  if (++VAR_7 == VAR_0)
   break;
 }

 if ( !VAR_7 ) {
  return FUNC_1( ((void*)0), FUNC_0(VAR_10), VAR_10);
 }

 VAR_8 = FUNC_3() % VAR_7;
 return VAR_9[ VAR_8 ];
}
