
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct scsi_qla_host {int func_num; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct scsi_qla_host*) ;
 int FUNC_1 (struct scsi_qla_host*,int ) ;
 scalar_t__ FUNC_2 (int ,int *) ;

inline int FUNC_3(struct scsi_qla_host *VAR_3)
{
 uint32_t VAR_4, VAR_5;
 int VAR_6;

 VAR_5 = FUNC_1(VAR_3, VAR_1);
 VAR_4 = FUNC_1(VAR_3, VAR_2);






 if (FUNC_0(VAR_3))
  VAR_6 = VAR_4 & (1 << VAR_3->func_num);
 else
  VAR_6 = VAR_4 & (1 << (VAR_3->func_num * 4));

 if ((FUNC_2(VAR_0, &VAR_3->flags)) && VAR_5)
  VAR_6 = 1;

 return VAR_6;
}
