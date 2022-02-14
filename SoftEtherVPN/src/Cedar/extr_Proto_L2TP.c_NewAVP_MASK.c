
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef void* USHORT ;
typedef scalar_t__ UINT ;
struct TYPE_4__ {int Mandatory; scalar_t__ DataSize; int Data; void* VendorID; void* Type; } ;
typedef TYPE_1__ L2TP_AVP ;


 int FUNC_0 (void*,scalar_t__) ;
 TYPE_1__* FUNC_1 (int) ;

L2TP_AVP *FUNC_2(USHORT VAR_0, bool VAR_1, USHORT VAR_2, void *VAR_3, UINT VAR_4)
{
 L2TP_AVP *VAR_5;

 if (VAR_4 != 0 && VAR_3 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_5 = FUNC_1(sizeof(L2TP_AVP));

 VAR_5->Type = VAR_0;
 VAR_5->Mandatory = VAR_1;
 VAR_5->VendorID = VAR_2;
 VAR_5->Data = FUNC_0(VAR_3, VAR_4);
 VAR_5->DataSize = VAR_4;

 return VAR_5;
}
