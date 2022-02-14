
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CURLcode ;


 int VAR_0 ;
 int FUNC_0 (char const*,unsigned char**,size_t*) ;
 size_t FUNC_1 (char const*) ;

CURLcode FUNC_2(const char *VAR_1, char **VAR_2,
                                           size_t *VAR_3)
{
  CURLcode VAR_4 = VAR_0;
  size_t VAR_5 = FUNC_1(VAR_1);

  *VAR_2 = ((void*)0);
  *VAR_3 = 0;


  if(VAR_5 && *VAR_1 != '=')
    VAR_4 = FUNC_0(VAR_1, (unsigned char **) VAR_2, VAR_3);

  return VAR_4;
}
