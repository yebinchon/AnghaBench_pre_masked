
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ created; } ;
struct ocrdma_eq {TYPE_2__ q; } ;
struct TYPE_4__ {scalar_t__ dev_family; } ;
struct ocrdma_dev {TYPE_1__ nic_info; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ocrdma_dev*) ;
 int FUNC_1 (struct ocrdma_dev*,TYPE_2__*) ;
 int FUNC_2 (struct ocrdma_dev*,TYPE_2__*,int ) ;

__attribute__((used)) static void FUNC_3(struct ocrdma_dev *VAR_2, struct ocrdma_eq *VAR_3)
{
 if (VAR_3->q.created) {
  FUNC_2(VAR_2, &VAR_3->q, VAR_1);
  if (VAR_2->nic_info.dev_family == VAR_0)
   FUNC_0(VAR_2);
  FUNC_1(VAR_2, &VAR_3->q);
 }
}
