
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tmp ;
typedef int ipstr ;
typedef size_t UINT ;
typedef int IP ;


 int FUNC_0 (char*,void*,int ) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (size_t,int) ;
 size_t FUNC_2 (char*,char*,int ,int) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*,int,char*) ;
 int FUNC_5 (int *,char*) ;
 size_t FUNC_6 (char*) ;
 int FUNC_7 (char*,int) ;

bool FUNC_8(void *VAR_2, UINT VAR_3, IP *VAR_4, UINT *VAR_5)
{
 char VAR_6[VAR_1];
 UINT VAR_7;
 char VAR_8[VAR_1];
 char *VAR_9;

 if (VAR_2 == ((void*)0) || VAR_4 == ((void*)0) || VAR_5 == ((void*)0))
 {
  return 0;
 }

 FUNC_7(VAR_6, sizeof(VAR_6));

 FUNC_0(VAR_6, VAR_2, FUNC_1(VAR_3, sizeof(VAR_6) - 1));

 if (FUNC_3(VAR_6, "IP=") == 0)
 {
  return 0;
 }

 VAR_7 = FUNC_2(VAR_6, "#", 0, 1);
 if (VAR_7 != VAR_0)
 {
  VAR_6[VAR_7] = 0;
 }

 FUNC_4(VAR_8, sizeof(VAR_8), VAR_6 + 3);

 VAR_7 = FUNC_2(VAR_8, ",PORT=", 0, 1);
 if (VAR_7 == VAR_0)
 {
  return 0;
 }

 VAR_8[VAR_7] = 0;
 VAR_9 = VAR_8 + VAR_7 + 6;

 FUNC_5(VAR_4, VAR_8);
 *VAR_5 = FUNC_6(VAR_9);

 return 1;
}
