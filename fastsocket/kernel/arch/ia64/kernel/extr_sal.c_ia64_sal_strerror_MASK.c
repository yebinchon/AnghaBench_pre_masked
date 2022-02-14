
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
const char *
FUNC_0 (long VAR_0)
{
 const char *VAR_1;
 switch (VAR_0) {
       case 0: VAR_1 = "Call completed without error"; break;
       case 1: VAR_1 = "Effect a warm boot of the system to complete "
         "the update"; break;
       case -1: VAR_1 = "Not implemented"; break;
       case -2: VAR_1 = "Invalid argument"; break;
       case -3: VAR_1 = "Call completed with error"; break;
       case -4: VAR_1 = "Virtual address not registered"; break;
       case -5: VAR_1 = "No information available"; break;
       case -6: VAR_1 = "Insufficient space to add the entry"; break;
       case -7: VAR_1 = "Invalid entry_addr value"; break;
       case -8: VAR_1 = "Invalid interrupt vector"; break;
       case -9: VAR_1 = "Requested memory not available"; break;
       case -10: VAR_1 = "Unable to write to the NVM device"; break;
       case -11: VAR_1 = "Invalid partition type specified"; break;
       case -12: VAR_1 = "Invalid NVM_Object id specified"; break;
       case -13: VAR_1 = "NVM_Object already has the maximum number "
    "of partitions"; break;
       case -14: VAR_1 = "Insufficient space in partition for the "
    "requested write sub-function"; break;
       case -15: VAR_1 = "Insufficient data buffer space for the "
    "requested read record sub-function"; break;
       case -16: VAR_1 = "Scratch buffer required for the write/delete "
    "sub-function"; break;
       case -17: VAR_1 = "Insufficient space in the NVM_Object for the "
    "requested create sub-function"; break;
       case -18: VAR_1 = "Invalid value specified in the partition_rec "
    "argument"; break;
       case -19: VAR_1 = "Record oriented I/O not supported for this "
    "partition"; break;
       case -20: VAR_1 = "Bad format of record to be written or "
    "required keyword variable not "
    "specified"; break;
       default: VAR_1 = "Unknown SAL status code"; break;
 }
 return VAR_1;
}
