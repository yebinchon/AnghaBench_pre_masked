
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char*,size_t*,char const*,int ) ;
 int * FUNC_2 (char const*,char) ;
 int FUNC_3 (char*,char const*,int ) ;

int
FUNC_4 (char *VAR_3, const char *VAR_4, va_list VAR_5)
{
  if (FUNC_2 (VAR_4, '$') == ((void*)0))
    return FUNC_3 (VAR_3, VAR_4, VAR_5);
  else
    {
      size_t VAR_6 = (size_t) ~0 / (4 * sizeof (char));
      char *VAR_7 = FUNC_1 (VAR_3, &VAR_6, VAR_4, VAR_5);
      if (VAR_7 != VAR_3)
        {
          FUNC_0 (VAR_7);
          return -1;
        }
      if (VAR_6 > VAR_1)
        {
          VAR_2 = VAR_0;
          return -1;
        }
      else
        return VAR_6;
    }
}
