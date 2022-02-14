
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dynpcc_info {int intr_cnt; } ;
struct jme_adapter {int rx_ring_size; struct dynpcc_info dpi; } ;


 int FUNC_0 (struct jme_adapter*,int ) ;

__attribute__((used)) static void
FUNC_1(unsigned long VAR_0)
{
 struct jme_adapter *VAR_1 = (struct jme_adapter *)VAR_0;
 struct dynpcc_info *VAR_2 = &(VAR_1->dpi);

 FUNC_0(VAR_1, VAR_1->rx_ring_size);
 ++(VAR_2->intr_cnt);

}
