
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int HubList; } ;
typedef TYPE_1__ CEDAR ;


 int FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

bool FUNC_3(CEDAR *VAR_0, char *VAR_1)
{
 bool VAR_2 = 0;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return 0;
 }

 FUNC_1(VAR_0->HubList);
 {
  VAR_2 = FUNC_0(VAR_0, VAR_1);
 }
 FUNC_2(VAR_0->HubList);

 return VAR_2;
}
