
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buffer ;
typedef scalar_t__ SANITIZEcode ;
typedef int CURLcode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char*) ;
 int FUNC_3 (char*,int,char*,char*,char*) ;
 scalar_t__ FUNC_4 (char**,char*,int ) ;
 char* FUNC_5 (char const*) ;
 char* FUNC_6 (char const*,char) ;
 char* FUNC_7 (char const*,char*) ;

CURLcode FUNC_8(char **VAR_3, const char *VAR_4)
{
  const char *VAR_5, *VAR_6;

  *VAR_3 = ((void*)0);


  VAR_5 = FUNC_7(VAR_4, "://");
  if(VAR_5)
    VAR_5 += 3;
  else
    VAR_5 = VAR_4;

  VAR_6 = FUNC_6(VAR_5, '\\');
  VAR_5 = FUNC_6(VAR_5, '/');
  if(VAR_6 && (!VAR_5 || VAR_5 < VAR_6))
    VAR_5 = VAR_6;

  if(VAR_5)

    VAR_5++;
  else

    VAR_5 = "";

  *VAR_3 = FUNC_5(VAR_5);
  if(!*VAR_3)
    return VAR_1;
  return VAR_0;
}
