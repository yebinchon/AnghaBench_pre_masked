
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (unsigned char*,int,int,int *) ;
 int FUNC_1 (int *,int,int ) ;
 int FUNC_2 (int *) ;
 int * VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (unsigned char*,int) ;
 int FUNC_4 (int *,int*,int) ;
 int FUNC_5 (int *,int) ;

void FUNC_6(void *VAR_9, int VAR_10)
{
 unsigned char VAR_11[2048];
 FILE *VAR_12 = VAR_9;
 int VAR_13;

 VAR_7 = VAR_8 = 0;
 VAR_6 = ((void*)0);
 VAR_4 = 0;
 VAR_5 = 0;

 if (!(VAR_1 & VAR_0) || VAR_12 == ((void*)0))
  return;

 FUNC_1(VAR_12, 0, VAR_2);
 VAR_7 = FUNC_2(VAR_12);


 while (VAR_8 < 128*1024) {
  int VAR_14, VAR_15;

  FUNC_1(VAR_12, VAR_8, VAR_3);
  VAR_15 = FUNC_0(VAR_11, 1, sizeof(VAR_11), VAR_12);
  if (VAR_15 < 4)
   break;
  VAR_14 = FUNC_3(VAR_11, VAR_15);
  if (VAR_14 >= 0) {
   VAR_8 += VAR_14;
   break;
  }
  VAR_8 += VAR_15 - 3;
 }


 if (VAR_10 != 0) {
  unsigned long long VAR_16 = VAR_7 - VAR_8;
  VAR_16 *= VAR_10;
  VAR_8 += VAR_16 >> 10;
 }

 VAR_13 = FUNC_5(VAR_12, VAR_8);
 if (VAR_13 != 0) {
  return;
 }

 VAR_6 = VAR_12;
 VAR_5 = 1;

 FUNC_4(VAR_6, &VAR_8, VAR_7);
}
