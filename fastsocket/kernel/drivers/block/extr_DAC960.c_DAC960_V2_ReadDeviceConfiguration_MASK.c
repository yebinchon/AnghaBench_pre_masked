
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {TYPE_2__** InquiryUnitSerialNumber; TYPE_2__** PhysicalDeviceInformation; TYPE_2__* NewInquiryUnitSerialNumber; TYPE_2__* NewPhysicalDeviceInformation; } ;
struct TYPE_16__ {TYPE_1__ V2; } ;
struct TYPE_15__ {unsigned char Channel; unsigned char TargetID; unsigned char LogicalUnit; int PeripheralDeviceType; } ;
typedef TYPE_2__ DAC960_V2_PhysicalDeviceInfo_T ;
typedef TYPE_2__ DAC960_SCSI_Inquiry_UnitSerialNumber_T ;
typedef TYPE_4__ DAC960_Controller_T ;


 int FUNC_0 (TYPE_4__*,char*) ;
 int FUNC_1 (TYPE_4__*,unsigned char,unsigned char,unsigned char) ;
 int FUNC_2 (TYPE_4__*,unsigned char,unsigned char,unsigned char) ;
 int VAR_0 ;
 int FUNC_3 (TYPE_2__*) ;
 TYPE_2__* FUNC_4 (int,int ) ;
 int FUNC_5 (TYPE_2__*,TYPE_2__*,int) ;
 int FUNC_6 (TYPE_2__*,int ,int) ;

__attribute__((used)) static bool FUNC_7(DAC960_Controller_T
       *VAR_1)
{
  unsigned char VAR_2 = 0, VAR_3 = 0, VAR_4 = 0;
  unsigned short VAR_5 = 0;

  while (1)
    {
      DAC960_V2_PhysicalDeviceInfo_T *VAR_6 =
  VAR_1->V2.NewPhysicalDeviceInformation;
      DAC960_V2_PhysicalDeviceInfo_T *VAR_7;
      DAC960_SCSI_Inquiry_UnitSerialNumber_T *VAR_8 =
  VAR_1->V2.NewInquiryUnitSerialNumber;
      DAC960_SCSI_Inquiry_UnitSerialNumber_T *VAR_9;

      if (!FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4))
   break;

      VAR_7 = FUNC_4(sizeof(DAC960_V2_PhysicalDeviceInfo_T),
        VAR_0);
      if (VAR_7 == ((void*)0))
  return FUNC_0(VAR_1, "PHYSICAL DEVICE ALLOCATION");
      VAR_1->V2.PhysicalDeviceInformation[VAR_5] =
  VAR_7;
      FUNC_5(VAR_7, VAR_6,
  sizeof(DAC960_V2_PhysicalDeviceInfo_T));

      VAR_9 = FUNC_4(
       sizeof(DAC960_SCSI_Inquiry_UnitSerialNumber_T), VAR_0);
      if (VAR_9 == ((void*)0)) {
 FUNC_3(VAR_7);
 return FUNC_0(VAR_1, "SERIAL NUMBER ALLOCATION");
      }
      VAR_1->V2.InquiryUnitSerialNumber[VAR_5] =
  VAR_9;

      VAR_2 = VAR_6->Channel;
      VAR_3 = VAR_6->TargetID;
      VAR_4 = VAR_6->LogicalUnit;







      if (!FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4)) {
       FUNC_6(VAR_9, 0,
             sizeof(DAC960_SCSI_Inquiry_UnitSerialNumber_T));
      VAR_9->PeripheralDeviceType = 0x1F;
      } else
       FUNC_5(VAR_9, VAR_8,
  sizeof(DAC960_SCSI_Inquiry_UnitSerialNumber_T));

      VAR_5++;
      VAR_4++;
    }
  return 1;
}
