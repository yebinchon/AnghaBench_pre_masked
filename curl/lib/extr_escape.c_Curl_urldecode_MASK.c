
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Curl_easy {int dummy; } ;
typedef int CURLcode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct Curl_easy*,char*,int) ;
 scalar_t__ FUNC_1 (char const) ;
 unsigned char FUNC_2 (unsigned long) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (size_t) ;
 size_t FUNC_5 (char const*) ;
 unsigned long FUNC_6 (char*,char**,int) ;

CURLcode FUNC_7(struct Curl_easy *VAR_3,
                        const char *VAR_4, size_t VAR_5,
                        char **VAR_6, size_t *VAR_7,
                        bool VAR_8)
{
  size_t VAR_9 = (VAR_5?VAR_5:FUNC_5(VAR_4)) + 1;
  char *VAR_10 = FUNC_4(VAR_9);
  size_t VAR_11 = 0;
  unsigned long VAR_12;
  CURLcode VAR_13 = VAR_0;

  if(!VAR_10)
    return VAR_1;

  while(--VAR_9 > 0) {
    unsigned char VAR_14 = *VAR_4;
    if(('%' == VAR_14) && (VAR_9 > 2) &&
       FUNC_1(VAR_4[1]) && FUNC_1(VAR_4[2])) {

      char VAR_15[3];
      char *VAR_16;
      VAR_15[0] = VAR_4[1];
      VAR_15[1] = VAR_4[2];
      VAR_15[2] = 0;

      VAR_12 = FUNC_6(VAR_15, &VAR_16, 16);

      VAR_14 = FUNC_2(VAR_12);

      if(VAR_3) {
        VAR_13 = FUNC_0(VAR_3, (char *)&VAR_14, 1);
        if(VAR_13) {

          FUNC_3(VAR_10);
          return VAR_13;
        }
      }

      VAR_4 += 2;
      VAR_9 -= 2;
    }

    if(VAR_8 && (VAR_14 < 0x20)) {
      FUNC_3(VAR_10);
      return VAR_2;
    }

    VAR_10[VAR_11++] = VAR_14;
    VAR_4++;
  }
  VAR_10[VAR_11] = 0;

  if(VAR_7)

    *VAR_7 = VAR_11;


  *VAR_6 = VAR_10;

  return VAR_0;
}
