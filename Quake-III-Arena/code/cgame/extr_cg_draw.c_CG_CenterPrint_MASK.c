
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* centerPrint; int centerPrintY; int centerPrintCharWidth; int centerPrintLines; int time; int centerPrintTime; } ;


 int FUNC_0 (char*,char const*,int) ;
 TYPE_1__ VAR_0 ;

void FUNC_1( const char *VAR_1, int VAR_2, int VAR_3 ) {
 char *VAR_4;

 FUNC_0( VAR_0.centerPrint, VAR_1, sizeof(VAR_0.centerPrint) );

 VAR_0.centerPrintTime = VAR_0.time;
 VAR_0.centerPrintY = VAR_2;
 VAR_0.centerPrintCharWidth = VAR_3;


 VAR_0.centerPrintLines = 1;
 VAR_4 = VAR_0.centerPrint;
 while( *VAR_4 ) {
  if (*VAR_4 == '\n')
   VAR_0.centerPrintLines++;
  VAR_4++;
 }
}
