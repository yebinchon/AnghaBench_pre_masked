
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int serverbuff ;
typedef int adrstr ;


 int VAR_0 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,char*,int) ;
 char* FUNC_3 (char*,int) ;

void FUNC_4( void )
{
 char VAR_1[128];
 char VAR_2[128];
 int VAR_3;
 int VAR_4;

 FUNC_2( "cl_currentServerAddress", VAR_2, sizeof(VAR_2) );
 if (!VAR_2[0])
  return;

 VAR_4 = 0;
 for (VAR_3=0; VAR_3<VAR_0; VAR_3++)
 {
  FUNC_2( FUNC_3("server%d",VAR_3+1), VAR_1, sizeof(VAR_1) );
  if (!FUNC_0(VAR_2,VAR_1))
  {

   return;
  }


  if ((VAR_1[0] < '0' || VAR_1[0] > '9' ) && !VAR_4)
   VAR_4 = VAR_3+1;
 }

 if (VAR_4)
  FUNC_1( FUNC_3("server%d",VAR_4), VAR_2);
}
