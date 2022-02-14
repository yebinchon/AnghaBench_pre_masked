
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int UINT ;
typedef int UCHAR ;
struct TYPE_12__ {int Size; int Buf; } ;
struct TYPE_10__ {TYPE_1__* Crypto; int Hash; } ;
struct TYPE_11__ {int BlockSize; TYPE_2__ TransformSetting; int * Iv; } ;
struct TYPE_9__ {int BlockSize; } ;
typedef TYPE_3__ IKE_SA ;
typedef TYPE_4__ BUF ;


 int FUNC_0 (void*,int *,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_4__*) ;
 int VAR_0 ;
 int FUNC_3 (int ,int *,int ,int ) ;
 TYPE_4__* FUNC_4 () ;
 int FUNC_5 (TYPE_4__*,int *,int) ;

void FUNC_6(void *VAR_1, IKE_SA *VAR_2, UINT VAR_3)
{
 BUF *VAR_4;
 UCHAR VAR_5[VAR_0];

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return;
 }

 VAR_3 = FUNC_1(VAR_3);

 VAR_4 = FUNC_4();
 FUNC_5(VAR_4, VAR_2->Iv, VAR_2->BlockSize);
 FUNC_5(VAR_4, &VAR_3, sizeof(UINT));

 FUNC_3(VAR_2->TransformSetting.Hash, VAR_5, VAR_4->Buf, VAR_4->Size);

 FUNC_0(VAR_1, VAR_5, VAR_2->TransformSetting.Crypto->BlockSize);

 FUNC_2(VAR_4);
}
