
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int parsekey_state ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;


 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (char) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_1 (char*,char*) ;

__attribute__((used)) static int FUNC_2(unsigned char **VAR_15, unsigned char *VAR_16)
{
  parsekey_state VAR_17 = 128;

  char VAR_18[10] = { 0 };
  int VAR_19 = VAR_10;
  int VAR_20;
  unsigned char *VAR_21 = *VAR_15;
  for(VAR_20 = 0; !VAR_19; VAR_20++) {
    char VAR_22 = *VAR_21++;
    if(VAR_20 >= 10)
      return VAR_12;
    switch(VAR_17) {
    case 128:
      if(FUNC_0(VAR_22))
        VAR_18[VAR_20] = VAR_22;
      else if(VAR_22 == ':')
        VAR_17 = 129;
      else
        return VAR_12;
      break;
    case 129:
      if(VAR_22 == ']')
        VAR_19 = VAR_14;
      else
        return VAR_12;
    }
  }


  *VAR_15 = VAR_21;
  if(FUNC_1(VAR_18, "digit") == 0)
    VAR_16[VAR_3] = 1;
  else if(FUNC_1(VAR_18, "alnum") == 0)
    VAR_16[VAR_0] = 1;
  else if(FUNC_1(VAR_18, "alpha") == 0)
    VAR_16[VAR_1] = 1;
  else if(FUNC_1(VAR_18, "xdigit") == 0)
    VAR_16[VAR_9] = 1;
  else if(FUNC_1(VAR_18, "print") == 0)
    VAR_16[VAR_6] = 1;
  else if(FUNC_1(VAR_18, "graph") == 0)
    VAR_16[VAR_4] = 1;
  else if(FUNC_1(VAR_18, "space") == 0)
    VAR_16[VAR_7] = 1;
  else if(FUNC_1(VAR_18, "blank") == 0)
    VAR_16[VAR_2] = 1;
  else if(FUNC_1(VAR_18, "upper") == 0)
    VAR_16[VAR_8] = 1;
  else if(FUNC_1(VAR_18, "lower") == 0)
    VAR_16[VAR_5] = 1;
  else
    return VAR_12;
  return VAR_13;
}
