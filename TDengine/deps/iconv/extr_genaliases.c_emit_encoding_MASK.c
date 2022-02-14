
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int *,char const* const,char const*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (unsigned char,int *) ;

__attribute__((used)) static void FUNC_4 (FILE* VAR_0, FILE* VAR_1, const char* const* VAR_2, size_t VAR_3, const char* VAR_4)
{
  FUNC_2(VAR_1,"grep 'sizeof(\"");

  {
    const char* VAR_5 = *VAR_2;
    for (; *VAR_5; VAR_5++) {
      unsigned char VAR_6 = * (unsigned char *) VAR_5;
      if (VAR_6 >= 0x80)
        FUNC_1(1);
      if (VAR_6 >= 'a' && VAR_6 <= 'z')
        VAR_6 -= 'a'-'A';
      FUNC_3(VAR_6, VAR_1);
    }
  }
  FUNC_2(VAR_1,"\")' tmp.h | sed -e 's|^.*\\(stringpool_str[0-9]*\\).*$|  (int)(long)\\&((struct stringpool_t *)0)->\\1,|'\n");
  for (; VAR_3 > 0; VAR_2++, VAR_3--)
    FUNC_0(VAR_0, *VAR_2, VAR_4);
}
