
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int FirstSock; } ;
typedef int PACK ;
typedef TYPE_1__ CONNECTION ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *,char*,int) ;
 int * FUNC_4 (int ) ;

void FUNC_5(CONNECTION *VAR_0)
{
 PACK *VAR_1;

 if (VAR_0 == ((void*)0))
 {
  return;
 }

 VAR_1 = FUNC_4(0);
 FUNC_3(VAR_1, "noop", 1);
 (void)FUNC_2(VAR_0->FirstSock, VAR_1);
 FUNC_0(VAR_1);

 VAR_1 = FUNC_1(VAR_0->FirstSock);
 if (VAR_1 != ((void*)0))
 {
  FUNC_0(VAR_1);
 }
}
