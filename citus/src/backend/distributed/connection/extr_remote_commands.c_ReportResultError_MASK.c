
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* hostname; int port; int pgConn; } ;
typedef int PGresult ;
typedef TYPE_1__ MultiConnection ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (char,char,char,char,char) ;
 int FUNC_2 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 char* FUNC_8 (int *,int ) ;
 int FUNC_9 (int,int ) ;
 int FUNC_10 (int) ;
 int FUNC_11 (char*,char*,...) ;
 int FUNC_12 (char*,int ) ;
 int FUNC_13 (char*,char*) ;
 int FUNC_14 (char*,char*) ;
 char* FUNC_15 (int ) ;

void
FUNC_16(MultiConnection *VAR_6, PGresult *VAR_7, int VAR_8)
{

 FUNC_5();
 {
  char *VAR_9 = FUNC_8(VAR_7, VAR_5);
  char *VAR_10 = FUNC_8(VAR_7, VAR_4);
  char *VAR_11 = FUNC_8(VAR_7, VAR_2);
  char *VAR_12 = FUNC_8(VAR_7, VAR_3);
  char *VAR_13 = FUNC_8(VAR_7, VAR_1);

  char *VAR_14 = VAR_6->hostname;
  int VAR_15 = VAR_6->port;
  int VAR_16 = VAR_0;

  if (VAR_9 != ((void*)0))
  {
   VAR_16 = FUNC_1(VAR_9[0],
          VAR_9[1],
          VAR_9[2],
          VAR_9[3],
          VAR_9[4]);
  }





  if (VAR_10 == ((void*)0))
  {
   VAR_10 = FUNC_15(FUNC_7(VAR_6->pgConn));
  }

  FUNC_9(VAR_8, (FUNC_10(VAR_16), FUNC_14("%s", VAR_10),
       VAR_11 ?
       FUNC_12("%s", FUNC_0(VAR_11)) : 0,
       VAR_12 ? FUNC_13("%s", VAR_12) : 0,
       VAR_13 ? FUNC_11("%s", VAR_13) : 0,
       FUNC_11("while executing command on %s:%d",
         VAR_14, VAR_15)));
 }
 FUNC_2();
 {
  FUNC_6(VAR_7);
  FUNC_4();
 }
 FUNC_3();
}
