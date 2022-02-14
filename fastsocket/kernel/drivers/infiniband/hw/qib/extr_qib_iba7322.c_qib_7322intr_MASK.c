
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned long long u64 ;
typedef scalar_t__ u32 ;
struct qib_devdata {int flags; scalar_t__ int_counter; unsigned int first_user_ctxt; scalar_t__* rcd; TYPE_1__* cspec; } ;
typedef int irqreturn_t ;
struct TYPE_4__ {int sps_ints; } ;
struct TYPE_3__ {unsigned long long main_int_mask; } ;


 int VAR_0 ;
 unsigned long long FUNC_0 (int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned long long VAR_5 ;
 unsigned long long VAR_6 ;
 unsigned long long VAR_7 ;
 unsigned long long FUNC_1 (int) ;
 unsigned long long VAR_8 ;
 unsigned long long VAR_9 ;
 unsigned long long VAR_10 ;
 unsigned long long VAR_11 ;
 unsigned long long VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_2 (struct qib_devdata*) ;
 int FUNC_3 (struct qib_devdata*,char*) ;
 int FUNC_4 (struct qib_devdata*,unsigned long long) ;
 int FUNC_5 (struct qib_devdata*) ;
 int FUNC_6 (scalar_t__,int *,scalar_t__*) ;
 unsigned long long FUNC_7 (struct qib_devdata*,int ) ;
 TYPE_2__ VAR_16 ;
 int FUNC_8 (struct qib_devdata*,int ,unsigned long long) ;
 int FUNC_9 (struct qib_devdata*,unsigned long long) ;
 scalar_t__ FUNC_10 (unsigned long long) ;
 int FUNC_11 (struct qib_devdata*,unsigned long long) ;

__attribute__((used)) static irqreturn_t FUNC_12(int VAR_17, void *VAR_18)
{
 struct qib_devdata *VAR_19 = VAR_18;
 irqreturn_t VAR_20;
 u64 VAR_21;
 u64 VAR_22;
 u64 VAR_23;
 unsigned VAR_24;
 u32 VAR_25;

 if ((VAR_19->flags & (VAR_13 | VAR_3)) != VAR_13) {






  VAR_20 = VAR_1;
  goto bail;
 }

 VAR_21 = FUNC_7(VAR_19, VAR_15);

 if (FUNC_10(VAR_21 == ~0ULL)) {
  FUNC_2(VAR_19);
  FUNC_3(VAR_19, "Interrupt status all f's, skipping\n");

  VAR_20 = VAR_2;
  goto bail;
 }

 VAR_21 &= VAR_19->cspec->main_int_mask;
 if (FUNC_10(!VAR_21)) {

  VAR_20 = VAR_2;
  goto bail;
 }

 VAR_16.sps_ints++;
 if (VAR_19->int_counter != (u32) -1)
  VAR_19->int_counter++;


 if (FUNC_10(VAR_21 & (~VAR_5 | VAR_7 |
         VAR_6 | FUNC_0(VAR_0, 0) |
         FUNC_0(VAR_0, 1))))
  FUNC_11(VAR_19, VAR_21);







 FUNC_8(VAR_19, VAR_14, VAR_21);






 VAR_22 = VAR_21 & (VAR_9 | VAR_11);
 if (VAR_22) {
  VAR_23 = (1ULL << VAR_8) |
   (1ULL << VAR_10);
  for (VAR_24 = 0; VAR_24 < VAR_19->first_user_ctxt; VAR_24++) {
   if (VAR_22 & VAR_23) {
    VAR_22 &= ~VAR_23;
    if (VAR_19->rcd[VAR_24])
     FUNC_6(VAR_19->rcd[VAR_24], ((void*)0), &VAR_25);
   }
   VAR_23 <<= 1;
  }
  if (VAR_22) {
   VAR_22 = (VAR_22 >> VAR_8) |
    (VAR_22 >> VAR_10);
   FUNC_4(VAR_19, VAR_22);
  }
 }

 if (VAR_21 & (FUNC_1(0) | FUNC_1(1)))
  FUNC_9(VAR_19, VAR_21);

 if ((VAR_21 & VAR_12) && (VAR_19->flags & VAR_4))
  FUNC_5(VAR_19);

 VAR_20 = VAR_1;
bail:
 return VAR_20;
}
