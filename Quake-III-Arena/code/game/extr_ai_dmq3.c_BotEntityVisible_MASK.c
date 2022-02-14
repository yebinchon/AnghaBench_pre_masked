
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__* vec3_t ;
struct TYPE_5__ {int contents; int fraction; int ent; scalar_t__* endpos; } ;
typedef TYPE_1__ bsp_trace_t ;
struct TYPE_6__ {scalar_t__* mins; scalar_t__* maxs; scalar_t__* origin; } ;
typedef TYPE_2__ aas_entityinfo_t ;


 int FUNC_0 (TYPE_1__*,scalar_t__*,int *,int *,scalar_t__*,int,int) ;
 int FUNC_1 (int,TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (scalar_t__*,float,scalar_t__*) ;
 int FUNC_3 (scalar_t__*,scalar_t__*,scalar_t__*) ;
 int FUNC_4 (scalar_t__*,scalar_t__*) ;
 float FUNC_5 (scalar_t__*) ;
 int FUNC_6 (scalar_t__*,double,scalar_t__*) ;
 int FUNC_7 (scalar_t__*,scalar_t__*,scalar_t__*) ;
 int FUNC_8 (scalar_t__*) ;
 int FUNC_9 (scalar_t__*,scalar_t__*) ;

float FUNC_10(int VAR_6, vec3_t VAR_7, vec3_t VAR_8, float VAR_9, int VAR_10) {
 int VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18;
 float VAR_19, VAR_20, VAR_21, VAR_22;
 bsp_trace_t VAR_23;
 aas_entityinfo_t VAR_24;
 vec3_t VAR_25, VAR_26, VAR_27, VAR_28, VAR_29;


 FUNC_1(VAR_10, &VAR_24);
 FUNC_3(VAR_24.mins, VAR_24.maxs, VAR_29);
 FUNC_6(VAR_29, 0.5, VAR_29);
 FUNC_3(VAR_24.origin, VAR_29, VAR_29);

 FUNC_7(VAR_29, VAR_7, VAR_25);
 FUNC_9(VAR_25, VAR_26);
 if (!FUNC_2(VAR_8, VAR_9, VAR_26)) return 0;

 VAR_18 = FUNC_8(VAR_7);
 VAR_15 = (VAR_18 & VAR_0);
 VAR_16 = (VAR_18 & (VAR_1|VAR_3|VAR_5));

 VAR_22 = 0;
 for (VAR_11 = 0; VAR_11 < 3; VAR_11++) {



  VAR_12 = VAR_4|VAR_2;
  VAR_13 = VAR_6;
  VAR_14 = VAR_10;
  FUNC_4(VAR_7, VAR_27);
  FUNC_4(VAR_29, VAR_28);

  if (FUNC_8(VAR_29) & (VAR_1|VAR_3|VAR_5)) {
   VAR_12 |= (VAR_1|VAR_3|VAR_5);
  }

  if (VAR_16) {
   if (!(VAR_12 & (VAR_1|VAR_3|VAR_5))) {
    VAR_13 = VAR_10;
    VAR_14 = VAR_6;
    FUNC_4(VAR_29, VAR_27);
    FUNC_4(VAR_7, VAR_28);
   }
   VAR_12 ^= (VAR_1|VAR_3|VAR_5);
  }

  FUNC_0(&VAR_23, VAR_27, ((void*)0), ((void*)0), VAR_28, VAR_13, VAR_12);

  VAR_20 = 1.0;
  if (VAR_23.contents & (VAR_1|VAR_3|VAR_5)) {

   if (1) {

    VAR_12 &= ~(VAR_1|VAR_3|VAR_5);
    FUNC_0(&VAR_23, VAR_23.endpos, ((void*)0), ((void*)0), VAR_28, VAR_13, VAR_12);
    VAR_20 = 0.5;
   }
  }

  if (VAR_23.fraction >= 1 || VAR_23.ent == VAR_14) {


   VAR_17 = (FUNC_8(VAR_29) & VAR_0);
   if (VAR_15 && VAR_17) {
    FUNC_7(VAR_23.endpos, VAR_7, VAR_25);
    VAR_19 = FUNC_5(VAR_25);
   }
   else if (VAR_15) {
    FUNC_4(VAR_23.endpos, VAR_27);
    FUNC_0(&VAR_23, VAR_27, ((void*)0), ((void*)0), VAR_7, VAR_6, VAR_0);
    FUNC_7(VAR_7, VAR_23.endpos, VAR_25);
    VAR_19 = FUNC_5(VAR_25);
   }
   else if (VAR_17) {
    FUNC_4(VAR_23.endpos, VAR_28);
    FUNC_0(&VAR_23, VAR_7, ((void*)0), ((void*)0), VAR_28, VAR_6, VAR_0);
    FUNC_7(VAR_28, VAR_23.endpos, VAR_25);
    VAR_19 = FUNC_5(VAR_25);
   }
   else {

    VAR_19 = 0;
   }

   VAR_21 = 1 / ((VAR_19 * 0.001) < 1 ? 1 : (VAR_19 * 0.001));

   VAR_21 *= VAR_20;

   if (VAR_21 > VAR_22) VAR_22 = VAR_21;

   if (VAR_22 >= 0.95) return VAR_22;
  }

  if (VAR_11 == 0) VAR_29[2] += VAR_24.mins[2];
  else if (VAR_11 == 1) VAR_29[2] += VAR_24.maxs[2] - VAR_24.mins[2];
 }
 return VAR_22;
}
