
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
struct smtp_conn {void* tls_supported; TYPE_3__ sasl; void* auth_supported; void* size_supported; } ;
struct TYPE_6__ {struct smtp_conn smtpc; } ;
struct connectdata {TYPE_4__* ssl; TYPE_1__ proto; struct Curl_easy* data; } ;
struct TYPE_10__ {scalar_t__ use_ssl; } ;
struct TYPE_7__ {char* buffer; } ;
struct Curl_easy {TYPE_5__ set; TYPE_2__ state; } ;
typedef int smtpstate ;
struct TYPE_9__ {scalar_t__ use; } ;
typedef int CURLcode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned int FUNC_0 (char const*,size_t,size_t*) ;
 size_t VAR_5 ;
 void* VAR_6 ;
 int FUNC_1 (struct Curl_easy*,char*,...) ;
 int FUNC_2 (char const*,char*,int) ;
 int FUNC_3 (struct connectdata*) ;
 int FUNC_4 (struct connectdata*) ;
 int FUNC_5 (struct connectdata*) ;
 size_t FUNC_6 (char const*) ;

__attribute__((used)) static CURLcode FUNC_7(struct connectdata *VAR_7, int VAR_8,
                                     smtpstate VAR_9)
{
  CURLcode VAR_10 = VAR_0;
  struct Curl_easy *VAR_11 = VAR_7->data;
  struct smtp_conn *VAR_12 = &VAR_7->proto.smtpc;
  const char *VAR_13 = VAR_11->state.buffer;
  size_t VAR_14 = FUNC_6(VAR_13);

  (void)VAR_9;

  if(VAR_8/100 != 2 && VAR_8 != 1) {
    if(VAR_11->set.use_ssl <= VAR_4 || VAR_7->ssl[VAR_5].use)
      VAR_10 = FUNC_4(VAR_7);
    else {
      FUNC_1(VAR_11, "Remote access denied: %d", VAR_8);
      VAR_10 = VAR_1;
    }
  }
  else if(VAR_14 >= 4) {
    VAR_13 += 4;
    VAR_14 -= 4;


    if(VAR_14 >= 8 && !FUNC_2(VAR_13, "STARTTLS", 8))
      VAR_12->tls_supported = VAR_6;


    else if(VAR_14 >= 4 && !FUNC_2(VAR_13, "SIZE", 4))
      VAR_12->size_supported = VAR_6;


    else if(VAR_14 >= 5 && !FUNC_2(VAR_13, "AUTH ", 5)) {
      VAR_12->auth_supported = VAR_6;


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

    if(VAR_8 != 1) {
      if(VAR_11->set.use_ssl && !VAR_7->ssl[VAR_5].use) {

        if(VAR_12->tls_supported)

          VAR_10 = FUNC_5(VAR_7);
        else if(VAR_11->set.use_ssl == VAR_4)

          VAR_10 = FUNC_3(VAR_7);
        else {
          FUNC_1(VAR_11, "STARTTLS not supported.");
          VAR_10 = VAR_2;
        }
      }
      else
        VAR_10 = FUNC_3(VAR_7);
    }
  }
  else {
    FUNC_1(VAR_11, "Unexpectedly short EHLO response");
    VAR_10 = VAR_3;
  }

  return VAR_10;
}
