
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {TYPE_1__* jointree; scalar_t__ setOperations; } ;
struct TYPE_12__ {scalar_t__ quals; } ;
typedef int RecursivePlanningContext ;
typedef TYPE_2__ Query ;
typedef int Node ;
typedef int DeferredErrorMessage ;


 int FUNC_0 (int *,int *) ;
 int * FUNC_1 (TYPE_2__*,int *) ;
 int FUNC_2 (TYPE_2__*,int *) ;
 int FUNC_3 (TYPE_2__*,int *,int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 scalar_t__ FUNC_5 (TYPE_2__*,int *) ;
 scalar_t__ FUNC_6 (TYPE_2__*,int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*,int ,int *,int ) ;

__attribute__((used)) static DeferredErrorMessage *
FUNC_9(Query *VAR_2, RecursivePlanningContext *VAR_3)
{
 DeferredErrorMessage *VAR_4 = ((void*)0);

 VAR_4 = FUNC_1(VAR_2, VAR_3);
 if (VAR_4 != ((void*)0))
 {
  return VAR_4;
 }

 if (VAR_1)
 {
  return ((void*)0);
 }


 FUNC_7(VAR_2);


 FUNC_8(VAR_2, VAR_0, VAR_3, 0);
 if (FUNC_6(VAR_2, VAR_3))
 {
  FUNC_3(VAR_2, (Node *) VAR_2->setOperations, VAR_3);
 }






 if (FUNC_4(VAR_2))
 {

  FUNC_0((Node *) VAR_2->jointree->quals, VAR_3);
 }





 if (FUNC_5(VAR_2, VAR_3))
 {
  FUNC_2(VAR_2, VAR_3);
 }

 return ((void*)0);
}
