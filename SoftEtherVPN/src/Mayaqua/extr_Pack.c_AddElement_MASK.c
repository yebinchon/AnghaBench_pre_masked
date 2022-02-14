
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ num_value; int JsonHint_GroupName; int name; } ;
struct TYPE_8__ {int elements; int CurrentJsonHint_GroupName; } ;
typedef TYPE_1__ PACK ;
typedef TYPE_2__ ELEMENT ;


 int FUNC_0 (int ,TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int ,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (int ,int,int ) ;

bool FUNC_5(PACK *VAR_2, ELEMENT *VAR_3)
{

 if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0))
 {
  return 0;
 }


 if (FUNC_3(VAR_2->elements) >= VAR_1)
 {

  FUNC_1(VAR_3);
  return 0;
 }


 if (FUNC_2(VAR_2, VAR_3->name, VAR_0))
 {

  FUNC_1(VAR_3);
  return 0;
 }

 if (VAR_3->num_value == 0)
 {

  FUNC_1(VAR_3);
  return 0;
 }


 FUNC_4(VAR_3->JsonHint_GroupName, sizeof(VAR_3->JsonHint_GroupName), VAR_2->CurrentJsonHint_GroupName);


 FUNC_0(VAR_2->elements, VAR_3);
 return 1;
}
