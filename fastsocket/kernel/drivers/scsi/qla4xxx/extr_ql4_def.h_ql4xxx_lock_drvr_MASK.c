
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_qla_host {int mac_index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct scsi_qla_host*) ;
 int FUNC_1 (struct scsi_qla_host*,int ,int) ;

__attribute__((used)) static inline int FUNC_2(struct scsi_qla_host *VAR_4)
{
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4, VAR_1,
           VAR_0);
 else
  return FUNC_1(VAR_4, VAR_2,
           (VAR_3 |
     (VAR_4->mac_index)) << 1);
}
