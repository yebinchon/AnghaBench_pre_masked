
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct hpet_dev {int hd_flags; unsigned long hd_ireqfreq; int hd_async_queue; int hd_waitqueue; TYPE_3__* hd_hpet; TYPE_2__* hd_timer; int hd_irqdata; TYPE_1__* hd_hpets; } ;
typedef int irqreturn_t ;
struct TYPE_6__ {int hpet_isr; } ;
struct TYPE_5__ {int hpet_compare; } ;
struct TYPE_4__ {struct hpet_dev* hp_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,int ,int ) ;
 unsigned long FUNC_1 (int *) ;
 unsigned long FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (unsigned long,int *) ;
 int FUNC_7 (unsigned long,int *) ;

__attribute__((used)) static irqreturn_t FUNC_8(int VAR_8, void *VAR_9)
{
 struct hpet_dev *VAR_10;
 unsigned long VAR_11;

 VAR_10 = VAR_9;
 VAR_11 = 1 << (VAR_10 - VAR_10->hd_hpets->hp_dev);

 if ((VAR_10->hd_flags & VAR_2) &&
     !(VAR_11 & FUNC_2(&VAR_10->hd_hpet->hpet_isr)))
  return VAR_4;

 FUNC_3(&VAR_7);
 VAR_10->hd_irqdata++;





 if ((VAR_10->hd_flags & (VAR_0 | VAR_1)) == VAR_0) {
  unsigned long VAR_12, VAR_13;

  VAR_13 = VAR_10->hd_ireqfreq;
  VAR_12 = FUNC_1(&VAR_10->hd_timer->hpet_compare);
  FUNC_6(VAR_13 + VAR_12, &VAR_10->hd_timer->hpet_compare);
 }

 if (VAR_10->hd_flags & VAR_2)
  FUNC_7(VAR_11, &VAR_10->hd_hpet->hpet_isr);
 FUNC_4(&VAR_7);

 FUNC_5(&VAR_10->hd_waitqueue);

 FUNC_0(&VAR_10->hd_async_queue, VAR_6, VAR_5);

 return VAR_3;
}
