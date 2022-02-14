
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int Cancel; int SendQueue; } ;
typedef TYPE_1__ VH ;
typedef int USHORT ;
typedef int UINT ;
typedef void UCHAR ;
struct TYPE_5__ {void* DestAddress; void* SrcAddress; int Protocol; } ;
typedef TYPE_2__ MAC_HEADER ;
typedef int BLOCK ;


 int FUNC_0 (int ) ;
 int FUNC_1 (void*,void*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 void* FUNC_5 (scalar_t__) ;
 int * FUNC_6 (void*,int,int ) ;
 int FUNC_7 (int ) ;

void FUNC_8(VH *VAR_2, UCHAR *VAR_3, UCHAR *VAR_4, USHORT VAR_5, void *VAR_6, UINT VAR_7)
{
 MAC_HEADER *VAR_8;
 UCHAR *VAR_9;
 BLOCK *VAR_10;

 if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0) || VAR_4 == ((void*)0) || VAR_6 == ((void*)0) || VAR_7 > (VAR_1 - sizeof(MAC_HEADER)))
 {
  return;
 }


 VAR_9 = FUNC_5(VAR_0 + VAR_7);


 VAR_8 = (MAC_HEADER *)&VAR_9[0];
 FUNC_1(VAR_8->DestAddress, VAR_3, 6);
 FUNC_1(VAR_8->SrcAddress, VAR_4, 6);
 VAR_8->Protocol = FUNC_2(VAR_5);


 FUNC_1(&VAR_9[sizeof(MAC_HEADER)], VAR_6, VAR_7);


 VAR_7 += sizeof(MAC_HEADER);


 VAR_10 = FUNC_6(VAR_9, VAR_7, 0);


 FUNC_4(VAR_2->SendQueue);
 {
  FUNC_3(VAR_2->SendQueue, VAR_10);
 }
 FUNC_7(VAR_2->SendQueue);


 FUNC_0(VAR_2->Cancel);
}
