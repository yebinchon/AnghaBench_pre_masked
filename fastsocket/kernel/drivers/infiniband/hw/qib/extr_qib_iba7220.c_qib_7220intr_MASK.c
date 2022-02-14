
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef scalar_t__ u32 ;
struct qib_devdata {int flags; scalar_t__ int_counter; unsigned int first_user_ctxt; int pport; int * rcd; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int sps_ints; } ;


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
 int VAR_15 ;
 int FUNC_0 (struct qib_devdata*) ;
 int FUNC_1 (struct qib_devdata*,int) ;
 int FUNC_2 (struct qib_devdata*) ;
 int FUNC_3 (int ,int *,int *) ;
 int FUNC_4 (struct qib_devdata*,int ) ;
 TYPE_1__ VAR_16 ;
 int FUNC_5 (struct qib_devdata*,int ,int) ;
 int FUNC_6 (int ,int) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (struct qib_devdata*,int) ;

__attribute__((used)) static irqreturn_t FUNC_9(int VAR_17, void *VAR_18)
{
 struct qib_devdata *VAR_19 = VAR_18;
 irqreturn_t VAR_20;
 u64 VAR_21;
 u64 VAR_22;
 u64 VAR_23;
 unsigned VAR_24;

 if ((VAR_19->flags & (VAR_4 | VAR_2)) != VAR_4) {






  VAR_20 = VAR_0;
  goto bail;
 }

 VAR_21 = FUNC_4(VAR_19, VAR_15);

 if (FUNC_7(!VAR_21)) {
  VAR_20 = VAR_1;
  goto bail;
 }
 if (FUNC_7(VAR_21 == -1)) {
  FUNC_0(VAR_19);

  VAR_20 = VAR_1;
  goto bail;
 }

 VAR_16.sps_ints++;
 if (VAR_19->int_counter != (u32) -1)
  VAR_19->int_counter++;

 if (FUNC_7(VAR_21 & (~VAR_5 |
         VAR_7 | VAR_6)))
  FUNC_8(VAR_19, VAR_21);







 FUNC_5(VAR_19, VAR_14, VAR_21);






 VAR_22 = VAR_21 &
  ((VAR_8 << VAR_9) |
   (VAR_10 << VAR_11));
 if (VAR_22) {
  VAR_23 = (1ULL << VAR_9) |
   (1ULL << VAR_11);
  for (VAR_24 = 0; VAR_24 < VAR_19->first_user_ctxt; VAR_24++) {
   if (VAR_22 & VAR_23) {
    VAR_22 &= ~VAR_23;
    FUNC_3(VAR_19->rcd[VAR_24], ((void*)0), ((void*)0));
   }
   VAR_23 <<= 1;
  }
  if (VAR_22) {
   VAR_22 =
    (VAR_22 >> VAR_9) |
    (VAR_22 >> VAR_11);
   FUNC_1(VAR_19, VAR_22);
  }
 }


 if (VAR_21 & VAR_12)
  FUNC_6(VAR_19->pport, VAR_21);

 if ((VAR_21 & VAR_13) && (VAR_19->flags & VAR_3))
  FUNC_2(VAR_19);

 VAR_20 = VAR_0;
bail:
 return VAR_20;
}
