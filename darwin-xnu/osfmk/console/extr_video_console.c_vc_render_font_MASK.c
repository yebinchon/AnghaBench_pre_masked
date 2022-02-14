
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int spl_t ;


 scalar_t__ VAR_0 ;
 short VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 short VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (unsigned int) ;
 int FUNC_3 (unsigned char*,unsigned int) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int,unsigned char*,short) ;
 int VAR_5 ;
 unsigned char* VAR_6 ;
 unsigned int VAR_7 ;
 scalar_t__ VAR_8 ;

__attribute__((used)) static void
FUNC_7(short VAR_9)
{
 static short VAR_10 = 0;

 int VAR_11;
 unsigned char *VAR_12;
 unsigned int VAR_13;
 int VAR_14;
 spl_t VAR_15;

 if (VAR_8 == VAR_0) {
  return;
 }
 if (VAR_10 == VAR_9 && VAR_6) {
  return;
 }

 VAR_15 = FUNC_4();
 FUNC_0();

 VAR_12 = VAR_6;
 VAR_13 = VAR_7;
 VAR_14 = VAR_5;

 VAR_6 = ((void*)0);
 VAR_7 = 0;
 VAR_5 = 0;

 FUNC_1();
 FUNC_5(VAR_15);

 if (VAR_12) {
  FUNC_3(VAR_12, VAR_13);
  VAR_12 = ((void*)0);
 }

 if (VAR_9) {
  VAR_14 = VAR_1 * (((VAR_9 + 7) / 8) * VAR_4);
  VAR_13 = (VAR_2-VAR_3+1) * VAR_14;
  VAR_12 = (unsigned char *) FUNC_2(VAR_13);
 }

 if (VAR_12 == ((void*)0)) {
  return;
 }

 for (VAR_11 = VAR_3; VAR_11 <= VAR_2; VAR_11++) {
  FUNC_6(VAR_11, VAR_12 + (VAR_11 * VAR_14), VAR_9);
 }

 VAR_10 = VAR_9;

 VAR_15 = FUNC_4();
 FUNC_0();

 VAR_6 = VAR_12;
 VAR_7 = VAR_13;
 VAR_5 = VAR_14;

 FUNC_1();
 FUNC_5(VAR_15);
}
