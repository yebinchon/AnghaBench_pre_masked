
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ppnum_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_2 (int) ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_3 (int) ;
 int FUNC_4 () ;
 unsigned int* VAR_5 ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__,unsigned int) ;
 int FUNC_7 (scalar_t__) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;

void FUNC_8(ppnum_t VAR_8, unsigned int VAR_9) {
 unsigned int VAR_10, VAR_11 = 0;
 int VAR_12;

 if (VAR_9 & VAR_4) {
  if(!(VAR_9 & VAR_3))
   VAR_11 |= VAR_2;
  VAR_11 |= VAR_1;
 }

 FUNC_4();

 FUNC_3((VAR_8 != VAR_6) && (VAR_8 != VAR_7));

 VAR_12 = FUNC_7(VAR_8);

 if (!FUNC_0(VAR_12)) {
  return;
 }






 FUNC_1(VAR_12);

 FUNC_6(VAR_8, VAR_11);

 VAR_10 = VAR_5[VAR_12] & VAR_0;
 VAR_5[VAR_12] &= ~VAR_0;
 VAR_5[VAR_12] |= VAR_11;

 FUNC_2(VAR_12);

 if ((VAR_11 & VAR_1) && !(VAR_10 & VAR_1)) {
  FUNC_5(VAR_8);
 }
}
