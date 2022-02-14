
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int t ;
struct TYPE_9__ {int L3SwList; } ;
struct TYPE_8__ {int ref; int Name; } ;
typedef TYPE_1__ L3SW ;
typedef TYPE_2__ CEDAR ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (int ,TYPE_1__*) ;
 int FUNC_3 (int ,int,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*,int) ;

L3SW *FUNC_6(CEDAR *VAR_0, char *VAR_1)
{
 L3SW VAR_2, *VAR_3;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return ((void*)0);
 }

 FUNC_5(&VAR_2, sizeof(VAR_2));
 FUNC_3(VAR_2.Name, sizeof(VAR_2.Name), VAR_1);

 FUNC_1(VAR_0->L3SwList);
 {
  VAR_3 = FUNC_2(VAR_0->L3SwList, &VAR_2);
 }
 FUNC_4(VAR_0->L3SwList);

 if (VAR_3 != ((void*)0))
 {
  FUNC_0(VAR_3->ref);
 }

 return VAR_3;
}
