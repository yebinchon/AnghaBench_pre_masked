
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_4__ {scalar_t__ flags; int timer; int counter; } ;
struct TYPE_3__ {int lock; } ;
struct qib_pportdata {TYPE_2__ cong_stats; TYPE_1__ ibport_data; } ;
struct qib_devdata {scalar_t__ (* f_portcntr ) (struct qib_pportdata*,int ) ;int (* f_set_cntr_sample ) (struct qib_pportdata*,int ,int) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct qib_pportdata*) ;
 struct qib_devdata* FUNC_1 (struct qib_pportdata*) ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 scalar_t__ FUNC_5 (struct qib_pportdata*,int ) ;
 int FUNC_6 (struct qib_pportdata*,int ,int) ;
 int FUNC_7 (struct qib_pportdata*) ;

__attribute__((used)) static void FUNC_8(unsigned long VAR_7)
{
 struct qib_pportdata *VAR_8 = (struct qib_pportdata *)VAR_7;
 struct qib_devdata *VAR_9 = FUNC_1(VAR_8);
 unsigned long VAR_10;
 u8 VAR_11;

 FUNC_3(&VAR_8->ibport_data.lock, VAR_10);
 if (VAR_8->cong_stats.flags == VAR_1) {
  VAR_11 = VAR_9->f_portcntr(VAR_8, VAR_4);
  if (VAR_11 == VAR_3) {

   FUNC_0(VAR_8);
   VAR_8->cong_stats.flags = VAR_2;
  } else
   goto done;
 }
 VAR_8->cong_stats.counter = FUNC_7(VAR_8);
 VAR_9->f_set_cntr_sample(VAR_8, VAR_5, 0x0);
done:
 FUNC_4(&VAR_8->ibport_data.lock, VAR_10);
 FUNC_2(&VAR_8->cong_stats.timer, VAR_6 + VAR_0);
}
