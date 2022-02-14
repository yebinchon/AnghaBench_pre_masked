
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Host {int Type; int ResetInt; } ;





 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int,int *) ;

__attribute__((used)) static void FUNC_3(struct Host *VAR_0)
{
 FUNC_0();

 switch (VAR_0->Type) {
 case 130:
 case 129:
 case 128:
  FUNC_2(0xFF, &VAR_0->ResetInt);
 }

 FUNC_1();
}
