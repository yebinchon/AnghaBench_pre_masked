
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int wait_queue_head_t ;
struct TYPE_2__ {int Status; int * ptr; } ;
struct scsi_cmnd {TYPE_1__ SCp; } ;
struct bfad_tskim_s {int dummy; } ;
typedef enum bfi_tskim_status { ____Placeholder_bfi_tskim_status } bfi_tskim_status ;


 int VAR_0 ;
 int FUNC_0 (int ,unsigned long*) ;
 int FUNC_1 (int *) ;

void
FUNC_2(void *VAR_1, struct bfad_tskim_s *VAR_2,
     enum bfi_tskim_status VAR_3)
{
 struct scsi_cmnd *VAR_4 = (struct scsi_cmnd *)VAR_2;
 wait_queue_head_t *VAR_5;

 VAR_4->SCp.Status |= VAR_3 << 1;
 FUNC_0(VAR_0, (unsigned long *)&VAR_4->SCp.Status);
 VAR_5 = (wait_queue_head_t *) VAR_4->SCp.ptr;
 VAR_4->SCp.ptr = ((void*)0);

 if (VAR_5)
  FUNC_1(VAR_5);
}
