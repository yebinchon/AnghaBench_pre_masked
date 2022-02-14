
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef scalar_t__ uint16_t ;
struct scsi_qla_host {int hardware_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct scsi_qla_host*) ;
 scalar_t__ FUNC_1 (struct scsi_qla_host*,scalar_t__) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

int FUNC_4(struct scsi_qla_host * VAR_2)
{
 int VAR_3 = VAR_0;
 uint16_t VAR_4 = 0;
 uint32_t VAR_5;
 unsigned long VAR_6;

 FUNC_2(&VAR_2->hardware_lock, VAR_6);
 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_2); VAR_5++)
  VAR_4 += FUNC_1(VAR_2, VAR_5);
 FUNC_3(&VAR_2->hardware_lock, VAR_6);

 if (VAR_4 == 0)
  VAR_3 = VAR_1;

 return VAR_3;
}
