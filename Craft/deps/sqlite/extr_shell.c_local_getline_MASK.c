
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (char*,int,int *) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (int) ;
 int FUNC_4 (char*,char*) ;
 char* FUNC_5 (char*,int) ;
 int VAR_0 ;

__attribute__((used)) static char *FUNC_6(char *VAR_1, FILE *VAR_2, int VAR_3){
  char *VAR_4;
  int VAR_5;
  int VAR_6;
  int VAR_7 = 0;

  if( VAR_1 && *VAR_1 ){
    FUNC_4("%s",VAR_1);
    FUNC_0(VAR_0);
  }
  VAR_5 = 100;
  VAR_4 = FUNC_3( VAR_5 );
  if( VAR_4==0 ) return 0;
  VAR_6 = 0;
  while( 1 ){
    if( VAR_6+100>VAR_5 ){
      VAR_5 = VAR_5*2 + 100;
      VAR_4 = FUNC_5(VAR_4, VAR_5);
      if( VAR_4==0 ) return 0;
    }
    if( FUNC_1(&VAR_4[VAR_6], VAR_5 - VAR_6, VAR_2)==0 ){
      if( VAR_6==0 ){
        FUNC_2(VAR_4);
        return 0;
      }
      VAR_4[VAR_6] = 0;
      break;
    }
    while( VAR_4[VAR_6] ){
      if( VAR_4[VAR_6]=='"' ) VAR_7 = !VAR_7;
      VAR_6++;
    }
    if( VAR_6>0 && VAR_4[VAR_6-1]=='\n' && (!VAR_7 || !VAR_3) ){
      VAR_6--;
      if( VAR_6>0 && VAR_4[VAR_6-1]=='\r' ) VAR_6--;
      VAR_4[VAR_6] = 0;
      break;
    }
  }
  VAR_4 = FUNC_5( VAR_4, VAR_6+1 );
  return VAR_4;
}
