
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UBYTE ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int VAR_0 ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (int *) ;
 int * FUNC_7 (char const*,char const*) ;
 scalar_t__ FUNC_8 (int *,char*,int) ;
 int FUNC_9 () ;
 int FUNC_10 (char*,char const*) ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int FUNC_14 () ;
 int FUNC_15 () ;
 int FUNC_16 () ;
 int VAR_1 ;
 int FUNC_17 () ;
 int * VAR_2 ;
 int FUNC_18 (int*,int) ;
 int FUNC_19 (int *,int) ;
 int VAR_3 ;
 int FUNC_20 () ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

int FUNC_21(const char *VAR_6, const char *VAR_7, UBYTE VAR_8)
{
 UBYTE VAR_9 = VAR_1;

 if (VAR_2 != ((void*)0)) {
  FUNC_6(VAR_2);
  VAR_2 = ((void*)0);
 }
 VAR_5 = VAR_4;

 VAR_2 = FUNC_7(VAR_6, VAR_7);
 if (VAR_2 == ((void*)0)) {
  FUNC_10("Could not open %s for state save.", VAR_6);
  FUNC_9();
  return VAR_0;
 }
 if (FUNC_8(VAR_2, "ATARI800", 8) == 0) {
  FUNC_9();
  FUNC_6(VAR_2);
  VAR_2 = ((void*)0);
  return VAR_0;
 }

 FUNC_19(&VAR_9, 1);
 FUNC_19(&VAR_8, 1);


 FUNC_1();
 FUNC_2();
 FUNC_17();
 FUNC_0();
 FUNC_3(VAR_8);
 FUNC_5();
 FUNC_15();
 FUNC_16();



 {
  int VAR_10 = VAR_0;
  FUNC_18(&VAR_10, 1);
 }

 FUNC_13();



 {
  int VAR_11 = VAR_0;
  FUNC_18(&VAR_11, 1);
 }




 {
  int VAR_12 = VAR_0;
  FUNC_18(&VAR_12, 1);
 }




 {
  int VAR_13 = VAR_0;
  FUNC_18(&VAR_13, 1);
 }





 if (FUNC_6(VAR_2) != 0) {
  VAR_2 = ((void*)0);
  return VAR_0;
 }
 VAR_2 = ((void*)0);

 if (VAR_5 != VAR_4)
  return VAR_0;

 return VAR_3;
}
