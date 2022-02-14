
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char**) ;
 char* FUNC_1 (char**,int ) ;
 int FUNC_2 (char**) ;
 char* FUNC_3 (char const*) ;
 scalar_t__ FUNC_4 (char*,char*) ;
 scalar_t__ FUNC_5 (char**) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_6(const char *VAR_1) {
 char *VAR_2;
  char *VAR_3;
  char *VAR_4 = ((void*)0);


  VAR_4 = FUNC_3(VAR_1);
  if (!VAR_4) {
    return;
  }

  VAR_3 = VAR_4;

 while ( 1 ) {
  VAR_2 = FUNC_1( &VAR_3, VAR_0 );
  if( !VAR_2 || VAR_2[0] == 0 || VAR_2[0] == '}') {
   break;
  }

  if ( FUNC_4( VAR_2, "}" ) == 0 ) {
      break;
    }

    if (FUNC_4(VAR_2, "teams") == 0) {

      if (FUNC_5(&VAR_3)) {
        continue;
      } else {
        break;
      }
    }

    if (FUNC_4(VAR_2, "characters") == 0) {
      FUNC_2(&VAR_3);
    }

    if (FUNC_4(VAR_2, "aliases") == 0) {
      FUNC_0(&VAR_3);
    }

  }

}
