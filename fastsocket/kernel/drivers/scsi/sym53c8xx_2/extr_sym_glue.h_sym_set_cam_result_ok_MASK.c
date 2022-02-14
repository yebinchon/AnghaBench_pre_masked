
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sym_ccb {int ssss_status; } ;
struct scsi_cmnd {int result; } ;


 int VAR_0 ;
 int FUNC_0 (struct scsi_cmnd*,int) ;

__attribute__((used)) static inline void FUNC_1(struct sym_ccb *VAR_1, struct scsi_cmnd *VAR_2, int VAR_3)
{
 FUNC_0(VAR_2, VAR_3);
 VAR_2->result = (((VAR_0) << 16) + ((VAR_1->ssss_status) & 0x7f));
}
