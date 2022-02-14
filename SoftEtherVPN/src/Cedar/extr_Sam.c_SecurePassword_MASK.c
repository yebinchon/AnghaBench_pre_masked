
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int Size; int Buf; } ;
typedef TYPE_1__ BUF ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 (void*,int ,int ) ;
 int FUNC_3 (TYPE_1__*,void*,int ) ;

void FUNC_4(void *VAR_1, void *VAR_2, void *VAR_3)
{
 BUF *VAR_4;

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0) || VAR_3 == ((void*)0))
 {
  return;
 }

 VAR_4 = FUNC_1();
 FUNC_3(VAR_4, VAR_2, VAR_0);
 FUNC_3(VAR_4, VAR_3, VAR_0);
 FUNC_2(VAR_1, VAR_4->Buf, VAR_4->Size);

 FUNC_0(VAR_4);
}
