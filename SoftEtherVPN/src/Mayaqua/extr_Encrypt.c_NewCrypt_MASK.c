
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct rc4_key_st {int dummy; } ;
typedef int UINT ;
typedef int UCHAR ;
struct TYPE_4__ {int Rc4Key; } ;
typedef TYPE_1__ CRYPT ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int *) ;
 TYPE_1__* FUNC_2 (int) ;

CRYPT *FUNC_3(void *VAR_0, UINT VAR_1)
{
 CRYPT *VAR_2 = FUNC_2(sizeof(CRYPT));

 VAR_2->Rc4Key = FUNC_0(sizeof(struct rc4_key_st));

 FUNC_1(VAR_2->Rc4Key, VAR_1, (UCHAR *)VAR_0);

 return VAR_2;
}
