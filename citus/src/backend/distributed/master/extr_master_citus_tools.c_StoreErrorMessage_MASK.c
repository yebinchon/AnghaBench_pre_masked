
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pgConn; } ;
typedef int StringInfo ;
typedef TYPE_1__ MultiConnection ;


 char* FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,char*) ;
 char* FUNC_2 (char*,int ) ;
 char* FUNC_3 (char*,char) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void
FUNC_5(MultiConnection *VAR_0, StringInfo VAR_1)
{
 char *VAR_2 = FUNC_0(VAR_0->pgConn);
 if (VAR_2 != ((void*)0))
 {
  char *VAR_3 = ((void*)0);


  VAR_2 = FUNC_2(VAR_2, FUNC_4(VAR_2));

  VAR_3 = FUNC_3(VAR_2, '\n');


  if (VAR_3 != ((void*)0))
  {
   *VAR_3 = '\0';
  }
 }
 else
 {

  VAR_2 = "An error occurred while running the query";
 }

 FUNC_1(VAR_1, "%s", VAR_2);
}
