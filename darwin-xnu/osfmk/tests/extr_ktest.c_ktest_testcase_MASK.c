
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 char* VAR_5 ;
 char* VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 char** VAR_9 ;
 char** VAR_10 ;
 int FUNC_0 () ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 char* VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int FUNC_1 () ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_2 () ;

void
FUNC_3(int VAR_20)
{
 VAR_7 = FUNC_2();

 if(VAR_20 && !VAR_11) {

  VAR_15++;
  VAR_17 = VAR_2;
 } else if(!VAR_20 && !VAR_11) {

  VAR_13++;
  VAR_17 = VAR_1;
 } else if(VAR_20 && VAR_11) {

  VAR_19++;
  VAR_17 = VAR_3;
 } else if(!VAR_20 && VAR_11) {

  VAR_18++;
  VAR_17 = VAR_4;
 }

 FUNC_1();
 if(VAR_16 == 0 ||
    VAR_17 == VAR_1 ||
    VAR_17 == VAR_3) {
  FUNC_0();
 }
 VAR_12++;

 VAR_16 = 0;
 VAR_11 = 0;
 VAR_14[0] = '\0';
 VAR_6[0] = '\0';
 VAR_5[0] = '\0';
 for(int VAR_21 = 0; VAR_21 < VAR_0; VAR_21++) {
  VAR_9[VAR_21][0] = '\0';
  VAR_10[VAR_21][0] = '\0';
 }
 VAR_8 = 0;
}
