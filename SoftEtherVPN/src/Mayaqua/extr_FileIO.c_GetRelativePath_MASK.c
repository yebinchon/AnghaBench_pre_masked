
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int fullpath_w ;
typedef int dst_w ;
typedef int basepath_w ;
typedef int UINT ;


 int FUNC_0 (int *,int,int *,int *) ;
 int VAR_0 ;
 int FUNC_1 (int *,int,char*) ;
 int FUNC_2 (char*,int ,int *) ;

bool FUNC_3(char *VAR_1, UINT VAR_2, char *VAR_3, char *VAR_4)
{
 wchar_t VAR_5[VAR_0];
 wchar_t VAR_6[VAR_0];
 wchar_t VAR_7[VAR_0];
 bool VAR_8;

 if (VAR_1 == ((void*)0) || VAR_3 == ((void*)0) || VAR_4 == ((void*)0))
 {
  return 0;
 }

 FUNC_1(VAR_6, sizeof(VAR_6), VAR_3);
 FUNC_1(VAR_7, sizeof(VAR_7), VAR_4);

 VAR_8 = FUNC_0(VAR_5, sizeof(VAR_5), VAR_6, VAR_7);
 if (VAR_8 == 0)
 {
  return 0;
 }

 FUNC_2(VAR_1, VAR_2, VAR_5);

 return 1;
}
