
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int skipIfNewValExists; } ;
typedef int ObjectAddress ;
typedef int Node ;
typedef int List ;
typedef TYPE_1__ AlterEnumStmt ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int VAR_1 ;
 char* FUNC_1 (int *) ;
 int * FUNC_2 (int *,int) ;
 int * VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ,int *,int *) ;
 int FUNC_4 (int const*) ;
 int VAR_4 ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (char*,char const*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*) ;
 int * FUNC_9 (int ,void*) ;

void
FUNC_10(AlterEnumStmt *VAR_5, const char *VAR_6)
{
 const ObjectAddress *VAR_7 = ((void*)0);

 VAR_7 = FUNC_2((Node *) VAR_5, 0);
 if (!FUNC_4(VAR_7))
 {
  return;
 }
 if (FUNC_0(VAR_5))
 {







  int VAR_8 = 0;
  List *VAR_9 = VAR_2;
  const char *VAR_10 = ((void*)0);


  VAR_10 = FUNC_1((Node *) VAR_5);

  VAR_9 = FUNC_9(VAR_1, (void *) VAR_10);

  VAR_8 = FUNC_3(VAR_0, VAR_9, ((void*)0));

  if (VAR_8 != VAR_3)
  {
   const char *VAR_11 = ((void*)0);
   bool VAR_12 = VAR_5->skipIfNewValExists;


   VAR_5->skipIfNewValExists = 1;
   VAR_11 = FUNC_1((Node *) VAR_5);
   VAR_5->skipIfNewValExists = VAR_12;

   FUNC_5(VAR_4, (FUNC_8("not all workers applied change to enum"),
         FUNC_6("retry with: %s", VAR_11),
         FUNC_7("make sure the coordinators can communicate with "
           "all workers")));
  }
 }

}
