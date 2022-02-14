
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_cmnd {scalar_t__* cmnd; } ;


 int FUNC_0 (struct scsi_cmnd*,int,unsigned long) ;

__attribute__((used)) static void
FUNC_1 (struct scsi_cmnd *VAR_0, int VAR_1)
{
 unsigned long VAR_2;

 VAR_2 = (((unsigned long)VAR_0->cmnd[2] << 24)
  | ((unsigned long)VAR_0->cmnd[3] << 16)
  | ((unsigned long)VAR_0->cmnd[4] << 8)
  | ((unsigned long)VAR_0->cmnd[5] << 0))*512UL;
 FUNC_0(VAR_0, VAR_1, VAR_2);
}
