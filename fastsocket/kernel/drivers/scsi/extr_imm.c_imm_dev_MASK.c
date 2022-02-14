
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Scsi_Host {int hostdata; } ;
typedef int imm_struct ;



__attribute__((used)) static inline imm_struct *FUNC_0(struct Scsi_Host *VAR_0)
{
 return *(imm_struct **)&VAR_0->hostdata;
}
