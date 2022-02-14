
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;
typedef int FILE ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 size_t FUNC_1 (char*,int,size_t,int *) ;
 char* FUNC_2 (int *,size_t*,char const*,int ) ;
 int * FUNC_3 (char const*,char) ;
 int FUNC_4 (int *,char const*,int ) ;

int
FUNC_5 (FILE *VAR_3, const char *VAR_4, va_list VAR_5)
{
  if (FUNC_3 (VAR_4, '$') == ((void*)0))
    return FUNC_4 (VAR_3, VAR_4, VAR_5);
  else
    {
      size_t VAR_6;
      char *VAR_7 = FUNC_2 (((void*)0), &VAR_6, VAR_4, VAR_5);
      int VAR_8 = -1;
      if (VAR_7 != ((void*)0))
        {
          size_t VAR_9 = FUNC_1 (VAR_7, 1, VAR_6, VAR_3);
          FUNC_0 (VAR_7);
          if (VAR_9 == VAR_6)
            {
              if (VAR_6 > VAR_1)
                VAR_2 = VAR_0;
              else
                VAR_8 = VAR_6;
            }
        }
      return VAR_8;
    }
}
