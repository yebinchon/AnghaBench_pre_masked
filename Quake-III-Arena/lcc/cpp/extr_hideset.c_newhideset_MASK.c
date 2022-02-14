
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Nlist ;
typedef int ** Hideset ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 int *** VAR_2 ;
 int FUNC_2 (int **,int **,int *) ;
 int VAR_3 ;
 int FUNC_3 (int **,int **,int) ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (int ***,int) ;

int
FUNC_5(int VAR_5, Nlist *VAR_6)
{
 int VAR_7, VAR_8;
 Nlist *VAR_9[VAR_1+3];
 Hideset VAR_10, VAR_11;

 VAR_8 = FUNC_2(VAR_9, VAR_2[VAR_5], VAR_6);
 for (VAR_7=0; VAR_7<VAR_4; VAR_7++) {
  for (VAR_10=VAR_9, VAR_11=VAR_2[VAR_7]; *VAR_10==*VAR_11; VAR_10++, VAR_11++)
   if (*VAR_10 == ((void*)0))
    return VAR_7;
 }
 if (VAR_8>=VAR_1)
  return VAR_5;
 if (VAR_4 >= VAR_3) {
  VAR_3 = 3*VAR_3/2+1;
  VAR_2 = (Hideset *)FUNC_4(VAR_2, (sizeof (Hideset *))*VAR_3);
  if (VAR_2 == ((void*)0))
   FUNC_1(VAR_0, "Out of memory from realloc");
 }
 VAR_10 = (Hideset)FUNC_0(VAR_8*sizeof(Hideset));
 FUNC_3(VAR_10, VAR_9, VAR_8*sizeof(Hideset));
 VAR_2[VAR_4] = VAR_10;
 return VAR_4++;
}
