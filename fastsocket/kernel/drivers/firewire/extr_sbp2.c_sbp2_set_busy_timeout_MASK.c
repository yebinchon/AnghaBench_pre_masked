
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sbp2_logical_unit {int generation; TYPE_1__* tgt; } ;
struct fw_device {int max_speed; int card; } ;
typedef int d ;
typedef int __be32 ;
struct TYPE_2__ {int node_id; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int ,int ,int ,scalar_t__,int *,int) ;
 struct fw_device* FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(struct sbp2_logical_unit *VAR_5)
{
 struct fw_device *VAR_6 = FUNC_2(VAR_5->tgt);
 __be32 VAR_7 = FUNC_0(VAR_2 | VAR_3);

 FUNC_1(VAR_6->card, VAR_4,
      VAR_5->tgt->node_id, VAR_5->generation, VAR_6->max_speed,
      VAR_1 + VAR_0,
      &VAR_7, sizeof(VAR_7));
}
