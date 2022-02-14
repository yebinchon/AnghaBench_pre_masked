
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Curl_URL {int zoneid; } ;
typedef int CURLUcode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,char*) ;
 size_t FUNC_1 (char*,char*) ;
 int FUNC_2 (char*) ;
 size_t FUNC_3 (char*) ;
 int FUNC_4 (char*,char*,int) ;
 size_t FUNC_5 (char*,char const*) ;

__attribute__((used)) static CURLUcode FUNC_6(struct Curl_URL *VAR_5, char *VAR_6)
{
  size_t VAR_7;
  size_t VAR_8 = FUNC_3(VAR_6);

  if(VAR_6[0] == '[') {



    const char *VAR_9 = "0123456789abcdefABCDEF:.";
    if(VAR_8 < 5)
      return VAR_1;
    VAR_6++;
    VAR_8 -= 2;

    if(VAR_6[VAR_8] != ']')
      return VAR_1;


    VAR_7 = FUNC_5(VAR_6, VAR_9);
    if(VAR_8 != VAR_7) {
      VAR_8 = VAR_7;
      if(VAR_6[VAR_7] == '%') {

        char VAR_10[16];
        int VAR_11 = 0;
        char *VAR_12 = &VAR_6[VAR_7 + 1];

        if(!FUNC_4(VAR_12, "25", 2) && VAR_12[2] && (VAR_12[2] != ']'))
          VAR_12 += 2;
        while(*VAR_12 && (*VAR_12 != ']') && (VAR_11 < 15))
          VAR_10[VAR_11++] = *VAR_12++;
        if(!VAR_11 || (']' != *VAR_12))
          return VAR_1;
        VAR_10[VAR_11] = 0;
        VAR_5->zoneid = FUNC_2(VAR_10);
        if(!VAR_5->zoneid)
          return VAR_4;
        VAR_6[VAR_7] = ']';
        VAR_6[VAR_7 + 1] = 0;
      }
      else
        return VAR_1;

    }






  }
  else {

    VAR_7 = FUNC_1(VAR_6, " ");
    if(VAR_8 != VAR_7)

      return VAR_1;
  }
  if(!VAR_6[0])
    return VAR_2;
  return VAR_3;
}
