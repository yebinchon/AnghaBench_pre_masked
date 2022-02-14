
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct qib_devdata {int flags; int int_counter; unsigned int first_user_ctxt; TYPE_1__* cspec; int * rcd; } ;
typedef int irqreturn_t ;
struct TYPE_4__ {int sps_ints; } ;
struct TYPE_3__ {int lli_counter; int lli_thresh; int lli_errs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (struct qib_devdata*) ;
 int FUNC_1 (struct qib_devdata*,int) ;
 int FUNC_2 (struct qib_devdata*) ;
 int FUNC_3 (int ,int*,int *) ;
 int FUNC_4 (struct qib_devdata*,int ) ;
 TYPE_2__ VAR_15 ;
 int FUNC_5 (struct qib_devdata*,int ,int) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (struct qib_devdata*,int) ;

__attribute__((used)) static irqreturn_t FUNC_8(int VAR_16, void *VAR_17)
{
 struct qib_devdata *VAR_18 = VAR_17;
 irqreturn_t VAR_19;
 u32 VAR_20, VAR_21, VAR_22, VAR_23 = 0;
 unsigned VAR_24;

 if ((VAR_18->flags & (VAR_4 | VAR_2)) != VAR_4) {






  VAR_19 = VAR_0;
  goto bail;
 }

 VAR_20 = FUNC_4(VAR_18, VAR_14);

 if (FUNC_6(!VAR_20)) {
  VAR_19 = VAR_1;
  goto bail;
 }
 if (FUNC_6(VAR_20 == -1)) {
  FUNC_0(VAR_18);

  VAR_19 = VAR_1;
  goto bail;
 }

 VAR_15.sps_ints++;
 if (VAR_18->int_counter != (u32) -1)
  VAR_18->int_counter++;

 if (FUNC_6(VAR_20 & (~VAR_5 |
         VAR_7 | VAR_6)))
  FUNC_7(VAR_18, VAR_20);







 FUNC_5(VAR_18, VAR_13, VAR_20);






 VAR_21 = VAR_20 &
  ((VAR_8 << VAR_9) |
   (VAR_10 << VAR_11));
 if (VAR_21) {
  VAR_22 = (1U << VAR_9) |
   (1U << VAR_11);
  for (VAR_24 = 0; VAR_24 < VAR_18->first_user_ctxt; VAR_24++) {
   if (VAR_21 & VAR_22) {
    VAR_21 &= ~VAR_22;
    VAR_23 += FUNC_3(VAR_18->rcd[VAR_24],
           &VAR_18->cspec->lli_counter,
           ((void*)0));
   }
   VAR_22 <<= 1;
  }
  if (VAR_23) {
   u32 VAR_25 = VAR_18->cspec->lli_counter;
   VAR_25 += VAR_23;
   if (VAR_25) {
    if (VAR_25 > VAR_18->cspec->lli_thresh) {
     VAR_18->cspec->lli_counter = 0;
     VAR_18->cspec->lli_errs++;
    } else
     VAR_18->cspec->lli_counter += VAR_25;
   }
  }


  if (VAR_21) {
   VAR_21 =
    (VAR_21 >> VAR_9) |
    (VAR_21 >> VAR_11);
   FUNC_1(VAR_18, VAR_21);
  }
 }

 if ((VAR_20 & VAR_12) && (VAR_18->flags & VAR_3))
  FUNC_2(VAR_18);

 VAR_19 = VAR_0;
bail:
 return VAR_19;
}
