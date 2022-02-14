
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 double FUNC_0 () ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int *) ;
 double VAR_0 ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (char*,char*) ;

void FUNC_5(char *VAR_1)
{
 FILE *VAR_2;
 double VAR_3;

 VAR_0 = 0;

 VAR_3 = FUNC_0();

 FUNC_1("writing %s\n", VAR_1);
 VAR_2 = FUNC_4(VAR_1, "wb");
 if (!VAR_2)
 {
  FUNC_1("can't open %s\n", VAR_1);
  return;
 }
 if (!FUNC_2(VAR_2))
 {
  FUNC_3(VAR_2);
  FUNC_1("error writing map file %s\n", VAR_1);
  return;
 }
 FUNC_3(VAR_2);

 FUNC_1("written %d brushes\n", VAR_0);
 FUNC_1("map file written in %5.0f seconds\n", FUNC_0() - VAR_3);
}
