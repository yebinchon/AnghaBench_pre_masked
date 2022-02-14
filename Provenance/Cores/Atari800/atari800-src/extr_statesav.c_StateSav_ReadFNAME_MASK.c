
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t UWORD ;
typedef int UBYTE ;


 size_t VAR_0 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int *,size_t) ;
 int FUNC_2 (size_t*,int) ;

void FUNC_3(char *VAR_1)
{
 UWORD VAR_2 = 0;

 FUNC_2(&VAR_2, 1);
 if (VAR_2 >= VAR_0) {
  FUNC_0("Filenames of %d characters not supported on this platform", (int) VAR_2);
  return;
 }
 FUNC_1((UBYTE *) VAR_1, VAR_2);
 VAR_1[VAR_2] = 0;
}
