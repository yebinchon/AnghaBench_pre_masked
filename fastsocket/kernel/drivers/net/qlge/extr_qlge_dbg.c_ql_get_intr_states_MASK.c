
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ql_adapter {int rx_ring_count; TYPE_1__* intr_context; } ;
struct TYPE_2__ {int intr_read_mask; } ;


 int VAR_0 ;
 int FUNC_0 (struct ql_adapter*,int ) ;
 int FUNC_1 (struct ql_adapter*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct ql_adapter *VAR_1, u32 *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1->rx_ring_count; VAR_3++, VAR_2++) {
  FUNC_1(VAR_1, VAR_0,
    VAR_1->intr_context[VAR_3].intr_read_mask);
  *VAR_2 = FUNC_0(VAR_1, VAR_0);
 }
}
