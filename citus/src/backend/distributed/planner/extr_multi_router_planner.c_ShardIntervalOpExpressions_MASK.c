
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int Var ;
struct TYPE_4__ {scalar_t__ maxValueExists; scalar_t__ minValueExists; int relationId; } ;
typedef TYPE_1__ ShardInterval ;
typedef int Oid ;
typedef int Node ;
typedef int List ;
typedef int Index ;


 int FUNC_0 (int) ;
 int * FUNC_1 (int *) ;
 char VAR_0 ;
 char VAR_1 ;
 char VAR_2 ;
 int * FUNC_2 () ;
 int * VAR_3 ;
 int * FUNC_3 (int ,int ) ;
 char FUNC_4 (int ) ;
 int FUNC_5 (int *,TYPE_1__*) ;
 int * FUNC_6 (int *) ;

List *
FUNC_7(ShardInterval *VAR_4, Index VAR_5)
{
 Oid VAR_6 = VAR_4->relationId;
 char VAR_7 = FUNC_4(VAR_4->relationId);
 Var *VAR_8 = ((void*)0);
 Node *VAR_9 = ((void*)0);

 if (VAR_7 == VAR_1)
 {
  VAR_8 = FUNC_2();
 }
 else if (VAR_7 == VAR_2 || VAR_7 ==
    VAR_0)
 {
  FUNC_0(VAR_5 > 0);
  VAR_8 = FUNC_3(VAR_6, VAR_5);
 }
 else
 {

  return VAR_3;
 }


 VAR_9 = FUNC_1(VAR_8);


 if (VAR_4->minValueExists && VAR_4->maxValueExists)
 {
  FUNC_5(VAR_9, VAR_4);
 }

 return FUNC_6(VAR_9);
}
