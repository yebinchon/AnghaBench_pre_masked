
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pm_phase; int am_phase; int lfo_pm; int lfo_am; } ;
typedef TYPE_1__ OPLL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t FUNC_0 (int,scalar_t__) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int * VAR_7 ;
 int VAR_8 ;
 int * VAR_9 ;

__attribute__((used)) static void FUNC_1(OPLL * VAR_10) {
 VAR_10->pm_phase = (VAR_10->pm_phase + VAR_8) & (VAR_4 - 1);
 VAR_10->am_phase = (VAR_10->am_phase + VAR_6) & (VAR_1 - 1);
 VAR_10->lfo_am = VAR_7[FUNC_0(VAR_10->am_phase, VAR_0 - VAR_2)];
 VAR_10->lfo_pm = VAR_9[FUNC_0(VAR_10->pm_phase, VAR_3 - VAR_5)];
}
