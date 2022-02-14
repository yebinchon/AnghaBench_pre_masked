
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Node ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 char* FUNC_1 (int *) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (char*,int ,char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*) ;

void
FUNC_7(Node *VAR_3)
{
 char *VAR_4 = FUNC_1(VAR_3);

 if (VAR_4 != ((void*)0))
 {

  if (!FUNC_2(VAR_4, VAR_0))
  {
   FUNC_3(VAR_2, (FUNC_6("specified version incompatible with loaded "
           "Citus library"),
       FUNC_4("Loaded library requires %s, but %s was specified.",
           VAR_1, VAR_4),
       FUNC_5("If a newer library is present, restart the database "
         "and try the command again.")));
  }
 }
 else
 {




  FUNC_0(VAR_2);
 }
}
