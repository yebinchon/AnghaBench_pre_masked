
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_cmnd {int result; int sense_buffer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int,int) ;

__attribute__((used)) static void FUNC_1(struct scsi_cmnd *VAR_3,
          void (*VAR_4)(struct scsi_cmnd *))
{
 VAR_3->result = (VAR_0 << 24) | VAR_2;


 FUNC_0(0, VAR_3->sense_buffer, VAR_1, 0x24,
    0x0);
 VAR_4(VAR_3);
}
