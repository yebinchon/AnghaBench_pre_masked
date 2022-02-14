
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fcoe_stats_info {int rxq_size; int txq_size; int version; } ;
struct cnic_dev {TYPE_1__* stats_addr; } ;
struct bnx2fc_hba {struct cnic_dev* cnic; } ;
struct TYPE_2__ {struct fcoe_stats_info fcoe_stat; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static int FUNC_1(void *VAR_4)
{
 struct bnx2fc_hba *VAR_5 = VAR_4;
 struct cnic_dev *VAR_6;
 struct fcoe_stats_info *VAR_7;

 if (!VAR_5)
  return -VAR_3;

 VAR_6 = VAR_5->cnic;
 VAR_7 = &VAR_6->stats_addr->fcoe_stat;
 if (!VAR_7)
  return -VAR_3;

 FUNC_0(VAR_7->version, VAR_2,
  sizeof(VAR_7->version));
 VAR_7->txq_size = VAR_1;
 VAR_7->rxq_size = VAR_0;

 return 0;
}
