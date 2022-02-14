
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UBYTE ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (char*,char const*) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char const*,char*) ;
 int FUNC_3 (int *,int,int,int *) ;

int FUNC_4(const char *VAR_2, UBYTE *VAR_3, int VAR_4)
{
 FILE *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_2(VAR_2, "rb");
 if (VAR_5 == ((void*)0)) {
  FUNC_0("Error loading ROM image: %s", VAR_2);
  return VAR_0;
 }
 VAR_6 = FUNC_3(VAR_3, 1, VAR_4, VAR_5);
 FUNC_1(VAR_5);
 if (VAR_6 != VAR_4) {
  FUNC_0("Error reading %s", VAR_2);
  return VAR_0;
 }
 return VAR_1;
}
