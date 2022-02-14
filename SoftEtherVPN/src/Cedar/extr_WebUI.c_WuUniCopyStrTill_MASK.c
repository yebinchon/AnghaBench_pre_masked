
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int UINT ;


 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static wchar_t *FUNC_1(wchar_t *VAR_0, wchar_t VAR_1, wchar_t **VAR_2){
 UINT VAR_3 = 0, VAR_4;
 wchar_t *VAR_5 = VAR_0;
 wchar_t *VAR_6 = VAR_0;


 while(*VAR_5)
 {
  if(*VAR_5==L'\\')
  {
   VAR_5++;
   if(*VAR_5 == 0)
   {
    break;
   }
  }
  else
  {
   if(*VAR_5 == VAR_1)
   {
    break;
   }
  }
  VAR_5++;
  VAR_3++;
 }


 *VAR_2 = (wchar_t*)FUNC_0((VAR_3+1)*sizeof(wchar_t));
 for(VAR_4=0;VAR_4<VAR_3;VAR_4++)
 {
  if(*VAR_6 == L'\\')
  {
   VAR_6++;
  }
  (*VAR_2)[VAR_4] = *VAR_6;
  VAR_6++;
 }
 (*VAR_2)[VAR_3]=0;


 return *VAR_5 ? VAR_5+1 : VAR_5;
}
