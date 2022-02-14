
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nes_vnic {struct nes_device* nesdev; } ;
struct nes_device {struct nes_adapter* nesadapter; } ;
struct nes_adapter {int max_qp; TYPE_1__** qp_table; } ;
struct ib_qp {int dummy; } ;
struct ib_device {int dummy; } ;
struct TYPE_2__ {struct ib_qp ibqp; } ;


 int VAR_0 ;
 struct nes_vnic* FUNC_0 (struct ib_device*) ;

struct ib_qp *FUNC_1(struct ib_device *VAR_1, int VAR_2)
{
 struct nes_vnic *VAR_3 = FUNC_0(VAR_1);
 struct nes_device *VAR_4 = VAR_3->nesdev;
 struct nes_adapter *VAR_5 = VAR_4->nesadapter;

 if ((VAR_2 < VAR_0) || (VAR_2 >= (VAR_0 + VAR_5->max_qp)))
  return ((void*)0);

 return &VAR_5->qp_table[VAR_2 - VAR_0]->ibqp;
}
