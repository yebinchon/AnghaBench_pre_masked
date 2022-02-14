
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_9__ {int * NonSslList; } ;
struct TYPE_8__ {scalar_t__ EntryExpires; } ;
typedef TYPE_1__ NON_SSL ;
typedef int LIST ;
typedef TYPE_2__ CEDAR ;


 int FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (int *,scalar_t__) ;
 scalar_t__ FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 () ;

void FUNC_8(CEDAR *VAR_0)
{
 UINT VAR_1;
 LIST *VAR_2;

 if (VAR_0 == ((void*)0))
 {
  return;
 }

 VAR_2 = FUNC_5(((void*)0));

 for (VAR_1 = 0;VAR_1 < FUNC_4(VAR_0->NonSslList);VAR_1++)
 {
  NON_SSL *VAR_3 = FUNC_3(VAR_0->NonSslList, VAR_1);

  if (VAR_3->EntryExpires <= FUNC_7())
  {
   FUNC_0(VAR_2, VAR_3);
  }
 }

 for (VAR_1 = 0;VAR_1 < FUNC_4(VAR_2);VAR_1++)
 {
  NON_SSL *VAR_4 = FUNC_3(VAR_2, VAR_1);

  FUNC_1(VAR_0->NonSslList, VAR_4);
  FUNC_2(VAR_4);
 }

 FUNC_6(VAR_2);
}
