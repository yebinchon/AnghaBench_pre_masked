
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int port; int hostname; int pgConn; } ;
typedef int PGresult ;
typedef TYPE_1__ MultiConnection ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 char* FUNC_2 (int *,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (char*,char*,...) ;
 char* FUNC_7 (int ) ;

__attribute__((used)) static void
FUNC_8(MultiConnection *VAR_4, PGresult *VAR_5)
{
 char *VAR_6 = FUNC_2(VAR_5, VAR_3);

 if (VAR_6 != ((void*)0))
 {

  char *VAR_7 = FUNC_2(VAR_5, VAR_2);
  bool VAR_8 = VAR_7 != ((void*)0);

  FUNC_3(VAR_1, (FUNC_6("%s", VAR_6),
      VAR_8 ? FUNC_5("%s", FUNC_0(VAR_7)) :
      0));
 }
 else
 {

  VAR_6 = FUNC_7(FUNC_1(VAR_4->pgConn));

  FUNC_3(VAR_1, (FUNC_4(VAR_0),
      FUNC_6("failed to complete COPY on %s:%d", VAR_4->hostname,
          VAR_4->port),
      FUNC_5("%s", FUNC_0(VAR_6))));
 }
}
