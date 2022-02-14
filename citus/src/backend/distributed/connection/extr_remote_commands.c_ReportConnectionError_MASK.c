
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* hostname; int port; int * pgConn; } ;
typedef int PGconn ;
typedef TYPE_1__ MultiConnection ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (char*,char*,int) ;
 char* FUNC_6 (int ) ;

void
FUNC_7(MultiConnection *VAR_1, int VAR_2)
{
 char *VAR_3 = VAR_1->hostname;
 int VAR_4 = VAR_1->port;
 PGconn *VAR_5 = VAR_1->pgConn;
 char *VAR_6 = ((void*)0);

 if (VAR_5 != ((void*)0))
 {
  VAR_6 = FUNC_6(FUNC_1(VAR_5));
 }

 FUNC_2(VAR_2, (FUNC_3(VAR_0),
      FUNC_5("connection error: %s:%d", VAR_3, VAR_4),
      VAR_6 != ((void*)0) ?
      FUNC_4("%s", FUNC_0(VAR_6)) : 0));
}
