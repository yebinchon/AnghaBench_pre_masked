
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Curl_easy {int dummy; } ;
typedef scalar_t__ CURLcode ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct Curl_easy*,char const*,size_t,char**) ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (size_t) ;
 int FUNC_3 (char*,int,char*,char const,char const,...) ;
 size_t FUNC_4 (char const*) ;

__attribute__((used)) static CURLcode FUNC_5(const char *VAR_3,
                              struct Curl_easy *VAR_4,
                              const char *VAR_5, size_t VAR_6,
                              char **VAR_7, size_t *VAR_8)
{
  CURLcode VAR_9;
  unsigned char VAR_10[3];
  unsigned char VAR_11[4];
  int VAR_12;
  int VAR_13;
  char *VAR_14;
  char *VAR_15;
  char *VAR_16 = ((void*)0);

  const char *VAR_17 = VAR_5;

  *VAR_7 = ((void*)0);
  *VAR_8 = 0;

  if(!VAR_6)
    VAR_6 = FUNC_4(VAR_17);






  VAR_15 = VAR_14 = FUNC_2(VAR_6 * 4 / 3 + 4);
  if(!VAR_14)
    return VAR_1;






  VAR_9 = FUNC_0(VAR_4, VAR_17, VAR_6, &VAR_16);
  if(VAR_9) {
    FUNC_1(VAR_14);
    return VAR_9;
  }

  if(VAR_16)
    VAR_17 = (char *)VAR_16;

  while(VAR_6 > 0) {
    for(VAR_12 = VAR_13 = 0; VAR_12 < 3; VAR_12++) {
      if(VAR_6 > 0) {
        VAR_13++;
        VAR_10[VAR_12] = (unsigned char) *VAR_17;
        VAR_17++;
        VAR_6--;
      }
      else
        VAR_10[VAR_12] = 0;
    }

    VAR_11[0] = (unsigned char) ((VAR_10[0] & 0xFC) >> 2);
    VAR_11[1] = (unsigned char) (((VAR_10[0] & 0x03) << 4) | ((VAR_10[1] & 0xF0) >> 4));

    VAR_11[2] = (unsigned char) (((VAR_10[1] & 0x0F) << 2) | ((VAR_10[2] & 0xC0) >> 6));

    VAR_11[3] = (unsigned char) (VAR_10[2] & 0x3F);

    switch(VAR_13) {
    case 1:
      FUNC_3(VAR_14, 5, "%c%c==",
                VAR_3[VAR_11[0]],
                VAR_3[VAR_11[1]]);
      break;

    case 2:
      FUNC_3(VAR_14, 5, "%c%c%c=",
                VAR_3[VAR_11[0]],
                VAR_3[VAR_11[1]],
                VAR_3[VAR_11[2]]);
      break;

    default:
      FUNC_3(VAR_14, 5, "%c%c%c%c",
                VAR_3[VAR_11[0]],
                VAR_3[VAR_11[1]],
                VAR_3[VAR_11[2]],
                VAR_3[VAR_11[3]]);
      break;
    }
    VAR_14 += 4;
  }


  *VAR_14 = '\0';


  *VAR_7 = VAR_15;

  FUNC_1(VAR_16);


  *VAR_8 = FUNC_4(VAR_15);

  return VAR_0;
}
