
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int numlines; char* info; int menu; } ;


 int FUNC_0 (char const**,char*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int,char*) ;
 int VAR_2 ;
 double VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (double,int,char*,int,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_1__ VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static void FUNC_4( void )
{
 const char *VAR_11;
 char VAR_12[VAR_0];
 char VAR_13[VAR_1];
 int VAR_14;

 VAR_14 = VAR_2/2 - VAR_9.numlines*(VAR_4)/2 - 20;
 VAR_11 = VAR_9.info;
 while ( VAR_11 ) {
  FUNC_0( &VAR_11, VAR_12, VAR_13 );
  if ( !VAR_12[0] ) {
   break;
  }

  FUNC_2( VAR_12, VAR_0, ":" );

  FUNC_3(VAR_3*0.50 - 8,VAR_14,VAR_12,VAR_6|VAR_7,VAR_8);
  FUNC_3(VAR_3*0.50 + 8,VAR_14,VAR_13,VAR_5|VAR_7,VAR_10);

  VAR_14 += VAR_4;
 }

 FUNC_1( &VAR_9.menu );
}
