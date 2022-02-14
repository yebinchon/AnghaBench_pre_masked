
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ classId; int objectId; } ;
typedef TYPE_1__ ObjectAddress ;
typedef int List ;


 int FUNC_0 (int) ;
 char* FUNC_1 (int ) ;
 char* FUNC_2 (int ,int) ;
 scalar_t__ VAR_0 ;
 int * FUNC_3 (char*,char*) ;

List *
FUNC_4(const ObjectAddress *VAR_1)
{
 char *VAR_2 = ((void*)0);
 char *VAR_3 = ((void*)0);

 FUNC_0(VAR_1->classId == VAR_0);

 VAR_2 = FUNC_2(VAR_1->objectId, 1);
 VAR_3 = FUNC_1(VAR_1->objectId);

 return FUNC_3(VAR_2, VAR_3);
}
