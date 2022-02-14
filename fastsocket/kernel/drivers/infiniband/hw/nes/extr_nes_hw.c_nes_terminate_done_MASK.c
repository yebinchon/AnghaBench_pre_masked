
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct nes_vnic {struct nes_device* nesdev; } ;
struct TYPE_2__ {int device; } ;
struct nes_qp {int term_flags; int terminate_timer; int lock; scalar_t__ hte_added; TYPE_1__ ibqp; } ;
struct nes_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct nes_qp*) ;
 int FUNC_2 (struct nes_device*,struct nes_qp*,int ,int ,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 struct nes_vnic* FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct nes_qp *VAR_4, int VAR_5)
{
 u32 VAR_6 = VAR_1;
 unsigned long VAR_7;
 struct nes_vnic *VAR_8 = FUNC_5(VAR_4->ibqp.device);
 struct nes_device *VAR_9 = VAR_8->nesdev;
 u8 VAR_10 = 0;

 FUNC_3(&VAR_4->lock, VAR_7);
 if (VAR_4->hte_added) {
  VAR_4->hte_added = 0;
  VAR_6 |= VAR_0;
 }

 VAR_10 = (VAR_4->term_flags & VAR_3) == 0;
 VAR_4->term_flags |= VAR_3;
 FUNC_4(&VAR_4->lock, VAR_7);


 if (VAR_10) {
  if (VAR_5 == 0)
   FUNC_0(&VAR_4->terminate_timer);
  else
   VAR_6 |= VAR_2;

  FUNC_2(VAR_9, VAR_4, VAR_6, 0, 0);
  FUNC_1(VAR_4);
 }
}
