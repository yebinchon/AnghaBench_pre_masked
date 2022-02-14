
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int t ;
struct TYPE_9__ {int HubName; } ;
struct TYPE_8__ {int IfList; } ;
typedef TYPE_1__ L3SW ;
typedef TYPE_2__ L3IF ;


 TYPE_2__* FUNC_0 (int ,TYPE_2__*) ;
 int FUNC_1 (int ,int,char*) ;
 int FUNC_2 (TYPE_2__*,int) ;

L3IF *FUNC_3(L3SW *VAR_0, char *VAR_1)
{
 L3IF VAR_2, *VAR_3;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return ((void*)0);
 }

 FUNC_2(&VAR_2, sizeof(VAR_2));
 FUNC_1(VAR_2.HubName, sizeof(VAR_2.HubName), VAR_1);

 VAR_3 = FUNC_0(VAR_0->IfList, &VAR_2);

 return VAR_3;
}
