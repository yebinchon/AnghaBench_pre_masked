
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocrdma_qp {int id; scalar_t__ rq_db; scalar_t__ sq_db; } ;
struct ocrdma_pd {int id; } ;
struct TYPE_2__ {scalar_t__ dev_family; int db_page_size; scalar_t__ db; } ;
struct ocrdma_dev {TYPE_1__ nic_info; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static void FUNC_0(struct ocrdma_dev *VAR_6, struct ocrdma_qp *VAR_7,
        struct ocrdma_pd *VAR_8)
{
 if (VAR_6->nic_info.dev_family == VAR_5) {
  VAR_7->sq_db = VAR_6->nic_info.db +
   (VAR_8->id * VAR_6->nic_info.db_page_size) +
   VAR_2;
  VAR_7->rq_db = VAR_6->nic_info.db +
   (VAR_8->id * VAR_6->nic_info.db_page_size) +
   ((VAR_7->id < 128) ?
   VAR_0 : VAR_1);
 } else {
  VAR_7->sq_db = VAR_6->nic_info.db +
   (VAR_8->id * VAR_6->nic_info.db_page_size) +
   VAR_4;
  VAR_7->rq_db = VAR_6->nic_info.db +
   (VAR_8->id * VAR_6->nic_info.db_page_size) +
   VAR_3;
 }
}
