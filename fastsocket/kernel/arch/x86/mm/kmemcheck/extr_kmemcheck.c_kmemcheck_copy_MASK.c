
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct pt_regs {int dummy; } ;
typedef int shadow ;
typedef enum kmemcheck_shadow { ____Placeholder_kmemcheck_shadow } kmemcheck_shadow ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,unsigned long,unsigned int,struct pt_regs*) ;
 int FUNC_2 (unsigned long) ;
 int* FUNC_3 (unsigned long) ;
 int FUNC_4 (int*,unsigned int) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(struct pt_regs *VAR_3,
 unsigned long VAR_4, unsigned long VAR_5, unsigned int VAR_6)
{
 uint8_t VAR_7[8];
 enum kmemcheck_shadow VAR_8;

 unsigned long VAR_9;
 unsigned long VAR_10;
 unsigned long VAR_11;

 uint8_t *VAR_12;
 unsigned int VAR_13;
 unsigned int VAR_14;

 FUNC_0(VAR_6 > sizeof(VAR_7));

 VAR_9 = VAR_4 & VAR_1;
 VAR_10 = VAR_4 + VAR_6 - 1;
 VAR_11 = VAR_10 & VAR_1;

 if (FUNC_5(VAR_9 == VAR_11)) {

  VAR_12 = FUNC_3(VAR_4);
  if (VAR_12) {
   FUNC_2(VAR_4);
   for (VAR_13 = 0; VAR_13 < VAR_6; ++VAR_13)
    VAR_7[VAR_13] = VAR_12[VAR_13];
  } else {
   for (VAR_13 = 0; VAR_13 < VAR_6; ++VAR_13)
    VAR_7[VAR_13] = VAR_0;
  }
 } else {
  VAR_14 = VAR_11 - VAR_4;
  FUNC_0(VAR_14 > sizeof(VAR_7));


  VAR_12 = FUNC_3(VAR_4);
  if (VAR_12) {
   FUNC_2(VAR_4);
   for (VAR_13 = 0; VAR_13 < VAR_14; ++VAR_13)
    VAR_7[VAR_13] = VAR_12[VAR_13];
  } else {

   for (VAR_13 = 0; VAR_13 < VAR_14; ++VAR_13)
    VAR_7[VAR_13] = VAR_0;
  }


  VAR_12 = FUNC_3(VAR_11);
  if (VAR_12) {
   FUNC_2(VAR_11);
   for (VAR_13 = VAR_14; VAR_13 < VAR_6; ++VAR_13)
    VAR_7[VAR_13] = VAR_12[VAR_13 - VAR_14];
  } else {

   for (VAR_13 = VAR_14; VAR_13 < VAR_6; ++VAR_13)
    VAR_7[VAR_13] = VAR_0;
  }
 }

 VAR_9 = VAR_5 & VAR_1;
 VAR_10 = VAR_5 + VAR_6 - 1;
 VAR_11 = VAR_10 & VAR_1;

 if (FUNC_5(VAR_9 == VAR_11)) {

  VAR_12 = FUNC_3(VAR_5);
  if (VAR_12) {
   FUNC_2(VAR_5);
   for (VAR_13 = 0; VAR_13 < VAR_6; ++VAR_13) {
    VAR_12[VAR_13] = VAR_7[VAR_13];
    VAR_7[VAR_13] = VAR_0;
   }
  }
 } else {
  VAR_14 = VAR_11 - VAR_5;
  FUNC_0(VAR_14 > sizeof(VAR_7));


  VAR_12 = FUNC_3(VAR_5);
  if (VAR_12) {
   FUNC_2(VAR_5);
   for (VAR_13 = 0; VAR_13 < VAR_14; ++VAR_13) {
    VAR_12[VAR_13] = VAR_7[VAR_13];
    VAR_7[VAR_13] = VAR_0;
   }
  }


  VAR_12 = FUNC_3(VAR_11);
  if (VAR_12) {
   FUNC_2(VAR_11);
   for (VAR_13 = VAR_14; VAR_13 < VAR_6; ++VAR_13) {
    VAR_12[VAR_13 - VAR_14] = VAR_7[VAR_13];
    VAR_7[VAR_13] = VAR_0;
   }
  }
 }

 VAR_8 = FUNC_4(VAR_7, VAR_6);
 if (VAR_8 == VAR_0)
  return;

 if (VAR_2)
  FUNC_1(VAR_8, VAR_4, VAR_6, VAR_3);

 if (VAR_2 == 2)
  VAR_2 = 0;
}
