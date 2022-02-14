
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct us_data {scalar_t__ extra; } ;
struct sense_data {int ErrorCode; int AdditionalSenseLength; scalar_t__ AdditionalSenseCodeQualifier; scalar_t__ AdditionalSenseCode; void* Flags; } ;
struct scsi_cmnd {int * sense_buffer; } ;
struct isd200_info {unsigned char* ATARegs; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 size_t VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;

__attribute__((used)) static void FUNC_0(struct us_data *VAR_9, struct scsi_cmnd *VAR_10)
{
 struct isd200_info *VAR_11 = (struct isd200_info *)VAR_9->extra;
 struct sense_data *VAR_12 = (struct sense_data *) &VAR_10->sense_buffer[0];
 unsigned char VAR_13 = VAR_11->ATARegs[VAR_2];

 if(VAR_13 & VAR_0) {
  VAR_12->ErrorCode = 0x70 | VAR_7;
  VAR_12->AdditionalSenseLength = 0xb;
  VAR_12->Flags = VAR_8;
  VAR_12->AdditionalSenseCode = 0;
  VAR_12->AdditionalSenseCodeQualifier = 0;
 } else if (VAR_13 & VAR_1) {
  VAR_12->ErrorCode = 0x70 | VAR_7;
  VAR_12->AdditionalSenseLength = 0xb;
  VAR_12->Flags = VAR_8;
  VAR_12->AdditionalSenseCode = 0;
  VAR_12->AdditionalSenseCodeQualifier = 0;
 } else if (VAR_13 & VAR_3) {
  VAR_12->ErrorCode = 0x70 | VAR_7;
  VAR_12->AdditionalSenseLength = 0xb;
  VAR_12->Flags = VAR_6;
  VAR_12->AdditionalSenseCode = 0;
  VAR_12->AdditionalSenseCodeQualifier = 0;
 } else if (VAR_13 & VAR_4) {
  VAR_12->ErrorCode = 0x70 | VAR_7;
  VAR_12->AdditionalSenseLength = 0xb;
  VAR_12->Flags = VAR_5;
  VAR_12->AdditionalSenseCode = 0;
  VAR_12->AdditionalSenseCodeQualifier = 0;
 } else {
  VAR_12->ErrorCode = 0;
  VAR_12->AdditionalSenseLength = 0;
  VAR_12->Flags = 0;
  VAR_12->AdditionalSenseCode = 0;
  VAR_12->AdditionalSenseCodeQualifier = 0;
 }
}
