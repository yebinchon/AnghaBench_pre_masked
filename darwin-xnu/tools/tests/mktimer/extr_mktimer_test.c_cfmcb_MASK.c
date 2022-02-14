
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef double uint64_t ;
typedef int CFMachPortRef ;
typedef int CFIndex ;


 int VAR_0 ;
 double VAR_1 ;
 double VAR_2 ;
 double VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 double FUNC_0 () ;
 double VAR_6 ;
 double VAR_7 ;
 int FUNC_1 (int ,double) ;
 int FUNC_2 (int ,int ,double,int ) ;
 int FUNC_3 (char*,double,double,double) ;
 int VAR_8 ;
 int VAR_9 ;
 double VAR_10 ;
 scalar_t__ VAR_11 ;

void FUNC_4(CFMachPortRef VAR_12, void *VAR_13, CFIndex VAR_14, void *VAR_15) {
 uint64_t VAR_16 = FUNC_0();
 uint64_t VAR_17 = 0;

 if (VAR_2) {
  VAR_17 = (VAR_16 - VAR_2);
  if (VAR_17 > VAR_6) {
   VAR_6 = VAR_17;
  }

  if (VAR_17 < VAR_7) {
   VAR_7 = VAR_17;
  }

  VAR_10 += VAR_17;
  if ((++VAR_4 % VAR_8) == 0) {
   FUNC_3("max_jitter: %g (ns), min_jitter: %g (ns), average_jitter: %g (ns)\n", VAR_6 * VAR_1, VAR_7 * VAR_1, ((double)VAR_10/(double)VAR_4) * VAR_1);
   VAR_6 = 0; VAR_7 = ~0ULL; VAR_4 = 0; VAR_10 = 0;
  }
 }

 VAR_2 = FUNC_0() + VAR_3;

 if (VAR_11) {
  FUNC_2(VAR_9, VAR_0, VAR_2, VAR_5);
 } else {
  FUNC_1(VAR_9, VAR_2);
 }
}
