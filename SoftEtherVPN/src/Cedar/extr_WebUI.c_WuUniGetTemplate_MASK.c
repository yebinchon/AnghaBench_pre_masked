
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ wchar_t ;
typedef int tmp ;
typedef scalar_t__ UINT ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__*,int,char*,scalar_t__*,scalar_t__*,scalar_t__*) ;
 scalar_t__ FUNC_2 (scalar_t__*,scalar_t__*,scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__*) ;
 int FUNC_4 (scalar_t__**,scalar_t__*,char*) ;

__attribute__((used)) static wchar_t *FUNC_5(wchar_t **VAR_2, wchar_t *VAR_3, wchar_t *VAR_4, bool VAR_5)
{
 UINT VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;
 wchar_t *VAR_11;

 if(VAR_2 == ((void*)0) || *VAR_2 == ((void*)0) || VAR_3 == ((void*)0) || VAR_4 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_6 = FUNC_2(*VAR_2, VAR_3, 0);
 if(VAR_6 == VAR_0)
 {
  return ((void*)0);
 }
 VAR_6 += FUNC_3(VAR_3);

 VAR_7 = FUNC_2(*VAR_2, VAR_4, VAR_6);
 if(VAR_7 == VAR_0)
 {
  return ((void*)0);
 }

 VAR_8 = VAR_7 - VAR_6;
 VAR_9 = (VAR_8 + 1) * sizeof(wchar_t);
 VAR_11 = (wchar_t*)FUNC_0(VAR_9);
 for(VAR_10=0; VAR_10<VAR_8; VAR_10++)
 {
  VAR_11[VAR_10] = (*VAR_2)[VAR_6 + VAR_10];
 }
 VAR_11[VAR_10] = 0;

 if(VAR_5)
 {
  wchar_t VAR_12[VAR_1*10];
  FUNC_1(VAR_12, sizeof(VAR_12), L"%s%s%s", VAR_3, VAR_11, VAR_4);
  FUNC_4(VAR_2, VAR_12, L"");
 }
 return VAR_11;
}
