
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pop3_conn {char* apoptimestamp; int authtypes; } ;
struct TYPE_3__ {struct pop3_conn pop3c; } ;
struct connectdata {TYPE_1__ proto; struct Curl_easy* data; } ;
struct TYPE_4__ {char* buffer; } ;
struct Curl_easy {TYPE_2__ state; } ;
typedef int pop3state ;
typedef int CURLcode ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int,size_t) ;
 int FUNC_2 (struct Curl_easy*,char*) ;
 int FUNC_3 (char*,char const*,size_t) ;
 int FUNC_4 (struct connectdata*) ;
 char* FUNC_5 (char*,char) ;
 size_t FUNC_6 (char const*) ;

__attribute__((used)) static CURLcode FUNC_7(struct connectdata *VAR_3,
                                            int VAR_4,
                                            pop3state VAR_5)
{
  CURLcode VAR_6 = VAR_0;
  struct Curl_easy *VAR_7 = VAR_3->data;
  struct pop3_conn *VAR_8 = &VAR_3->proto.pop3c;
  const char *VAR_9 = VAR_7->state.buffer;
  size_t VAR_10 = FUNC_6(VAR_9);

  (void)VAR_5;

  if(VAR_4 != '+') {
    FUNC_2(VAR_7, "Got unexpected pop3-server response");
    VAR_6 = VAR_1;
  }
  else {

    if(VAR_10 >= 4 && VAR_9[VAR_10 - 2] == '>') {

      size_t VAR_11;
      for(VAR_11 = 3; VAR_11 < VAR_10 - 2; ++VAR_11) {
        if(VAR_9[VAR_11] == '<') {

          size_t VAR_12 = VAR_10 - 1 - VAR_11;
          char *VAR_13;
          if(!VAR_12)
            break;


          VAR_8->apoptimestamp = (char *)FUNC_1(1, VAR_12 + 1);

          if(!VAR_8->apoptimestamp)
            break;


          FUNC_3(VAR_8->apoptimestamp, VAR_9 + VAR_11, VAR_12);
          VAR_8->apoptimestamp[VAR_12] = '\0';




          VAR_13 = FUNC_5(VAR_8->apoptimestamp, '@');
          if(!VAR_13)
            FUNC_0(VAR_8->apoptimestamp);
          else

            VAR_8->authtypes |= VAR_2;
          break;
        }
      }
    }

    VAR_6 = FUNC_4(VAR_3);
  }

  return VAR_6;
}
