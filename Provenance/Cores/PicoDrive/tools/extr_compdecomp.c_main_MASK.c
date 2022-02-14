
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uLongf ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (void*,int *,void*,int,int ) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char*,char*) ;
 int FUNC_4 (void*,int,int,int *) ;
 int FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (void*,int,int,int *) ;
 void* FUNC_8 (int) ;
 int FUNC_9 (char*,...) ;
 void* FUNC_10 (void*,int) ;
 int FUNC_11 (void*,int *,void*,int) ;

int FUNC_12(int VAR_6, char *VAR_7[])
{
 void *VAR_8, *VAR_9 = ((void*)0);
 FILE *VAR_10, *VAR_11;
 int VAR_12, VAR_13, VAR_14;

 if (VAR_6 != 4)
 {
  FUNC_9("usage: %s <0|1> <infile> <outfile>\n", VAR_7[0]);
  return 1;
 }

 VAR_10 = FUNC_3(VAR_7[2], "rb");
 if (VAR_10 == ((void*)0)) return 2;

 FUNC_5(VAR_10, 0, VAR_1);
 VAR_13 = FUNC_6(VAR_10);
 FUNC_5(VAR_10, 0, VAR_2);
 VAR_8 = FUNC_8(VAR_13);
 if (VAR_8 == ((void*)0)) return 3;
 FUNC_4(VAR_8, 1, VAR_13, VAR_10);
 FUNC_2(VAR_10);

 if (FUNC_0(VAR_7[1]))
 {

  VAR_14 = VAR_13;
  do
  {
   VAR_14 *= 16;
   if (VAR_14 > VAR_0) return 4;
   VAR_9 = FUNC_10(VAR_9, VAR_14);
   if (VAR_9 == ((void*)0)) return 5;
   VAR_12 = FUNC_11(VAR_9, (uLongf *) &VAR_14, VAR_8, VAR_13);
  }
  while (VAR_12 == VAR_4);
 }
 else
 {

  VAR_14 = VAR_13 + 1024;
  VAR_9 = FUNC_8(VAR_14);
  if (VAR_9 == ((void*)0)) return 5;
  VAR_12 = FUNC_1(VAR_9, (uLongf *) &VAR_14, VAR_8, VAR_13, VAR_3);
 }

 if (VAR_12 == VAR_5)
 {
  VAR_11 = FUNC_3(VAR_7[3], "wb");
  if (VAR_11 == ((void*)0)) return 6;
  FUNC_7(VAR_9, 1, VAR_14, VAR_11);
  FUNC_2(VAR_11);
 }

 FUNC_9("result %i, size %i -> %i\n", VAR_12, VAR_13, VAR_14);

 return VAR_12;
}
