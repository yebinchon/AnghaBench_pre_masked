
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;


 int FUNC_0 (char*,char*,char*,int) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (char*) ;
 int VAR_0 ;
 char* FUNC_3 (int) ;
 int FUNC_4 (char*,char*,int,int) ;
 int FUNC_5 (char*,int,char*) ;
 int FUNC_6 (char*) ;

UINT FUNC_7(char *VAR_1, UINT VAR_2, char *VAR_3, char *VAR_4, char *VAR_5, bool VAR_6)
{
 UINT VAR_7, VAR_8, VAR_9;
 UINT VAR_10, VAR_11, VAR_12;
 UINT VAR_13;
 UINT VAR_14;
 char *VAR_15;

 if (VAR_3 == ((void*)0) || VAR_4 == ((void*)0) || VAR_5 == ((void*)0))
 {
  return 0;
 }


 VAR_10 = FUNC_6(VAR_3);
 VAR_11 = FUNC_6(VAR_4);
 VAR_12 = FUNC_6(VAR_5);


 VAR_13 = FUNC_0(VAR_3, VAR_4, VAR_5, VAR_6);

 VAR_15 = FUNC_3(VAR_13 + 1);
 VAR_15[VAR_13] = '\0';


 VAR_7 = 0;
 VAR_8 = 0;
 VAR_9 = 0;
 VAR_14 = 0;
 while (1)
 {
  VAR_7 = FUNC_4(VAR_3, VAR_4, VAR_7, VAR_6);
  if (VAR_7 == VAR_0)
  {
   FUNC_1(VAR_15 + VAR_14, VAR_3 + VAR_8, VAR_10 - VAR_8);
   VAR_14 += VAR_10 - VAR_8;
   break;
  }
  VAR_9++;
  FUNC_1(VAR_15 + VAR_14, VAR_3 + VAR_8, VAR_7 - VAR_8);
  VAR_14 += VAR_7 - VAR_8;
  FUNC_1(VAR_15 + VAR_14, VAR_5, VAR_12);
  VAR_14 += VAR_12;
  VAR_7 += VAR_11;
  VAR_8 = VAR_7;
 }


 FUNC_5(VAR_1, VAR_2, VAR_15);


 FUNC_2(VAR_15);

 return VAR_9;
}
