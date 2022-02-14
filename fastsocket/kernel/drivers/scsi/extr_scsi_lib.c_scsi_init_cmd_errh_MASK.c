
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_cmnd {scalar_t__ cmd_len; int cmnd; int sense_buffer; scalar_t__ serial_number; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct scsi_cmnd*,int ) ;

__attribute__((used)) static void FUNC_3(struct scsi_cmnd *VAR_1)
{
 VAR_1->serial_number = 0;
 FUNC_2(VAR_1, 0);
 FUNC_0(VAR_1->sense_buffer, 0, VAR_0);
 if (VAR_1->cmd_len == 0)
  VAR_1->cmd_len = FUNC_1(VAR_1->cmnd);
}
