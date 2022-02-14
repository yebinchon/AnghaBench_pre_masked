
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_5__ {int * mtc_snaps; int * mtc_counts; } ;
struct TYPE_6__ {TYPE_1__ cpu_monotonic; } ;
typedef TYPE_2__ cpu_data_t ;
typedef int arm_saved_state_t ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,unsigned int,int) ;
 unsigned int VAR_4 ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *,int,int ) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (int ) ;
 int VAR_5 ;
 scalar_t__ FUNC_10 () ;
 int * VAR_6 ;
 int FUNC_11 (unsigned int,int ) ;
 int FUNC_12 (TYPE_2__*,unsigned int) ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 int FUNC_13 (int,int ) ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static void
FUNC_14(cpu_data_t *VAR_11, uint64_t VAR_12)
{
 FUNC_4(VAR_11 != ((void*)0));
 FUNC_4(FUNC_10() == VAR_3);

 (void)FUNC_5(&VAR_10, 1, VAR_5);




 for (unsigned int VAR_13 = 0; VAR_13 < VAR_4; VAR_13++) {
  if ((VAR_12 & FUNC_2(VAR_13)) == 0) {
   continue;
  }

  uint64_t VAR_14 = FUNC_12(VAR_11, VAR_13);
  VAR_11->cpu_monotonic.mtc_counts[VAR_13] += VAR_14;
  FUNC_11(VAR_13, VAR_6[VAR_13]);
  VAR_11->cpu_monotonic.mtc_snaps[VAR_13] = VAR_6[VAR_13];

  if (VAR_9 && VAR_7 == VAR_13) {
   bool VAR_15 = 0;
   arm_saved_state_t *VAR_16 = FUNC_9(FUNC_7());
   if (VAR_16) {
    VAR_15 = FUNC_3(FUNC_8(VAR_16));
   }
   FUNC_1(FUNC_0(VAR_1, VAR_2, 1),
     VAR_7, VAR_15);
   FUNC_13(VAR_15, VAR_8);
  }
 }




 for (unsigned int VAR_17 = VAR_4; VAR_17 < VAR_0; VAR_17++) {
  if (VAR_12 & FUNC_2(VAR_17)) {
   extern void FUNC_0(unsigned int VAR_18);
   FUNC_0(VAR_17);
  }
 }

 FUNC_6();
}
