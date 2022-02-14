
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct callback_data {char* zDestTable; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (unsigned char) ;
 int FUNC_4 (unsigned char) ;
 char* FUNC_5 (int) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_6(struct callback_data *VAR_1, const char *VAR_2){
  int VAR_3, VAR_4;
  int VAR_5;
  char *VAR_6;

  if( VAR_1->zDestTable ){
    FUNC_2(VAR_1->zDestTable);
    VAR_1->zDestTable = 0;
  }
  if( VAR_2==0 ) return;
  VAR_5 = !FUNC_4((unsigned char)*VAR_2) && *VAR_2!='_';
  for(VAR_3=VAR_4=0; VAR_2[VAR_3]; VAR_3++, VAR_4++){
    if( !FUNC_3((unsigned char)VAR_2[VAR_3]) && VAR_2[VAR_3]!='_' ){
      VAR_5 = 1;
      if( VAR_2[VAR_3]=='\'' ) VAR_4++;
    }
  }
  if( VAR_5 ) VAR_4 += 2;
  VAR_6 = VAR_1->zDestTable = FUNC_5( VAR_4+1 );
  if( VAR_6==0 ){
    FUNC_1(VAR_0,"Error: out of memory\n");
    FUNC_0(1);
  }
  VAR_4 = 0;
  if( VAR_5 ) VAR_6[VAR_4++] = '\'';
  for(VAR_3=0; VAR_2[VAR_3]; VAR_3++){
    VAR_6[VAR_4++] = VAR_2[VAR_3];
    if( VAR_2[VAR_3]=='\'' ) VAR_6[VAR_4++] = '\'';
  }
  if( VAR_5 ) VAR_6[VAR_4++] = '\'';
  VAR_6[VAR_4] = 0;
}
