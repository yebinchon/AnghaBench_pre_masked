
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_8__ {scalar_t__ type; int name; } ;
struct TYPE_7__ {int elements; } ;
typedef TYPE_1__ PACK ;
typedef TYPE_2__ ELEMENT ;


 scalar_t__ VAR_0 ;
 TYPE_2__* FUNC_0 (int ,TYPE_2__*) ;
 int FUNC_1 (int ,int,char*) ;

ELEMENT *FUNC_2(PACK *VAR_1, char *VAR_2, UINT VAR_3)
{
 ELEMENT VAR_4;
 ELEMENT *VAR_5;

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return ((void*)0);
 }


 FUNC_1(VAR_4.name, sizeof(VAR_4.name), VAR_2);
 VAR_5 = FUNC_0(VAR_1->elements, &VAR_4);

 if (VAR_5 == ((void*)0))
 {
  return ((void*)0);
 }


 if (VAR_3 != VAR_0)
 {
  if (VAR_5->type != VAR_3)
  {
   return ((void*)0);
  }
 }

 return VAR_5;
}
