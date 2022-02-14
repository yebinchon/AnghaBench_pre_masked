
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int PeripheralDeviceType; unsigned char* VendorIdentification; unsigned char* ProductIdentification; unsigned char* ProductRevisionLevel; } ;
struct TYPE_5__ {int PeripheralDeviceType; int PageLength; unsigned char* ProductSerialNumber; } ;
typedef TYPE_1__ DAC960_SCSI_Inquiry_UnitSerialNumber_T ;
typedef TYPE_2__ DAC960_SCSI_Inquiry_T ;



__attribute__((used)) static void FUNC_0(DAC960_SCSI_Inquiry_T
      *VAR_0,
           DAC960_SCSI_Inquiry_UnitSerialNumber_T
      *VAR_1,
           unsigned char *VAR_2,
           unsigned char *VAR_3,
           unsigned char *VAR_4,
           unsigned char *VAR_5)
{
  int VAR_6, VAR_7;
  if (VAR_0->PeripheralDeviceType == 0x1F) return;
  for (VAR_7 = 0; VAR_7 < sizeof(VAR_0->VendorIdentification); VAR_7++)
    {
      unsigned char VAR_8 =
 VAR_0->VendorIdentification[VAR_7];
      VAR_2[VAR_7] = (VAR_8 >= ' ' && VAR_8 <= '~'
     ? VAR_8 : ' ');
    }
  VAR_2[sizeof(VAR_0->VendorIdentification)] = '\0';
  for (VAR_7 = 0; VAR_7 < sizeof(VAR_0->ProductIdentification); VAR_7++)
    {
      unsigned char VAR_9 =
 VAR_0->ProductIdentification[VAR_7];
      VAR_3[VAR_7] = (VAR_9 >= ' ' && VAR_9 <= '~'
    ? VAR_9 : ' ');
    }
  VAR_3[sizeof(VAR_0->ProductIdentification)] = '\0';
  for (VAR_7 = 0; VAR_7 < sizeof(VAR_0->ProductRevisionLevel); VAR_7++)
    {
      unsigned char VAR_10 =
 VAR_0->ProductRevisionLevel[VAR_7];
      VAR_4[VAR_7] = (VAR_10 >= ' ' && VAR_10 <= '~'
       ? VAR_10 : ' ');
    }
  VAR_4[sizeof(VAR_0->ProductRevisionLevel)] = '\0';
  if (VAR_1->PeripheralDeviceType == 0x1F) return;
  VAR_6 = VAR_1->PageLength;
  if (VAR_6 >
      sizeof(VAR_1->ProductSerialNumber))
    VAR_6 = sizeof(VAR_1->ProductSerialNumber);
  for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++)
    {
      unsigned char VAR_11 =
 VAR_1->ProductSerialNumber[VAR_7];
      VAR_5[VAR_7] =
 (VAR_11 >= ' ' && VAR_11 <= '~'
  ? VAR_11 : ' ');
    }
  VAR_5[VAR_6] = '\0';
}
