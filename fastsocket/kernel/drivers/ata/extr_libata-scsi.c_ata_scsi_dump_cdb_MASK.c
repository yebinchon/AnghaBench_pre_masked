
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct scsi_device {int lun; int id; int channel; } ;
struct scsi_cmnd {int * cmnd; struct scsi_device* device; } ;
struct ata_port {int print_id; } ;


 int FUNC_0 (char*,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static inline void FUNC_1(struct ata_port *VAR_0,
         struct scsi_cmnd *VAR_1)
{
}
