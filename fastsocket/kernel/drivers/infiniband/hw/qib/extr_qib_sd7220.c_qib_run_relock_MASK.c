
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qib_pportdata {int lflags; } ;
struct qib_devdata {int flags; struct qib_chip_specific* cspec; struct qib_pportdata* pport; } ;
struct qib_chip_specific {int relock_interval; int relock_timer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int *,scalar_t__) ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (struct qib_devdata*) ;

__attribute__((used)) static void FUNC_2(unsigned long VAR_9)
{
 struct qib_devdata *VAR_10 = (struct qib_devdata *)VAR_9;
 struct qib_pportdata *VAR_11 = VAR_10->pport;
 struct qib_chip_specific *VAR_12 = VAR_10->cspec;
 int VAR_13;







 if ((VAR_10->flags & VAR_6) && !(VAR_11->lflags &
     (VAR_1 | VAR_5 | VAR_4 |
      VAR_3))) {
  if (VAR_8) {
   if (!(VAR_11->lflags & VAR_2))
    FUNC_1(VAR_10);
  }

  VAR_13 = VAR_12->relock_interval << 1;
  if (VAR_13 > VAR_0)
   VAR_13 = VAR_0;
  VAR_12->relock_interval = VAR_13;
 } else
  VAR_13 = VAR_0;
 FUNC_0(&VAR_12->relock_timer, VAR_7 + VAR_13);
}
