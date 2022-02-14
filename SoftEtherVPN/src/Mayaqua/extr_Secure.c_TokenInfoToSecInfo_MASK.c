
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int buf ;
struct TYPE_7__ {int minor; int major; } ;
struct TYPE_6__ {int minor; int major; } ;
struct TYPE_9__ {TYPE_2__ firmwareVersion; TYPE_1__ hardwareVersion; int ulFreePrivateMemory; int ulTotalPrivateMemory; int ulFreePublicMemory; int ulTotalPublicMemory; int ulMaxPinLen; int ulMinPinLen; int ulMaxRwSessionCount; int ulMaxSessionCount; int serialNumber; int model; int manufacturerID; int label; } ;
struct TYPE_8__ {void* FirmwareVersion; void* HardwareVersion; int FreePrivateMemory; int TotalPrivateMemory; int FreePublicMemory; int TotalPublicMemory; int MaxPinLen; int MinPinLen; int MaxRWSession; int MaxSession; void* SerialNumber; void* Model; void* ManufacturerId; void* Label; } ;
typedef TYPE_3__ SEC_INFO ;
typedef TYPE_4__ CK_TOKEN_INFO ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,int ,int) ;
 void* FUNC_2 (char*) ;
 int FUNC_3 (char*,int,char*,int ,int ) ;
 int VAR_0 ;
 int FUNC_4 (void*,int ,char*,int ) ;
 int FUNC_5 (char*,int) ;
 void* FUNC_6 (int) ;

SEC_INFO *FUNC_7(void *VAR_1)
{
 SEC_INFO *VAR_2;
 char VAR_3[VAR_0];
 CK_TOKEN_INFO *VAR_4 = (CK_TOKEN_INFO *)VAR_1;

 if (VAR_4 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_2 = FUNC_6(sizeof(SEC_INFO));


 FUNC_5(VAR_3, sizeof(VAR_3));
 FUNC_1(VAR_3, VAR_4->label, sizeof(VAR_4->label));
 VAR_2->Label = FUNC_6(FUNC_0(VAR_3, 0));
 FUNC_4(VAR_2->Label, 0, VAR_3, 0);


 FUNC_5(VAR_3, sizeof(VAR_3));
 FUNC_1(VAR_3, VAR_4->manufacturerID, sizeof(VAR_4->manufacturerID));
 VAR_2->ManufacturerId = FUNC_6(FUNC_0(VAR_3, 0));
 FUNC_4(VAR_2->ManufacturerId, 0, VAR_3, 0);


 FUNC_5(VAR_3, sizeof(VAR_3));
 FUNC_1(VAR_3, VAR_4->model, sizeof(VAR_4->model));
 VAR_2->Model = FUNC_6(FUNC_0(VAR_3, 0));
 FUNC_4(VAR_2->Model, 0, VAR_3, 0);


 FUNC_5(VAR_3, sizeof(VAR_3));
 FUNC_1(VAR_3, VAR_4->serialNumber, sizeof(VAR_4->serialNumber));
 VAR_2->SerialNumber = FUNC_6(FUNC_0(VAR_3, 0));
 FUNC_4(VAR_2->SerialNumber, 0, VAR_3, 0);


 VAR_2->MaxSession = VAR_4->ulMaxSessionCount;
 VAR_2->MaxRWSession = VAR_4->ulMaxRwSessionCount;
 VAR_2->MinPinLen = VAR_4->ulMinPinLen;
 VAR_2->MaxPinLen = VAR_4->ulMaxPinLen;
 VAR_2->TotalPublicMemory = VAR_4->ulTotalPublicMemory;
 VAR_2->FreePublicMemory = VAR_4->ulFreePublicMemory;
 VAR_2->TotalPrivateMemory = VAR_4->ulTotalPrivateMemory;
 VAR_2->FreePrivateMemory = VAR_4->ulFreePrivateMemory;


 FUNC_3(VAR_3, sizeof(VAR_3), "%u.%02u", VAR_4->hardwareVersion.major, VAR_4->hardwareVersion.minor);
 VAR_2->HardwareVersion = FUNC_2(VAR_3);


 FUNC_3(VAR_3, sizeof(VAR_3), "%u.%02u", VAR_4->firmwareVersion.major, VAR_4->firmwareVersion.minor);
 VAR_2->FirmwareVersion = FUNC_2(VAR_3);

 return VAR_2;
}
