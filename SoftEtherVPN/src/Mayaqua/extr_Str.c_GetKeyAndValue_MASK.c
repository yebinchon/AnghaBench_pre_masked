
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t UINT ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char,char*) ;
 int FUNC_2 (char*,size_t,char*) ;
 size_t FUNC_3 (char*) ;
 char* FUNC_4 (size_t) ;
 char* VAR_0 ;

bool FUNC_5(char *VAR_1, char *VAR_2, UINT VAR_3, char *VAR_4, UINT VAR_5, char *VAR_6)
{
 UINT VAR_7 = 0;
 UINT VAR_8 = 0, VAR_9 = 0;
 UINT VAR_10, VAR_11;
 char *VAR_12, *VAR_13;
 bool VAR_14 = 0;
 if (VAR_6 == ((void*)0))
 {
  VAR_6 = VAR_0;
 }

 VAR_11 = FUNC_3(VAR_1);

 VAR_12 = FUNC_4(VAR_11 + 1);
 VAR_13 = FUNC_4(VAR_11 + 1);

 for (VAR_10 = 0;VAR_10 < VAR_11;VAR_10++)
 {
  char VAR_15 = VAR_1[VAR_10];

  switch (VAR_7)
  {
  case 0:
   if (FUNC_1(VAR_15, VAR_6) == 0)
   {
    VAR_7 = 1;
    VAR_12[VAR_8] = VAR_15;
    VAR_8++;
   }
   break;

  case 1:
   if (FUNC_1(VAR_15, VAR_6) == 0)
   {
    VAR_12[VAR_8] = VAR_15;
    VAR_8++;
   }
   else
   {
    VAR_7 = 2;
   }
   break;

  case 2:
   if (FUNC_1(VAR_15, VAR_6) == 0)
   {
    VAR_7 = 3;
    VAR_13[VAR_9] = VAR_15;
    VAR_9++;
   }
   break;

  case 3:
   VAR_13[VAR_9] = VAR_15;
   VAR_9++;
   break;
  }
 }

 if (VAR_7 != 0)
 {
  VAR_14 = 1;
  FUNC_2(VAR_2, VAR_3, VAR_12);
  FUNC_2(VAR_4, VAR_5, VAR_13);
 }

 FUNC_0(VAR_12);
 FUNC_0(VAR_13);

 return VAR_14;
}
