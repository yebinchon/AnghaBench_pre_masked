
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {unsigned int authmechs; } ;
struct pop3_conn {int authtypes; scalar_t__ tls_supported; TYPE_3__ sasl; } ;
struct TYPE_6__ {struct pop3_conn pop3c; } ;
struct connectdata {TYPE_4__* ssl; TYPE_1__ proto; struct Curl_easy* data; } ;
struct TYPE_10__ {scalar_t__ use_ssl; } ;
struct TYPE_7__ {char* buffer; } ;
struct Curl_easy {TYPE_5__ set; TYPE_2__ state; } ;
typedef int pop3state ;
struct TYPE_9__ {int use; } ;
typedef int CURLcode ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int FUNC_0 (char const*,size_t,size_t*) ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (struct Curl_easy*,char*) ;
 int FUNC_2 (char const*,char*,int) ;
 int FUNC_3 (struct connectdata*) ;
 int FUNC_4 (struct connectdata*) ;
 size_t FUNC_5 (char const*) ;

__attribute__((used)) static CURLcode FUNC_6(struct connectdata *VAR_7, int VAR_8,
                                     pop3state VAR_9)
{
  CURLcode VAR_10 = VAR_0;
  struct Curl_easy *VAR_11 = VAR_7->data;
  struct pop3_conn *VAR_12 = &VAR_7->proto.pop3c;
  const char *VAR_13 = VAR_11->state.buffer;
  size_t VAR_14 = FUNC_5(VAR_13);

  (void)VAR_9;


  if(VAR_8 == '*') {

    if(VAR_14 >= 4 && !FUNC_2(VAR_13, "STLS", 4))
      VAR_12->tls_supported = VAR_6;


    else if(VAR_14 >= 4 && !FUNC_2(VAR_13, "USER", 4))
      VAR_12->authtypes |= VAR_4;


    else if(VAR_14 >= 5 && !FUNC_2(VAR_13, "SASL ", 5)) {
      VAR_12->authtypes |= VAR_5;


      VAR_13 += 5;
      VAR_14 -= 5;


      for(;;) {
        size_t VAR_15;
        size_t VAR_16;
        unsigned int VAR_17;

        while(VAR_14 &&
              (*VAR_13 == ' ' || *VAR_13 == '\t' ||
               *VAR_13 == '\r' || *VAR_13 == '\n')) {

          VAR_13++;
          VAR_14--;
        }

        if(!VAR_14)
          break;


        for(VAR_16 = 0; VAR_16 < VAR_14 && VAR_13[VAR_16] != ' ' &&
              VAR_13[VAR_16] != '\t' && VAR_13[VAR_16] != '\r' &&
              VAR_13[VAR_16] != '\n';)
          VAR_16++;


        VAR_17 = FUNC_0(VAR_13, VAR_16, &VAR_15);
        if(VAR_17 && VAR_15 == VAR_16)
          VAR_12->sasl.authmechs |= VAR_17;

        VAR_13 += VAR_16;
        VAR_14 -= VAR_16;
      }
    }
  }
  else if(VAR_8 == '+') {
    if(VAR_11->set.use_ssl && !VAR_7->ssl[VAR_3].use) {

      if(VAR_12->tls_supported)

        VAR_10 = FUNC_4(VAR_7);
      else if(VAR_11->set.use_ssl == VAR_2)

        VAR_10 = FUNC_3(VAR_7);
      else {
        FUNC_1(VAR_11, "STLS not supported.");
        VAR_10 = VAR_1;
      }
    }
    else
      VAR_10 = FUNC_3(VAR_7);
  }
  else {

    VAR_12->authtypes |= VAR_4;

    VAR_10 = FUNC_3(VAR_7);
  }

  return VAR_10;
}
