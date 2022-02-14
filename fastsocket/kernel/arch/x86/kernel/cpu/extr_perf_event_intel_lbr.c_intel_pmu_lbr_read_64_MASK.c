
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_7__ {int nr; } ;
struct cpu_hw_events {TYPE_3__ lbr_stack; TYPE_2__* lbr_entries; } ;
typedef int s64 ;
struct TYPE_5__ {int lbr_format; } ;
struct TYPE_8__ {int lbr_nr; scalar_t__ lbr_to; scalar_t__ lbr_from; TYPE_1__ intel_cap; } ;
struct TYPE_6__ {int from; int to; int mispred; int predicted; scalar_t__ reserved; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (scalar_t__,int) ;
 TYPE_4__ VAR_2 ;

__attribute__((used)) static void FUNC_2(struct cpu_hw_events *VAR_3)
{
 unsigned long VAR_4 = VAR_2.lbr_nr - 1;
 int VAR_5 = VAR_2.intel_cap.lbr_format;
 u64 VAR_6 = FUNC_0();
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_2.lbr_nr; VAR_7++) {
  unsigned long VAR_8 = (VAR_6 - VAR_7) & VAR_4;
  u64 VAR_9, VAR_10, VAR_11 = 0, VAR_12 = 0;

  FUNC_1(VAR_2.lbr_from + VAR_8, VAR_9);
  FUNC_1(VAR_2.lbr_to + VAR_8, VAR_10);

  if (VAR_5 == VAR_0) {
   VAR_11 = !!(VAR_9 & VAR_1);
   VAR_12 = !VAR_11;
   VAR_9 = (u64)((((s64)VAR_9) << 1) >> 1);
  }

  VAR_3->lbr_entries[VAR_7].from = VAR_9;
  VAR_3->lbr_entries[VAR_7].to = VAR_10;
  VAR_3->lbr_entries[VAR_7].mispred = VAR_11;
  VAR_3->lbr_entries[VAR_7].predicted = VAR_12;
  VAR_3->lbr_entries[VAR_7].reserved = 0;
 }
 VAR_3->lbr_stack.nr = VAR_7;
}
