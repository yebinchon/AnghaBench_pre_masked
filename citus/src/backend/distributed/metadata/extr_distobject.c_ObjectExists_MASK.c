
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int objectId; int classId; } ;
typedef int Relation ;
typedef TYPE_1__ ObjectAddress ;
typedef int * HeapTuple ;


 int VAR_0 ;
 int * FUNC_0 (int ,int ,...) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int ) ;

bool
FUNC_5(const ObjectAddress *VAR_1)
{
 if (VAR_1 == ((void*)0))
 {
  return 0;
 }

 if (FUNC_4(VAR_1->classId))
 {
  HeapTuple VAR_2;
  Relation VAR_3 = FUNC_3(VAR_1->classId, VAR_0);





  VAR_2 = FUNC_0(VAR_3, VAR_1->objectId);

  FUNC_2(VAR_3, VAR_0);
  if (VAR_2 != ((void*)0))
  {
   return 1;
  }

  return 0;
 }

 return 0;
}
