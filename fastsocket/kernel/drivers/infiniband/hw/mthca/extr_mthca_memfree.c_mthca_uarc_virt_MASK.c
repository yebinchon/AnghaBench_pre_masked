
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct mthca_uar {int index; } ;
struct TYPE_2__ {int uarc_size; scalar_t__ uarc_base; } ;
struct mthca_dev {TYPE_1__ uar_table; } ;


 int VAR_0 ;

__attribute__((used)) static u64 FUNC_0(struct mthca_dev *VAR_1, struct mthca_uar *VAR_2, int VAR_3)
{
 return VAR_1->uar_table.uarc_base +
  VAR_2->index * VAR_1->uar_table.uarc_size +
  VAR_3 * VAR_0;
}
