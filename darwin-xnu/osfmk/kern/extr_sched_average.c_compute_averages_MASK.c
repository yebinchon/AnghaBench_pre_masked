
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint64_t ;
typedef size_t uint32_t ;
typedef TYPE_1__* sched_average_t ;
struct TYPE_3__ {size_t deadline; size_t period; int param; int (* comp ) (int ) ;} ;


 size_t VAR_0 ;
 size_t FUNC_0 (size_t,int ) ;
 size_t FUNC_1 (int ) ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t* VAR_5 ;
 size_t* VAR_6 ;
 size_t FUNC_2 () ;
 size_t* VAR_7 ;
 size_t VAR_8 ;
 TYPE_1__* VAR_9 ;
 scalar_t__ VAR_10 ;
 int * VAR_11 ;
 int VAR_12 ;
 scalar_t__* VAR_13 ;
 int VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 scalar_t__* VAR_17 ;
 size_t* VAR_18 ;
 int FUNC_3 (int ) ;

void
FUNC_4(uint64_t VAR_19)
{

 uint32_t VAR_20 = VAR_18[VAR_2] - 1;
 uint32_t VAR_21 = VAR_8;


 for (uint32_t VAR_22 = VAR_4; VAR_22 <= VAR_3 ; VAR_22++) {
  uint32_t VAR_23 = FUNC_1(VAR_11[VAR_22]);
  VAR_17[VAR_22] = VAR_10 - VAR_13[VAR_23];
 }




 VAR_15 = VAR_20;





 uint32_t VAR_24 = VAR_20 * VAR_0;
 uint32_t VAR_25;

 if (VAR_20 > VAR_21)
  VAR_25 = (VAR_21 * VAR_0) / (VAR_20 + 1);
 else
  VAR_25 = (VAR_21 - VAR_20) * VAR_0;






 for (uint32_t VAR_26 = 0; VAR_26 < VAR_19; VAR_26++) {
  VAR_14 = ((VAR_14 << 2) + VAR_25) / 5;
  VAR_12 = ((VAR_12 << 2) + VAR_24) / 5;
 }




 for (uint32_t VAR_27 = 0; VAR_27 < VAR_19; VAR_27++) {
  for (uint32_t VAR_28 = 0; VAR_28 < 3; VAR_28++) {
   VAR_7[VAR_28] = ((VAR_7[VAR_28] * VAR_6[VAR_28]) +
      (VAR_25 * (VAR_0 - VAR_6[VAR_28]))) / VAR_0;

   VAR_5[VAR_28] = ((VAR_5[VAR_28] * VAR_6[VAR_28]) +
      (VAR_24 * (VAR_0 - VAR_6[VAR_28]))) / VAR_0;
  }
 }




 uint64_t VAR_29 = FUNC_2();

 for (sched_average_t VAR_30 = VAR_9; VAR_30->comp != ((void*)0); ++VAR_30) {
  if (VAR_29 >= VAR_30->deadline) {
   uint64_t VAR_31 = (VAR_30->period * VAR_16);
   uint64_t VAR_32 = 1;

   VAR_32 += (VAR_29 - VAR_30->deadline) / VAR_31;
   VAR_32 = FUNC_0(VAR_32, VAR_1);

   for (uint32_t VAR_33 = 0; VAR_33 < VAR_32; VAR_33++) {
    (*VAR_30->comp)(VAR_30->param);
   }
   VAR_30->deadline = VAR_29 + VAR_31;
  }
 }
}
