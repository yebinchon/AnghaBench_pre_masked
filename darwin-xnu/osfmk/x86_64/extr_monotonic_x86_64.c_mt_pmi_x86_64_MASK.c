
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int x86_saved_state_t ;
struct TYPE_4__ {int cs; } ;
struct TYPE_5__ {TYPE_1__ isf; } ;
typedef TYPE_2__ x86_saved_state64_t ;
typedef int uint64_t ;
struct mt_cpu {int* mtc_snaps; int * mtc_counts; } ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,unsigned int,unsigned int) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,unsigned int,int) ;
 unsigned int VAR_5 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int *,int,int ) ;
 int VAR_6 ;
 scalar_t__ FUNC_7 () ;
 int* VAR_7 ;
 int FUNC_8 (unsigned int,int) ;
 struct mt_cpu* FUNC_9 () ;
 scalar_t__ VAR_8 ;
 unsigned int VAR_9 ;
 int VAR_10 ;
 int FUNC_10 (int,int ) ;
 scalar_t__ VAR_11 ;
 int FUNC_11 (struct mt_cpu*,unsigned int) ;
 int VAR_12 ;
 int FUNC_12 (int ) ;
 TYPE_2__* FUNC_13 (int *) ;

__attribute__((used)) static int
FUNC_14(x86_saved_state_t *VAR_13)
{
 uint64_t VAR_14;
 struct mt_cpu *VAR_15;

 FUNC_5(FUNC_7() == VAR_3);
 VAR_15 = FUNC_9();
 VAR_14 = FUNC_12(VAR_4);

 (void)FUNC_6(&VAR_12, 1, VAR_6);

 for (unsigned int VAR_16 = 0; VAR_16 < VAR_5; VAR_16++) {
  if (VAR_14 & FUNC_0(VAR_16)) {
   uint64_t VAR_17 = VAR_0 - VAR_15->mtc_snaps[VAR_16];
   FUNC_5(VAR_17 <= VAR_0);
   VAR_17 += 1;

   uint64_t VAR_18 = FUNC_11(VAR_15, VAR_16);
   VAR_15->mtc_counts[VAR_16] += VAR_18;

   if (VAR_11 && VAR_9 == VAR_16) {
    x86_saved_state64_t *VAR_19 = FUNC_13(VAR_13);
    bool VAR_20 = (VAR_19->isf.cs & 0x3) ? 1 : 0;
    FUNC_3(FUNC_2(VAR_1, VAR_2, 1),
      VAR_9, VAR_20);
    FUNC_10(VAR_20, VAR_10);
   } else if (VAR_8) {
    FUNC_1(FUNC_2(VAR_1, VAR_2, 2),
      VAR_9, VAR_16);
   }

   VAR_15->mtc_snaps[VAR_16] = VAR_7[VAR_16];
   FUNC_8(VAR_16, VAR_7[VAR_16]);
  }
 }


 if (VAR_14 & ((FUNC_4(1) << 4) - 1)) {
  extern void FUNC_0(x86_saved_state_t *VAR_21);
  FUNC_0(VAR_13);
 }
 return 0;
}
