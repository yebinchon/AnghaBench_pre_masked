
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Window ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int* VAR_10 ;
 scalar_t__ FUNC_0 (int ,int ,int *,int *,int*,int*,int*,int*,unsigned int*) ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;

void FUNC_1(void)
{
 static int VAR_15 = 0;
 static int VAR_16 = 0;
 Window VAR_17;
 Window VAR_18;
 int VAR_19;
 int VAR_20;
 int VAR_21;
 int VAR_22;
 unsigned int VAR_23;

 if (VAR_8 == VAR_3)
  return;
 if (FUNC_0(VAR_11, VAR_12, &VAR_17,
       &VAR_18, &VAR_19, &VAR_20,
       &VAR_21, &VAR_22, &VAR_23)) {
  if(VAR_4) {
   int VAR_24 = VAR_21, VAR_25 = VAR_22;
   if(VAR_24 < 0) VAR_24 = 0;
   if(VAR_25 < 0) VAR_25 = 0;
   VAR_24 = (double)VAR_24 * (228.0 / (double)VAR_14);
   VAR_25 = (double)VAR_25 * (228.0 / (double)VAR_13);
   if(VAR_24 > 227) VAR_24 = 227;
   if(VAR_25 > 227) VAR_25 = 227;
   VAR_10[VAR_9 << 1] = 227 - VAR_24;
   VAR_10[(VAR_9 << 1) + 1] = 227 - VAR_25;
  } else {
   VAR_6 = VAR_21 - VAR_15;
   VAR_7 = VAR_22 - VAR_16;
   VAR_15 = VAR_21;
   VAR_16 = VAR_22;
  }

  VAR_5 = (VAR_23 & VAR_0 ? 1 : 0)
                | (VAR_23 & VAR_2 ? 2 : 0)
                | (VAR_23 & VAR_1 ? 4 : 0);
 }
}
