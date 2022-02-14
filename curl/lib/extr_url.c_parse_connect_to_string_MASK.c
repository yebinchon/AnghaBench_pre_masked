
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ ipv6_ip; } ;
struct TYPE_3__ {int name; } ;
struct connectdata {long remote_port; TYPE_2__ bits; TYPE_1__ host; } ;
struct Curl_easy {int dummy; } ;
typedef int CURLcode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* FUNC_0 (char*,char*,int ,char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct Curl_easy*,char const*,char**,int*) ;
 char* FUNC_3 (char const*,char) ;
 size_t FUNC_4 (char*) ;
 int FUNC_5 (char const*,char*,size_t) ;
 long FUNC_6 (char const*,char**,int) ;

__attribute__((used)) static CURLcode FUNC_7(struct Curl_easy *VAR_4,
                                        struct connectdata *VAR_5,
                                        const char *VAR_6,
                                        char **VAR_7,
                                        int *VAR_8)
{
  CURLcode VAR_9 = VAR_0;
  const char *VAR_10 = VAR_6;
  int VAR_11 = VAR_2;
  int VAR_12 = VAR_2;

  *VAR_7 = ((void*)0);
  *VAR_8 = -1;

  if(*VAR_10 == ':') {

    VAR_11 = VAR_3;
    VAR_10++;
  }
  else {

    size_t VAR_13;
    char *VAR_14 = FUNC_0("%s%s%s",
                                      VAR_5->bits.ipv6_ip ? "[" : "",
                                      VAR_5->host.name,
                                      VAR_5->bits.ipv6_ip ? "]" : "");
    if(!VAR_14)
      return VAR_1;
    VAR_13 = FUNC_4(VAR_14);
    VAR_11 = FUNC_5(VAR_10, VAR_14,
                                 VAR_13);
    FUNC_1(VAR_14);
    VAR_10 += VAR_13;

    VAR_11 = VAR_11 && *VAR_10 == ':';
    VAR_10++;
  }

  if(VAR_11) {
    if(*VAR_10 == ':') {

      VAR_12 = VAR_3;
      VAR_10++;
    }
    else {

      char *VAR_15 = FUNC_3(VAR_10, ':');
      if(VAR_15) {
        char *VAR_16 = ((void*)0);
        long VAR_17 = FUNC_6(VAR_10, &VAR_16, 10);
        if((VAR_16 == VAR_15) && (VAR_17 == VAR_5->remote_port)) {
          VAR_12 = VAR_3;
          VAR_10 = VAR_15 + 1;
        }
      }
    }
  }

  if(VAR_11 && VAR_12) {

    VAR_9 = FUNC_2(VAR_4, VAR_10, VAR_7, VAR_8);
  }

  return VAR_9;
}
