
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ classId; int objectId; } ;
struct TYPE_8__ {void* data; int member_0; } ;
typedef TYPE_1__ StringInfoData ;
typedef TYPE_2__ ObjectAddress ;
typedef int Node ;
typedef int List ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int * FUNC_1 (TYPE_2__ const*) ;
 char* FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 char* FUNC_4 (int ,int) ;
 int * VAR_1 ;
 scalar_t__ VAR_2 ;
 char* FUNC_5 (char const*) ;
 int FUNC_6 (TYPE_1__*,int ,int ,int ) ;
 int FUNC_7 (TYPE_2__ const*) ;
 int FUNC_8 (TYPE_1__*) ;
 int * FUNC_9 (int *,void*) ;
 int FUNC_10 (char const*) ;
 scalar_t__ FUNC_11 (int ) ;

List *
FUNC_12(const ObjectAddress *VAR_3)
{
 List *VAR_4 = VAR_1;
 const char *VAR_5 = ((void*)0);
 Node *VAR_6 = ((void*)0);
 StringInfoData VAR_7 = { 0 };
 const char *VAR_8 = ((void*)0);

 FUNC_0(VAR_3->classId == VAR_2);

 if (FUNC_11(VAR_3->objectId))
 {






  return VAR_1;
 }

 VAR_6 = FUNC_1(VAR_3);


 VAR_5 = FUNC_2(VAR_6);
 VAR_5 = FUNC_5(VAR_5);
 VAR_4 = FUNC_9(VAR_4, (void *) VAR_5);


 VAR_8 = FUNC_4(FUNC_3(VAR_3->objectId), 0);
 FUNC_8(&VAR_7);
 FUNC_6(&VAR_7, VAR_0, FUNC_7(VAR_3),
      FUNC_10(VAR_8));
 VAR_4 = FUNC_9(VAR_4, VAR_7.data);

 return VAR_4;
}
