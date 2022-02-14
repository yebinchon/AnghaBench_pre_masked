
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int name; } ;
struct TYPE_6__ {int elements; } ;
typedef TYPE_1__ PACK ;
typedef TYPE_2__ ELEMENT ;


 TYPE_2__* FUNC_0 (int ,TYPE_2__*) ;
 int FUNC_1 (int ,int,char*) ;

bool FUNC_2(PACK *VAR_0, char *VAR_1)
{
 ELEMENT VAR_2;
 ELEMENT *VAR_3;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return 0;
 }


 FUNC_1(VAR_2.name, sizeof(VAR_2.name), VAR_1);
 VAR_3 = FUNC_0(VAR_0->elements, &VAR_2);

 if (VAR_3 == ((void*)0))
 {
  return 0;
 }

 return 1;
}
