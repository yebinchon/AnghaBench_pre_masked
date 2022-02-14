
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ WaitToUseCipher; } ;
typedef TYPE_1__ SOCK ;


 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (scalar_t__) ;

void FUNC_2(SOCK *VAR_0, char *VAR_1)
{

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 if (VAR_0->WaitToUseCipher)
 {
  FUNC_1(VAR_0->WaitToUseCipher);
 }

 VAR_0->WaitToUseCipher = FUNC_0(VAR_1);
}
