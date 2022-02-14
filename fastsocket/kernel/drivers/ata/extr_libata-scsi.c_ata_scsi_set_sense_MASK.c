
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct scsi_cmnd {int result; int sense_buffer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct scsi_cmnd *VAR_2, u8 VAR_3, u8 VAR_4, u8 VAR_5)
{
 VAR_2->result = (VAR_0 << 24) | VAR_1;

 FUNC_0(0, VAR_2->sense_buffer, VAR_3, VAR_4, VAR_5);
}
