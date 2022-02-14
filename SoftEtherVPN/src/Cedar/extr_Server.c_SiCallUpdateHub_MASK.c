
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int Me; } ;
typedef int SERVER ;
typedef int PACK ;
typedef int HUB ;
typedef TYPE_1__ FARM_MEMBER ;


 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int * FUNC_2 (TYPE_1__*,int *,char*) ;
 int FUNC_3 (int *,int *) ;

void FUNC_4(SERVER *VAR_0, FARM_MEMBER *VAR_1, HUB *VAR_2)
{
 PACK *VAR_3;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 if (VAR_1->Me == 0)
 {
  VAR_3 = FUNC_1();

  FUNC_3(VAR_3, VAR_2);

  VAR_3 = FUNC_2(VAR_1, VAR_3, "updatehub");
  FUNC_0(VAR_3);
 }
}
