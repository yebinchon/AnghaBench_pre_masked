
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long u32 ;
struct idt77252_dev {unsigned long* tst; size_t tst_index; unsigned long tst_size; int tst_lock; int tst_timer; int tst_state; TYPE_1__* soft_tst; } ;
struct TYPE_2__ {int tste; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int *) ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 scalar_t__ FUNC_6 (int ,int *) ;
 scalar_t__ FUNC_7 (int ,int *) ;
 int FUNC_8 (struct idt77252_dev*,unsigned long,unsigned long) ;

__attribute__((used)) static void
FUNC_9(unsigned long VAR_9)
{
 struct idt77252_dev *VAR_10 = (struct idt77252_dev *)VAR_9;
 unsigned long VAR_11, VAR_12, VAR_13;
 unsigned long VAR_14;
 u32 VAR_15;
 int VAR_16;

 FUNC_4(&VAR_10->tst_lock, VAR_14);

 VAR_11 = VAR_10->tst[VAR_10->tst_index];
 VAR_12 = VAR_10->tst[VAR_10->tst_index ^ 1];

 if (FUNC_7(VAR_7, &VAR_10->tst_state)) {
  VAR_13 = VAR_11 + VAR_10->tst_size - 2;

  VAR_15 = FUNC_2(VAR_0) >> 2;
  if ((VAR_15 ^ VAR_12) & ~(VAR_10->tst_size - 1)) {
   FUNC_1(&VAR_10->tst_timer, VAR_8 + 1);
   goto out;
  }

  FUNC_0(VAR_7, &VAR_10->tst_state);

  VAR_10->tst_index ^= 1;
  FUNC_8(VAR_10, VAR_13, VAR_2 | (VAR_11 << 2));

  VAR_11 = VAR_10->tst[VAR_10->tst_index];
  VAR_12 = VAR_10->tst[VAR_10->tst_index ^ 1];

  for (VAR_16 = 0; VAR_16 < VAR_10->tst_size - 2; VAR_16++) {
   if (VAR_10->soft_tst[VAR_16].tste & VAR_5) {
    FUNC_8(VAR_10, VAR_12 + VAR_16,
        VAR_10->soft_tst[VAR_16].tste & VAR_1);
    VAR_10->soft_tst[VAR_16].tste &= ~(VAR_5);
   }
  }
 }

 if (FUNC_6(VAR_6, &VAR_10->tst_state)) {

  for (VAR_16 = 0; VAR_16 < VAR_10->tst_size - 2; VAR_16++) {
   if (VAR_10->soft_tst[VAR_16].tste & VAR_4) {
    FUNC_8(VAR_10, VAR_12 + VAR_16,
        VAR_10->soft_tst[VAR_16].tste & VAR_1);
    VAR_10->soft_tst[VAR_16].tste &= ~(VAR_4);
    VAR_10->soft_tst[VAR_16].tste |= VAR_5;
   }
  }

  VAR_13 = VAR_11 + VAR_10->tst_size - 2;

  FUNC_8(VAR_10, VAR_13, VAR_3);
  FUNC_3(VAR_7, &VAR_10->tst_state);

  FUNC_1(&VAR_10->tst_timer, VAR_8 + 1);
 }

out:
 FUNC_5(&VAR_10->tst_lock, VAR_14);
}
