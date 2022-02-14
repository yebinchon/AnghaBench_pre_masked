
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buff ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 char* FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,int,int *) ;
 int * FUNC_3 (char*,char*) ;
 int FUNC_4 (char*,char*,int,char*) ;
 int VAR_4 ;
 int FUNC_5 (char*,char*,char*,int) ;
 int FUNC_6 (char*,char*,int*,int*,int*) ;

__attribute__((used)) static int FUNC_7(int *VAR_5, int *VAR_6, int *VAR_7)
{
 char VAR_8[64];
 FILE *VAR_9;
 int VAR_10;
 char VAR_11[256];
 int VAR_12;
 int VAR_13;
 int VAR_14;

 *VAR_5 = 0;
 *VAR_6 = 0;
 *VAR_7 = 0;

 for (VAR_10=0; VAR_10<VAR_4; VAR_10++)
 {
  FUNC_5(VAR_8, "%s.%d", VAR_2, VAR_10);
  if ((VAR_9=FUNC_3(VAR_8, "r")) == ((void*)0))
  {
   FUNC_4("open file %s fail, errno: %d, error info: %s\n",
    VAR_8, VAR_3, FUNC_0(VAR_3));
   return VAR_3 != 0 ? VAR_3 : VAR_1;
  }

  while (FUNC_2(VAR_11, sizeof(VAR_11), VAR_9) != ((void*)0))
  {
   if (*VAR_11 == '#')
   {
    continue;
   }

   if (FUNC_6(VAR_11, "%d %d %d", &VAR_13, &VAR_14, &VAR_12) != 3)
   {
    FUNC_4("sscanf %s fail, errno: %d, error info: %s\n",
     VAR_8, VAR_3, FUNC_0(VAR_3));
    return VAR_3 != 0 ? VAR_3 : VAR_0;
   }

   break;
  }

  *VAR_5 += VAR_13;
  *VAR_6 += VAR_14;
  *VAR_7 += VAR_12;
  FUNC_1(VAR_9);
 }

 *VAR_7 /= VAR_4;

 return 0;
}
