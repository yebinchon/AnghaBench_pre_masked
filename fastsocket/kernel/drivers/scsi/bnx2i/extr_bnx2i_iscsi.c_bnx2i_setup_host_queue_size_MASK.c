
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnx2i_hba {int cnic_dev_type; } ;
struct Scsi_Host {void* can_queue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 scalar_t__ FUNC_0 (int ,int *) ;

__attribute__((used)) static void FUNC_1(struct bnx2i_hba *VAR_6,
     struct Scsi_Host *VAR_7)
{
 if (FUNC_0(VAR_0, &VAR_6->cnic_dev_type))
  VAR_7->can_queue = VAR_3;
 else if (FUNC_0(VAR_1, &VAR_6->cnic_dev_type))
  VAR_7->can_queue = VAR_4;
 else if (FUNC_0(VAR_2, &VAR_6->cnic_dev_type))
  VAR_7->can_queue = VAR_5;
 else
  VAR_7->can_queue = VAR_3;
}
