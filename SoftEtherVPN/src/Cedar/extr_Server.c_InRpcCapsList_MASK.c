
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_12__ {int CapsList; } ;
struct TYPE_11__ {scalar_t__ type; int num_value; TYPE_1__** values; scalar_t__ name; } ;
struct TYPE_10__ {int elements; } ;
struct TYPE_9__ {int IntValue; } ;
typedef TYPE_2__ PACK ;
typedef TYPE_3__ ELEMENT ;
typedef TYPE_4__ CAPSLIST ;
typedef int CAPS ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 TYPE_3__* FUNC_1 (int ,scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 int * FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (scalar_t__,char*) ;
 scalar_t__ VAR_1 ;
 int FUNC_6 (TYPE_4__*,int) ;

void FUNC_7(CAPSLIST *VAR_2, PACK *VAR_3)
{
 UINT VAR_4;

 if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0))
 {
  return;
 }

 FUNC_6(VAR_2, sizeof(CAPSLIST));
 VAR_2->CapsList = FUNC_4(VAR_0);

 for (VAR_4 = 0;VAR_4 < FUNC_2(VAR_3->elements);VAR_4++)
 {
  ELEMENT *VAR_5 = FUNC_1(VAR_3->elements, VAR_4);

  if (FUNC_5(VAR_5->name, "caps_") && VAR_5->type == VAR_1 && VAR_5->num_value == 1)
  {
   CAPS *VAR_6 = FUNC_3(VAR_5->name + 5, VAR_5->values[0]->IntValue);
   FUNC_0(VAR_2->CapsList, VAR_6);
  }
 }
}
