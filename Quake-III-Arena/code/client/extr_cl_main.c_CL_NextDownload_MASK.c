
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* downloadList; int downloadRestart; } ;


 int FUNC_0 (char*,char*) ;
 int FUNC_1 () ;
 TYPE_1__ VAR_0 ;
 int FUNC_2 (char*,char*,int) ;
 int VAR_1 ;
 char* FUNC_3 (char*,char) ;
 int FUNC_4 (char*) ;

void FUNC_5(void) {
 char *VAR_2;
 char *VAR_3, *VAR_4;


 if (*VAR_0.downloadList) {
  VAR_2 = VAR_0.downloadList;




  if (*VAR_2 == '@')
   VAR_2++;
  VAR_3 = VAR_2;

  if ( (VAR_2 = FUNC_3(VAR_2, '@')) == ((void*)0) ) {
   FUNC_1();
   return;
  }

  *VAR_2++ = 0;
  VAR_4 = VAR_2;
  if ( (VAR_2 = FUNC_3(VAR_2, '@')) != ((void*)0) )
   *VAR_2++ = 0;
  else
   VAR_2 = VAR_4 + FUNC_4(VAR_4);

  FUNC_0( VAR_4, VAR_3 );

  VAR_0.downloadRestart = VAR_1;


  FUNC_2( VAR_0.downloadList, VAR_2, FUNC_4(VAR_2) + 1);

  return;
 }

 FUNC_1();
}
