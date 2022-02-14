
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* NoSaveConfig; void* NoSaveLog; } ;
typedef int LIST ;
typedef TYPE_1__ CLIENT ;


 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *,char*) ;
 void* FUNC_3 (int ) ;

void FUNC_4(CLIENT *VAR_0)
{
 LIST *VAR_1;



 if (VAR_0 == ((void*)0))
 {
  return;
 }

 VAR_1 = FUNC_1();

 if (VAR_1 == ((void*)0))
 {
  return;
 }
 VAR_0->NoSaveLog = FUNC_3(FUNC_2(VAR_1, "NoSaveLog"));
 VAR_0->NoSaveConfig = FUNC_3(FUNC_2(VAR_1, "NoSaveConfig"));

 FUNC_0(VAR_1);

}
