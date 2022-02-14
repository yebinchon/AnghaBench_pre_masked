
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_cmnd {int* cmnd; } ;


 int FUNC_0 (struct scsi_cmnd*) ;
inline int FUNC_1(struct scsi_cmnd *VAR_0)
{
 if (!FUNC_0(VAR_0))
  return 0;
 switch (VAR_0->cmnd[0]) {
 case 135:
 case 131:
 case 134:
 case 130:
 case 132:
 case 128:
 case 133:
 case 129:
  return 1;
 default:
  return 0;
 }
}
