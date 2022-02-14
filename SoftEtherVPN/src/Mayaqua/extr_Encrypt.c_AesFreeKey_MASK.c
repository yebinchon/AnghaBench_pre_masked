
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* DecryptKey; struct TYPE_4__* EncryptKey; } ;
typedef TYPE_1__ AES_KEY_VALUE ;


 int FUNC_0 (TYPE_1__*) ;

void FUNC_1(AES_KEY_VALUE *VAR_0)
{

 if (VAR_0 == ((void*)0))
 {
  return;
 }

 FUNC_0(VAR_0->EncryptKey);
 FUNC_0(VAR_0->DecryptKey);

 FUNC_0(VAR_0);
}
