
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mfp_pin {unsigned long mfpr_run; unsigned long mfpr_lpm; unsigned long config; } ;


 int FUNC_0 (int) ;
 unsigned long FUNC_1 (int) ;
 unsigned long FUNC_2 (int) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (unsigned long) ;
 int FUNC_6 (unsigned long) ;
 int FUNC_7 (unsigned long) ;
 int VAR_0 ;
 int FUNC_8 (unsigned long) ;
 int VAR_1 ;
 int FUNC_9 (struct mfp_pin*) ;
 scalar_t__ FUNC_10 (int) ;
 int VAR_2 ;
 struct mfp_pin* VAR_3 ;
 unsigned long* VAR_4 ;
 unsigned long* VAR_5 ;
 unsigned long* VAR_6 ;
 int FUNC_11 () ;
 int FUNC_12 (int *,unsigned long) ;
 int FUNC_13 (int *,unsigned long) ;

void FUNC_14(unsigned long *VAR_7, int VAR_8)
{
 unsigned long VAR_9;
 int VAR_10;

 FUNC_12(&VAR_2, VAR_9);

 for (VAR_10 = 0; VAR_10 < VAR_8; VAR_10++, VAR_7++) {
  unsigned long VAR_11, VAR_12 = *VAR_7;
  struct mfp_pin *VAR_13;
  int VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19;

  VAR_14 = FUNC_7(VAR_12);
  FUNC_0(VAR_14 >= VAR_0);
  VAR_13 = &VAR_3[VAR_14];

  VAR_15 = FUNC_3(VAR_12);
  VAR_16 = FUNC_4(VAR_12);
  VAR_17 = FUNC_6(VAR_12);
  VAR_18 = FUNC_5(VAR_12);
  VAR_19 = FUNC_8(VAR_12);





  VAR_11 = FUNC_1(VAR_15) | FUNC_2(VAR_16);

  if (FUNC_10(VAR_19 == VAR_1)) {
   VAR_13->mfpr_run = VAR_11 | VAR_5[VAR_17] | VAR_4[VAR_18];
   VAR_13->mfpr_lpm = VAR_13->mfpr_run;
  } else {
   VAR_13->mfpr_lpm = VAR_11 | VAR_5[VAR_17] | VAR_4[VAR_18];
   VAR_13->mfpr_run = VAR_11 | VAR_6[VAR_19];
  }

  VAR_13->config = VAR_12; FUNC_9(VAR_13);
 }

 FUNC_11();
 FUNC_13(&VAR_2, VAR_9);
}
