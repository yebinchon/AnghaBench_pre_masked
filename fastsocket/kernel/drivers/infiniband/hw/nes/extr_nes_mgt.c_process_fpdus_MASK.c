
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nes_vnic {int dummy; } ;
struct nes_qp {int pau_lock; scalar_t__ pau_busy; scalar_t__ pau_pending; } ;


 int FUNC_0 (struct nes_vnic*,struct nes_qp*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct nes_vnic *VAR_0, struct nes_qp *VAR_1)
{
 int VAR_2 = 1;
 unsigned long VAR_3;

 do {

  FUNC_0(VAR_0, VAR_1);

  FUNC_1(&VAR_1->pau_lock, VAR_3);
  if (VAR_1->pau_pending) {
   VAR_1->pau_pending = 0;
  } else {
   VAR_1->pau_busy = 0;
   VAR_2 = 0;
  }

  FUNC_2(&VAR_1->pau_lock, VAR_3);
 } while (VAR_2);
}
