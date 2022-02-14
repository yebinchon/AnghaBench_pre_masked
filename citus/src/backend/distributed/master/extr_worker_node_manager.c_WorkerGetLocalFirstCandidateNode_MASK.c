
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32 ;
typedef int WorkerNode ;
struct TYPE_4__ {char* data; } ;
typedef TYPE_1__* StringInfo ;
typedef int List ;


 char* FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_1 (char*) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,char*) ;
 scalar_t__ FUNC_7 (int *) ;
 TYPE_1__* FUNC_8 () ;
 char* FUNC_9 (char*) ;
 scalar_t__ FUNC_10 (char*,char*,int ) ;

WorkerNode *
FUNC_11(List *VAR_2)
{
 WorkerNode *VAR_3 = ((void*)0);
 uint32 VAR_4 = FUNC_7(VAR_2);


 if (VAR_4 == 0)
 {
  StringInfo VAR_5 = FUNC_8();
  char *VAR_6 = ((void*)0);
  char *VAR_7 = FUNC_0(VAR_5);

  if (VAR_7 != ((void*)0))
  {
   FUNC_3(VAR_0, (FUNC_6("%s", VAR_7),
       FUNC_4("Could not find the first worker "
           "node for local-node-first policy."),
       FUNC_5("Make sure that you are not on the "
         "master node.")));
  }


  VAR_6 = VAR_5->data;
  if (FUNC_10(VAR_6, "localhost.localdomain", VAR_1) == 0)
  {
   VAR_6 = FUNC_9("localhost");
  }

  VAR_3 = FUNC_1(VAR_6);
  if (VAR_3 == ((void*)0))
  {
   FUNC_3(VAR_0, (FUNC_6("could not find worker node for "
           "host: %s", VAR_6)));
  }
 }
 else
 {

  VAR_3 = FUNC_2(VAR_2);
 }

 return VAR_3;
}
