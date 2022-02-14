
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (scalar_t__,scalar_t__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 () ;
 int FUNC_9 (int,char*,int) ;
 int FUNC_10 (char*,int,char*,...) ;
 int VAR_8 ;
 scalar_t__ FUNC_11 () ;

int
FUNC_12(
 int VAR_9, char *VAR_10, int VAR_11)
{
 int VAR_12;
 uint64_t VAR_13[VAR_3];
 uint64_t VAR_14[VAR_3];
 uint64_t VAR_15;
 uint64_t VAR_16;


 for (VAR_12 = 0; VAR_12 < VAR_7; VAR_12++) {
  FUNC_1(&VAR_8);
  FUNC_7(&VAR_8);
 }

 VAR_16 = FUNC_11();
 VAR_15 = FUNC_8();

 for (VAR_12 = 0; VAR_12 < VAR_9; VAR_12++) {
  FUNC_1(&VAR_8);
  FUNC_7(&VAR_8);
 }

 FUNC_0(FUNC_8() - VAR_15, &VAR_13[VAR_2]);
 FUNC_0(FUNC_11() - VAR_16, &VAR_14[VAR_2]);


 for (VAR_12 = 0; VAR_12 < VAR_7; VAR_12++) {
  FUNC_4(&VAR_8);
  FUNC_7(&VAR_8);
 }

 VAR_16 = FUNC_11();
 VAR_15 = FUNC_8();

 for (VAR_12 = 0; VAR_12 < VAR_9; VAR_12++) {
  FUNC_4(&VAR_8);
  FUNC_7(&VAR_8);
 }

 FUNC_0(FUNC_8() - VAR_15, &VAR_13[VAR_6]);
 FUNC_0(FUNC_11() - VAR_16, &VAR_14[VAR_6]);


 for (VAR_12 = 0; VAR_12 < VAR_7; VAR_12++) {
  FUNC_2(&VAR_8);
  FUNC_7(&VAR_8);
 }

 VAR_16 = FUNC_11();
 VAR_15 = FUNC_8();

 for (VAR_12 = 0; VAR_12 < VAR_9; VAR_12++) {
  FUNC_2(&VAR_8);
  FUNC_7(&VAR_8);
 }

 FUNC_0(FUNC_8() - VAR_15, &VAR_13[VAR_1]);
 FUNC_0(FUNC_11() - VAR_16, &VAR_14[VAR_1]);


 for (VAR_12 = 0; VAR_12 < VAR_7; VAR_12++) {
  FUNC_3(&VAR_8);
  FUNC_7(&VAR_8);
 }

 VAR_16 = FUNC_11();
 VAR_15 = FUNC_8();

 for (VAR_12 = 0; VAR_12 < VAR_9; VAR_12++) {
  FUNC_3(&VAR_8);
  FUNC_7(&VAR_8);
 }

 FUNC_0(FUNC_8() - VAR_15, &VAR_13[VAR_0]);
 FUNC_0(FUNC_11() - VAR_16, &VAR_14[VAR_0]);


 for (VAR_12 = 0; VAR_12 < VAR_7; VAR_12++) {
  FUNC_5(&VAR_8);
  FUNC_7(&VAR_8);
 }

 VAR_16 = FUNC_11();
 VAR_15 = FUNC_8();

 for (VAR_12 = 0; VAR_12 < VAR_9; VAR_12++) {
  FUNC_5(&VAR_8);
  FUNC_7(&VAR_8);
 }

 FUNC_0(FUNC_8() - VAR_15, &VAR_13[VAR_5]);
 FUNC_0(FUNC_11() - VAR_16, &VAR_14[VAR_5]);


 for (VAR_12 = 0; VAR_12 < VAR_7; VAR_12++) {
  FUNC_6(&VAR_8);
  FUNC_7(&VAR_8);
 }

 VAR_16 = FUNC_11();
 VAR_15 = FUNC_8();

 for (VAR_12 = 0; VAR_12 < VAR_9; VAR_12++) {
  FUNC_6(&VAR_8);
  FUNC_7(&VAR_8);
 }

 FUNC_0(FUNC_8() - VAR_15, &VAR_13[VAR_4]);
 FUNC_0(FUNC_11() - VAR_16, &VAR_14[VAR_4]);

 int VAR_17 = 0;
 int VAR_18 = 0;

 VAR_18 = FUNC_10(&VAR_10[VAR_17], VAR_11, "\n");
 VAR_11 -= VAR_18;
 VAR_17 += VAR_18;

 for (VAR_12 = 0; VAR_12 < VAR_3 - 2; VAR_12++) {

  VAR_18 = FUNC_10(&VAR_10[VAR_17], VAR_11, "total time %llu ns total run time %llu ns ", VAR_13[VAR_12], VAR_14[VAR_12]);
  VAR_11 -= VAR_18;
  VAR_17 += VAR_18;

  VAR_18 = FUNC_9(VAR_12, &VAR_10[VAR_17], VAR_11);
  VAR_11 -= VAR_18;
  VAR_17 += VAR_18;

  VAR_18 = FUNC_10(&VAR_10[VAR_17], VAR_11, "\n");
  VAR_11 -= VAR_18;
  VAR_17 += VAR_18;
 }

 return VAR_17;
}
