
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* PSTRING ;
typedef scalar_t__ INT ;


 scalar_t__ FUNC_0 (char*) ;

PSTRING FUNC_1(PSTRING VAR_0, PSTRING VAR_1)
{
 INT VAR_2, VAR_3, VAR_4;
 char VAR_5, VAR_6;

 VAR_3 = FUNC_0(VAR_1);
 if (!VAR_3)
  return (char *) VAR_0;

 VAR_2 = FUNC_0(VAR_0);

 while (VAR_2 >= VAR_3)
 {
  VAR_2--;

  for(VAR_4=0; VAR_4<VAR_3; VAR_4++)
  {
   VAR_5 = *(VAR_0+VAR_4);
   VAR_6 = *(VAR_1+VAR_4);

   if (('a' <= VAR_5) && (VAR_5 <= 'z'))
    VAR_5 = 'A'+(VAR_5-'a');
   if (('a' <= VAR_6) && (VAR_6 <= 'z'))
    VAR_6 = 'A'+(VAR_6-'a');

   if (VAR_5 != VAR_6)
    break;
  }

  if (VAR_4 == VAR_3)
   return (char *) VAR_0;

  VAR_0++;
 }

 return ((void*)0);
}
