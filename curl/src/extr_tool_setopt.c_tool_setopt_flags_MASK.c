
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct GlobalConfig {scalar_t__ libcurl; } ;
typedef int preamble ;
struct TYPE_3__ {long value; scalar_t__ name; } ;
typedef TYPE_1__ NameValue ;
typedef int CURLoption ;
typedef int CURLcode ;
typedef int CURL ;


 int FUNC_0 (char*,char*,long) ;
 int FUNC_1 (char*,char*,scalar_t__,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,int ,long) ;
 int FUNC_3 (char*,int,char*,char const*,...) ;
 int FUNC_4 (char*) ;

CURLcode FUNC_5(CURL *VAR_3, struct GlobalConfig *VAR_4,
                           const char *VAR_5, CURLoption VAR_6,
                           const NameValue *VAR_7, long VAR_8)
{
  CURLcode VAR_9 = VAR_0;
  bool VAR_10 = VAR_1;

  VAR_9 = FUNC_2(VAR_3, VAR_6, VAR_8);
  if(!VAR_8)
    VAR_10 = VAR_2;

  if(VAR_4->libcurl && !VAR_10 && !VAR_9) {

    char VAR_11[80];
    long VAR_12 = VAR_8;
    const NameValue *VAR_13 = ((void*)0);
    FUNC_3(VAR_11, sizeof(VAR_11),
              "curl_easy_setopt(hnd, %s, ", VAR_5);
    for(VAR_13 = VAR_7; VAR_13->name; VAR_13++) {
      if((VAR_13->value & ~ VAR_12) == 0) {

        VAR_12 &= ~ VAR_13->value;
        FUNC_1("%s(long)%s%s",
              VAR_11, VAR_13->name, VAR_12 ? " |" : ");");
        if(!VAR_12)
          break;

        FUNC_3(VAR_11, sizeof(VAR_11), "%*s", FUNC_4(VAR_11), "");
      }
    }



    if(VAR_12)
      FUNC_0("%s%ldL);", VAR_11, VAR_12);
  }

 nomem:
  return VAR_9;
}
