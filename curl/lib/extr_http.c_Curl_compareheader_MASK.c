
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (char const) ;
 int VAR_1 ;
 char* FUNC_1 (char const*,char) ;
 size_t FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (char const*,char const*,size_t) ;

bool
FUNC_4(const char *VAR_2,
                   const char *VAR_3,
                   const char *VAR_4)
{





  size_t VAR_5 = FUNC_2(VAR_3);
  size_t VAR_6;
  size_t VAR_7;
  const char *VAR_8;
  const char *VAR_9;

  if(!FUNC_3(VAR_2, VAR_3, VAR_5))
    return VAR_0;


  VAR_8 = &VAR_2[VAR_5];


  while(*VAR_8 && FUNC_0(*VAR_8))
    VAR_8++;


  VAR_9 = FUNC_1(VAR_8, '\r');
  if(!VAR_9) {

    VAR_9 = FUNC_1(VAR_8, '\n');

    if(!VAR_9)

      VAR_9 = FUNC_1(VAR_8, '\0');
  }

  VAR_7 = VAR_9-VAR_8;
  VAR_6 = FUNC_2(VAR_4);


  for(; VAR_7 >= VAR_6; VAR_7--, VAR_8++) {
    if(FUNC_3(VAR_8, VAR_4, VAR_6))
      return VAR_1;
  }

  return VAR_0;
}
