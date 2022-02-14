
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kperf_timer {int tcall; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct kperf_timer*,struct kperf_timer*,unsigned int) ;
 int FUNC_2 (struct kperf_timer*,unsigned int) ;
 struct kperf_timer* FUNC_3 (unsigned int,int ) ;
 int FUNC_4 (struct kperf_timer*,unsigned int) ;
 int FUNC_5 () ;
 int VAR_8 ;
 int FUNC_6 () ;
 unsigned int VAR_9 ;
 struct kperf_timer* VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_7 (int ,scalar_t__*) ;
 int FUNC_8 (int *,int ,struct kperf_timer*) ;

extern int
FUNC_9(unsigned int VAR_15)
{
 struct kperf_timer *VAR_16 = ((void*)0), *VAR_17 = ((void*)0);
 unsigned int VAR_18;

 if (VAR_11 == 0) {
  FUNC_7(VAR_3, &VAR_11);
  FUNC_7(VAR_2, &VAR_12);
  FUNC_7(VAR_5, &VAR_13);
  FUNC_7(VAR_4,
   &VAR_14);
  FUNC_0(VAR_11 > 0);
 }

 if (VAR_15 == VAR_9) {
  return 0;
 }
 if (VAR_15 > VAR_6) {
  return VAR_0;
 }


 if (VAR_15 < VAR_9) {
  return VAR_0;
 }





 if (VAR_9 == 0) {
  int VAR_19;


  if ((VAR_19 = FUNC_5())) {
   return VAR_19;
  }
 }





 FUNC_6();


 VAR_16 = FUNC_3(VAR_15 * sizeof(struct kperf_timer),
  VAR_7);
 if (VAR_16 == ((void*)0)) {
  return VAR_1;
 }
 VAR_17 = VAR_10;
 VAR_18 = VAR_9;

 if (VAR_17 != ((void*)0)) {
  FUNC_1(VAR_10, VAR_16,
   VAR_9 * sizeof(struct kperf_timer));
 }


 FUNC_2(&(VAR_16[VAR_9]),
  (VAR_15 - VAR_18) * sizeof(struct kperf_timer));


 for (unsigned int VAR_20 = 0; VAR_20 < VAR_15; VAR_20++) {
  FUNC_8(&VAR_16[VAR_20].tcall, VAR_8, &VAR_16[VAR_20]);
 }

 VAR_10 = VAR_16;
 VAR_9 = VAR_15;

 if (VAR_17 != ((void*)0)) {
  FUNC_4(VAR_17, VAR_18 * sizeof(struct kperf_timer));
 }

 return 0;
}
