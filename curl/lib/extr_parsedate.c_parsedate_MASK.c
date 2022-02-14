
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct my_tm {int tm_sec; int tm_min; int tm_hour; int tm_mday; int tm_mon; int tm_year; } ;
typedef enum assume { ____Placeholder_assume } assume ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (char const) ;
 scalar_t__ FUNC_1 (char const) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (char*,size_t) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (long) ;
 int VAR_12 ;
 int FUNC_6 (struct my_tm*,int*) ;
 int FUNC_7 (char const**) ;
 int FUNC_8 (char const*,char*,...) ;
 size_t FUNC_9 (char*) ;
 long FUNC_10 (char const*,char**,int) ;

__attribute__((used)) static int FUNC_11(const char *VAR_13, time_t *VAR_14)
{
  time_t VAR_15 = 0;
  int VAR_16 = -1;
  int VAR_17 = -1;
  int VAR_18 = -1;
  int VAR_19 = -1;
  int VAR_20 = -1;
  int VAR_21 = -1;
  int VAR_22 = -1;
  int VAR_23 = -1;
  struct my_tm VAR_24;
  enum assume VAR_25 = VAR_0;
  const char *VAR_26 = VAR_13;
  int VAR_27 = 0;

  while(*VAR_13 && (VAR_27 < 6)) {
    bool VAR_28 = VAR_2;

    FUNC_7(&VAR_13);

    if(FUNC_0(*VAR_13)) {

      char VAR_29[32]="";
      size_t VAR_30;
      if(FUNC_8(VAR_13, "%31[ABCDEFGHIJKLMNOPQRSTUVWXYZ"
                          "abcdefghijklmnopqrstuvwxyz]", VAR_29))
        VAR_30 = FUNC_9(VAR_29);
      else
        VAR_30 = 0;

      if(VAR_16 == -1) {
        VAR_16 = FUNC_2(VAR_29, VAR_30);
        if(VAR_16 != -1)
          VAR_28 = VAR_11;
      }
      if(!VAR_28 && (VAR_17 == -1)) {
        VAR_17 = FUNC_3(VAR_29);
        if(VAR_17 != -1)
          VAR_28 = VAR_11;
      }

      if(!VAR_28 && (VAR_23 == -1)) {

        VAR_23 = FUNC_4(VAR_29);
        if(VAR_23 != -1)
          VAR_28 = VAR_11;
      }

      if(!VAR_28)
        return VAR_5;

      VAR_13 += VAR_30;
    }
    else if(FUNC_1(*VAR_13)) {

      int VAR_31;
      char *VAR_32;
      int VAR_33 = 0;
      if((VAR_21 == -1) &&
         (3 == FUNC_8(VAR_13, "%02d:%02d:%02d%n",
                      &VAR_19, &VAR_20, &VAR_21, &VAR_33))) {

        VAR_13 += VAR_33;
      }
      else if((VAR_21 == -1) &&
              (2 == FUNC_8(VAR_13, "%02d:%02d%n", &VAR_19, &VAR_20, &VAR_33))) {

        VAR_13 += VAR_33;
        VAR_21 = 0;
      }
      else {
        long VAR_34;
        int VAR_35;
        int VAR_36;

        VAR_36 = VAR_12;
        VAR_12 = 0;
        VAR_34 = FUNC_10(VAR_13, &VAR_32, 10);
        VAR_35 = VAR_12;
        if(VAR_12 != VAR_36)
          VAR_12 = VAR_36;

        if(VAR_35)
          return VAR_5;






        VAR_31 = FUNC_5(VAR_34);

        if((VAR_23 == -1) &&
           ((VAR_32 - VAR_13) == 4) &&
           (VAR_31 <= 1400) &&
           (VAR_26< VAR_13) &&
           ((VAR_13[-1] == '+' || VAR_13[-1] == '-'))) {
          VAR_28 = VAR_11;
          VAR_23 = (VAR_31/100 * 60 + VAR_31%100)*60;



          VAR_23 = VAR_13[-1]=='+'?-VAR_23:VAR_23;
        }

        if(((VAR_32 - VAR_13) == 8) &&
           (VAR_22 == -1) &&
           (VAR_17 == -1) &&
           (VAR_18 == -1)) {

          VAR_28 = VAR_11;
          VAR_22 = VAR_31/10000;
          VAR_17 = (VAR_31%10000)/100-1;
          VAR_18 = VAR_31%100;
        }

        if(!VAR_28 && (VAR_25 == VAR_0) && (VAR_18 == -1)) {
          if((VAR_31 > 0) && (VAR_31<32)) {
            VAR_18 = VAR_31;
            VAR_28 = VAR_11;
          }
          VAR_25 = VAR_1;
        }

        if(!VAR_28 && (VAR_25 == VAR_1) && (VAR_22 == -1)) {
          VAR_22 = VAR_31;
          VAR_28 = VAR_11;
          if(VAR_22 < 100) {
            if(VAR_22 > 70)
              VAR_22 += 1900;
            else
              VAR_22 += 2000;
          }
          if(VAR_18 == -1)
            VAR_25 = VAR_0;
        }

        if(!VAR_28)
          return VAR_5;

        VAR_13 = VAR_32;
      }
    }

    VAR_27++;
  }

  if(-1 == VAR_21)
    VAR_21 = VAR_20 = VAR_19 = 0;

  if((-1 == VAR_18) ||
     (-1 == VAR_17) ||
     (-1 == VAR_22))

    return VAR_5;
  if(VAR_22 > 2037) {
    *VAR_14 = VAR_9;
    return VAR_6;
  }
  if(VAR_22 < 1903) {
    *VAR_14 = VAR_10;
    return VAR_8;
  }
  if((VAR_18 > 31) || (VAR_17 > 11) ||
     (VAR_19 > 23) || (VAR_20 > 59) || (VAR_21 > 60))
    return VAR_5;

  VAR_24.tm_sec = VAR_21;
  VAR_24.tm_min = VAR_20;
  VAR_24.tm_hour = VAR_19;
  VAR_24.tm_mday = VAR_18;
  VAR_24.tm_mon = VAR_17;
  VAR_24.tm_year = VAR_22;





  FUNC_6(&VAR_24, &VAR_15);


  if(VAR_23 == -1)
    VAR_23 = 0;

  if((VAR_23 > 0) && (VAR_15 > VAR_9 - VAR_23)) {
    *VAR_14 = VAR_9;
    return VAR_6;
  }

  VAR_15 += VAR_23;

  *VAR_14 = VAR_15;

  return VAR_7;
}
