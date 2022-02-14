
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG ;
typedef int UBYTE ;
typedef int FILE ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int *,int *) ;
 int FUNC_2 (int *,int *,int *) ;
 int VAR_3 ;
 int * VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (char const*,char*) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (char const*,char*) ;

int FUNC_8(const char *VAR_6, int VAR_7)
{
 int VAR_8;
 FILE *VAR_9;
 ULONG *VAR_10;
 UBYTE *VAR_11;
 UBYTE *VAR_12;
 if (FUNC_7(VAR_6, ".pcx"))
  VAR_8 = 0;




 else
  return VAR_1;
 VAR_9 = FUNC_5(VAR_6, "wb");
 if (VAR_9 == ((void*)0))
  return VAR_1;
 VAR_10 = VAR_4;
 VAR_11 = (UBYTE *) VAR_4 + VAR_0;
 if (VAR_7) {
  VAR_4 = (ULONG *) FUNC_3(VAR_3 * VAR_2);
  VAR_12 = (UBYTE *) VAR_4 + VAR_0;
  FUNC_0(VAR_5);
 }
 else {
  VAR_12 = ((void*)0);
 }





  FUNC_1(VAR_9, VAR_11, VAR_12);
 FUNC_4(VAR_9);
 if (VAR_7) {
  FUNC_6(VAR_4);
  VAR_4 = VAR_10;
 }
 return VAR_5;
}
