
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ char_class ;


 scalar_t__ FUNC_0 (unsigned char) ;
 scalar_t__ FUNC_1 (unsigned char) ;

__attribute__((used)) static void FUNC_2(unsigned char **VAR_0, unsigned char *VAR_1)
{
  unsigned char *VAR_2 = (*VAR_0)++;
  unsigned char VAR_3 = *VAR_2++;

  VAR_1[VAR_3] = 1;
  if(FUNC_0(VAR_3) && *VAR_2++ == '-') {
    char_class VAR_4 = FUNC_1(VAR_3);
    unsigned char VAR_5 = *VAR_2++;

    if(VAR_5 == '\\')
      VAR_5 = *VAR_2++;
    if(VAR_5 >= VAR_3 && FUNC_1(VAR_5) == VAR_4) {
      while(VAR_3++ != VAR_5)
        if(FUNC_1(VAR_3) == VAR_4)
          VAR_1[VAR_3] = 1;
      *VAR_0 = VAR_2;
    }
  }
}
