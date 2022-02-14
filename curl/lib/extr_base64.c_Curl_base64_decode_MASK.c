
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CURLcode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t FUNC_0 (unsigned char*,char const*) ;
 int FUNC_1 (unsigned char*) ;
 unsigned char* FUNC_2 (size_t) ;
 size_t FUNC_3 (char const*) ;

CURLcode FUNC_4(const char *VAR_3,
                            unsigned char **VAR_4, size_t *VAR_5)
{
  size_t VAR_6 = 0;
  size_t VAR_7 = 0;
  size_t VAR_8 = 0;
  size_t VAR_9;
  size_t VAR_10;
  size_t VAR_11 = 0;
  unsigned char *VAR_12;
  unsigned char *VAR_13;

  *VAR_4 = ((void*)0);
  *VAR_5 = 0;
  VAR_6 = FUNC_3(VAR_3);


  if(!VAR_6 || VAR_6 % 4)
    return VAR_0;


  while((VAR_3[VAR_7] != '=') && VAR_3[VAR_7])
    VAR_7++;


  if(VAR_3[VAR_7] == '=') {
    VAR_8++;
    if(VAR_3[VAR_7 + 1] == '=')
      VAR_8++;
  }


  if(VAR_7 + VAR_8 != VAR_6)
    return VAR_0;


  VAR_10 = VAR_6 / 4;


  VAR_11 = (VAR_10 * 3) - VAR_8;


  VAR_13 = FUNC_2(VAR_11 + 1);
  if(!VAR_13)
    return VAR_2;

  VAR_12 = VAR_13;


  for(VAR_9 = 0; VAR_9 < VAR_10; VAR_9++) {
    size_t VAR_14 = FUNC_0(VAR_12, VAR_3);
    if(!VAR_14) {
      FUNC_1(VAR_13);

      return VAR_0;
    }

    VAR_12 += VAR_14;
    VAR_3 += 4;
  }


  *VAR_12 = '\0';


  *VAR_4 = VAR_13;
  *VAR_5 = VAR_11;

  return VAR_1;
}
