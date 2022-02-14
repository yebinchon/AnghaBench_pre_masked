
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct ocrdma_pd {int id; scalar_t__ uctx; scalar_t__ dpp_enabled; struct ocrdma_dev* dev; } ;
struct TYPE_2__ {int db_page_size; scalar_t__ unmapped_db; scalar_t__ dpp_unmapped_addr; } ;
struct ocrdma_dev {TYPE_1__ nic_info; } ;
struct ib_pd {int dummy; } ;


 int VAR_0 ;
 struct ocrdma_pd* FUNC_0 (struct ib_pd*) ;
 int FUNC_1 (struct ocrdma_pd*) ;
 int FUNC_2 (scalar_t__,scalar_t__,int) ;
 int FUNC_3 (struct ocrdma_dev*,struct ocrdma_pd*) ;

int FUNC_4(struct ib_pd *VAR_1)
{
 struct ocrdma_pd *VAR_2 = FUNC_0(VAR_1);
 struct ocrdma_dev *VAR_3 = VAR_2->dev;
 int VAR_4;
 u64 VAR_5;

 VAR_4 = FUNC_3(VAR_3, VAR_2);
 if (VAR_2->uctx) {
  u64 VAR_6 = VAR_3->nic_info.dpp_unmapped_addr +
      (VAR_2->id * VAR_0);
  if (VAR_2->dpp_enabled)
   FUNC_2(VAR_2->uctx, VAR_6, VAR_0);
  VAR_5 = VAR_3->nic_info.unmapped_db +
      (VAR_2->id * VAR_3->nic_info.db_page_size);
  FUNC_2(VAR_2->uctx, VAR_5, VAR_3->nic_info.db_page_size);
 }
 FUNC_1(VAR_2);
 return VAR_4;
}
