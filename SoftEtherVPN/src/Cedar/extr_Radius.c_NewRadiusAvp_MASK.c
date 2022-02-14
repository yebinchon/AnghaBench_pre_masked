
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int UINT ;
typedef void* UCHAR ;
struct TYPE_4__ {int VendorId; int Data; void* DataSize; void* VendorCode; void* Type; } ;
typedef TYPE_1__ RADIUS_AVP ;


 int FUNC_0 (int ,void*,void*) ;
 int FUNC_1 (char*,int) ;
 TYPE_1__* FUNC_2 (int) ;

RADIUS_AVP *FUNC_3(UCHAR VAR_0, UINT VAR_1, UCHAR VAR_2, void *VAR_3, UINT VAR_4)
{
 RADIUS_AVP *VAR_5 = FUNC_2(sizeof(RADIUS_AVP));

 VAR_5->Type = VAR_0;
 VAR_5->VendorId = VAR_1;
 VAR_5->VendorCode = VAR_2;
 VAR_5->DataSize = (UCHAR)VAR_4;
 FUNC_0(VAR_5->Data, VAR_3, (UCHAR)VAR_4);

 if (VAR_4 >= 256)
 {
  FUNC_1("!! size = %u\n", VAR_4);
 }

 return VAR_5;
}
