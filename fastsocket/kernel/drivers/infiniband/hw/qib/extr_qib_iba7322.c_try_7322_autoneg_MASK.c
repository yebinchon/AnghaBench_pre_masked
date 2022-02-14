
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qib_pportdata {TYPE_1__* cpspec; int lflags_lock; int lflags; } ;
struct TYPE_2__ {int autoneg_work; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct qib_pportdata*) ;
 int FUNC_2 (struct qib_pportdata*,int ) ;
 int FUNC_3 (int ,int *,int ) ;
 int FUNC_4 (struct qib_pportdata*,int ) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_7(struct qib_pportdata *VAR_3)
{
 unsigned long VAR_4;

 FUNC_5(&VAR_3->lflags_lock, VAR_4);
 VAR_3->lflags |= VAR_0;
 FUNC_6(&VAR_3->lflags_lock, VAR_4);
 FUNC_2(VAR_3, 0);
 FUNC_4(VAR_3, VAR_1);
 FUNC_1(VAR_3);

 FUNC_3(VAR_2, &VAR_3->cpspec->autoneg_work,
      FUNC_0(2));
}
