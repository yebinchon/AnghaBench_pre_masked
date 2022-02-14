
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fc_fcp_pkt {int scsi_pkt_lock; } ;


 int FUNC_0 (struct fc_fcp_pkt*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static inline void FUNC_2(struct fc_fcp_pkt *VAR_0)
{
 FUNC_1(&VAR_0->scsi_pkt_lock);
 FUNC_0(VAR_0);
}
