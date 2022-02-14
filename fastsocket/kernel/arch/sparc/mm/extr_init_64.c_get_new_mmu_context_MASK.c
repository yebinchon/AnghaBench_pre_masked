
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long sparc64_ctx_val; } ;
struct mm_struct {TYPE_1__ context; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned long FUNC_0 (unsigned long*,unsigned long,int) ;
 unsigned long* VAR_7 ;
 int FUNC_1 () ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int VAR_8 ;
 scalar_t__ FUNC_4 (int) ;

void FUNC_5(struct mm_struct *VAR_9)
{
 unsigned long VAR_10, VAR_11;
 unsigned long VAR_12;
 unsigned long VAR_13;
 int VAR_14;

 FUNC_2(&VAR_6, VAR_13);
 VAR_12 = (VAR_9->context.sparc64_ctx_val & VAR_4);
 VAR_10 = (VAR_8 + 1) & VAR_3;
 VAR_11 = FUNC_0(VAR_7, 1 << VAR_2, VAR_10);
 VAR_14 = 0;
 if (VAR_11 >= (1 << VAR_2)) {
  VAR_11 = FUNC_0(VAR_7, VAR_10, 1);
  if (VAR_11 >= VAR_10) {
   int VAR_15;
   VAR_11 = (VAR_8 & VAR_5) +
    VAR_1;
   if (VAR_11 == 1)
    VAR_11 = VAR_1;




   VAR_7[0] = 3;
   VAR_7[1] = 0;
   VAR_7[2] = 0;
   VAR_7[3] = 0;
   for (VAR_15 = 4; VAR_15 < VAR_0; VAR_15 += 4) {
    VAR_7[VAR_15 + 0] = 0;
    VAR_7[VAR_15 + 1] = 0;
    VAR_7[VAR_15 + 2] = 0;
    VAR_7[VAR_15 + 3] = 0;
   }
   VAR_14 = 1;
   goto out;
  }
 }
 VAR_7[VAR_11>>6] |= (1UL << (VAR_11 & 63));
 VAR_11 |= (VAR_8 & VAR_5);
out:
 VAR_8 = VAR_11;
 VAR_9->context.sparc64_ctx_val = VAR_11 | VAR_12;
 FUNC_3(&VAR_6, VAR_13);

 if (FUNC_4(VAR_14))
  FUNC_1();
}
