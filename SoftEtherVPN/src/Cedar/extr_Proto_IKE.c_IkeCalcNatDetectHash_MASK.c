
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int USHORT ;
typedef int UINT64 ;
typedef int UINT ;
struct TYPE_16__ {int Size; int Buf; } ;
struct TYPE_15__ {int HashSize; } ;
struct TYPE_14__ {int * addr; int * ipv6_addr; } ;
typedef TYPE_1__ IP ;
typedef int IKE_SERVER ;
typedef TYPE_2__ IKE_HASH ;
typedef TYPE_3__ BUF ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_2__*,int *,int ,int ) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 TYPE_3__* FUNC_4 (int *,int ) ;
 TYPE_3__* FUNC_5 () ;
 int FUNC_6 (TYPE_3__*,int *,int) ;
 int FUNC_7 (TYPE_3__*,int ) ;

BUF *FUNC_8(IKE_SERVER *VAR_1, IKE_HASH *VAR_2, UINT64 VAR_3, UINT64 VAR_4, IP *VAR_5, UINT VAR_6)
{
 BUF *VAR_7;
 USHORT VAR_8;
 USHORT VAR_9[VAR_0];

 if (VAR_1 == ((void*)0) || VAR_5 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return FUNC_5();
 }

 VAR_7 = FUNC_5();

 FUNC_7(VAR_7, VAR_3);
 FUNC_7(VAR_7, VAR_4);

 if (FUNC_3(VAR_5))
 {
  FUNC_6(VAR_7, VAR_5->ipv6_addr, sizeof(VAR_5->ipv6_addr));
 }
 else
 {
  FUNC_6(VAR_7, VAR_5->addr, sizeof(VAR_5->addr));
 }

 VAR_8 = FUNC_0((USHORT)VAR_6);

 FUNC_6(VAR_7, &VAR_8, sizeof(USHORT));

 FUNC_2(VAR_2, VAR_9, VAR_7->Buf, VAR_7->Size);

 FUNC_1(VAR_7);

 return FUNC_4(VAR_9, VAR_2->HashSize);
}
