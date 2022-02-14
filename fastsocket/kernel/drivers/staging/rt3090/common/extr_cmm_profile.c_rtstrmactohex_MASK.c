
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PUCHAR ;
typedef char* PSTRING ;
typedef int BOOLEAN ;


 int FUNC_0 (char*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char) ;
 char* FUNC_2 (char*,char) ;
 int FUNC_3 (char*) ;

BOOLEAN FUNC_4(PSTRING VAR_3, PSTRING VAR_4)
{
 int VAR_5 = 0;
 PSTRING VAR_6 = VAR_3, VAR_7 = VAR_3;

 if (FUNC_3(VAR_3) != VAR_0)
  return VAR_1;

 while((*VAR_6) != '\0')
 {
  if((VAR_7 = FUNC_2(VAR_6, ':')) != ((void*)0))
   *VAR_7++ = '\0';
  if ((FUNC_3(VAR_6) != 2) || (!FUNC_1(*VAR_6)) || (!FUNC_1(*(VAR_6+1))))
   break;
  FUNC_0(VAR_6, (PUCHAR)&VAR_4[VAR_5++], 1);
  VAR_6 = VAR_7;
  if (VAR_5 == 6)
   break;
 }

 return ( VAR_5 == 6 ? VAR_2 : VAR_1);

}
