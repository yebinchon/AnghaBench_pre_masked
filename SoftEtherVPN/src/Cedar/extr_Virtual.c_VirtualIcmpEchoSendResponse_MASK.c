
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int VH ;
typedef int USHORT ;
typedef scalar_t__ UINT ;
typedef int UCHAR ;
struct TYPE_5__ {void* SeqNo; void* Identifier; } ;
typedef TYPE_1__ ICMP_ECHO ;


 int FUNC_0 (int *,void*,scalar_t__) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *,scalar_t__,scalar_t__,TYPE_1__*,scalar_t__) ;
 TYPE_1__* FUNC_4 (scalar_t__) ;

void FUNC_5(VH *VAR_0, UINT VAR_1, UINT VAR_2, USHORT VAR_3, USHORT VAR_4, void *VAR_5, UINT VAR_6)
{
 ICMP_ECHO *VAR_7;

 if (VAR_0 == ((void*)0) || VAR_5 == ((void*)0))
 {
  return;
 }


 VAR_7 = FUNC_4(sizeof(ICMP_ECHO) + VAR_6);
 VAR_7->Identifier = FUNC_1(VAR_3);
 VAR_7->SeqNo = FUNC_1(VAR_4);


 FUNC_0(((UCHAR *)VAR_7) + sizeof(ICMP_ECHO), VAR_5, VAR_6);


 FUNC_3(VAR_0, VAR_1, VAR_2, VAR_7, sizeof(ICMP_ECHO) + VAR_6);


 FUNC_2(VAR_7);
}
