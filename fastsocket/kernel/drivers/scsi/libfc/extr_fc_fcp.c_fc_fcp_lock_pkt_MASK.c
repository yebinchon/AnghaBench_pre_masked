
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fc_fcp_pkt {int state; int scsi_pkt_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct fc_fcp_pkt*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static inline int FUNC_3(struct fc_fcp_pkt *VAR_2)
{
 FUNC_1(&VAR_2->scsi_pkt_lock);
 if (VAR_2->state & VAR_1) {
  FUNC_2(&VAR_2->scsi_pkt_lock);
  return -VAR_0;
 }

 FUNC_0(VAR_2);
 return 0;
}
