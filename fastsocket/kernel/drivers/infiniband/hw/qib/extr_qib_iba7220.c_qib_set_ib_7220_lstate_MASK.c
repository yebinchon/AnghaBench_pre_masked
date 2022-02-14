
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u16 ;
struct qib_pportdata {TYPE_1__* cpspec; int lflags_lock; int lflags; struct qib_devdata* dd; } ;
struct qib_devdata {int dummy; } ;
struct TYPE_2__ {int ibcctrl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct qib_devdata*,int ,int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct qib_pportdata *VAR_7, u16 VAR_8,
       u16 VAR_9)
{
 u64 VAR_10;
 struct qib_devdata *VAR_11 = VAR_7->dd;
 unsigned long VAR_12;

 if (VAR_9 == VAR_3) {




  FUNC_1(&VAR_7->lflags_lock, VAR_12);
  VAR_7->lflags |= VAR_1;
  FUNC_2(&VAR_7->lflags_lock, VAR_12);
 } else if (VAR_9 || VAR_8 == VAR_2) {





  FUNC_1(&VAR_7->lflags_lock, VAR_12);
  VAR_7->lflags &= ~VAR_1;
  FUNC_2(&VAR_7->lflags_lock, VAR_12);
 }

 VAR_10 = (VAR_8 << VAR_0) |
  (VAR_9 << VAR_4);

 FUNC_0(VAR_11, VAR_5, VAR_7->cpspec->ibcctrl | VAR_10);

 FUNC_0(VAR_11, VAR_6, 0);
}
