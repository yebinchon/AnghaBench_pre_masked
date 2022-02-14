
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int ip ;
struct TYPE_8__ {int Size; int Buf; } ;
struct TYPE_7__ {int FlagEncrypted; } ;
typedef int SOCK ;
typedef int IP ;
typedef TYPE_1__ IKE_PACKET ;
typedef TYPE_2__ BUF ;


 int FUNC_0 (TYPE_2__*) ;
 TYPE_2__* FUNC_1 (TYPE_1__*,int *,int) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *,int,int ,int ) ;
 int FUNC_5 (int *,int,int,int,int) ;
 int FUNC_6 (int *,int) ;

void FUNC_7(IKE_PACKET *VAR_0)
{
 BUF *VAR_1;
 IP VAR_2;
 SOCK *VAR_3;

 if (VAR_0 == ((void*)0))
 {
  return;
 }

 VAR_0->FlagEncrypted = 0;

 VAR_1 = FUNC_1(VAR_0, ((void*)0), 1);

 if (VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_6(&VAR_2, sizeof(VAR_2));
 FUNC_5(&VAR_2, 1, 2, 3, 4);

 VAR_3 = FUNC_2(0);

 FUNC_4(VAR_3, &VAR_2, 500, VAR_1->Buf, VAR_1->Size);

 FUNC_3(VAR_3);
 FUNC_0(VAR_1);
}
