
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct qla_hw_data {int loop_id_map; } ;
struct TYPE_4__ {scalar_t__ loop_id; TYPE_2__* vha; } ;
typedef TYPE_1__ fc_port_t ;
struct TYPE_5__ {struct qla_hw_data* hw; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__,int ) ;
 scalar_t__ FUNC_1 (TYPE_2__*,scalar_t__) ;

__attribute__((used)) static inline void
FUNC_2(fc_port_t *VAR_1) {
 struct qla_hw_data *VAR_2 = VAR_1->vha->hw;

 if (VAR_1->loop_id == VAR_0 ||
     FUNC_1(VAR_1->vha, VAR_1->loop_id))
  return;

 FUNC_0(VAR_1->loop_id, VAR_2->loop_id_map);
 VAR_1->loop_id = VAR_0;
}
