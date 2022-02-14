
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
struct imap_conn {void* tls_supported; TYPE_3__ sasl; void* ir_supported; void* login_disabled; } ;
struct TYPE_6__ {struct imap_conn imapc; } ;
struct connectdata {TYPE_4__* ssl; TYPE_1__ proto; struct Curl_easy* data; } ;
struct TYPE_10__ {scalar_t__ use_ssl; } ;
struct TYPE_7__ {char* buffer; } ;
struct Curl_easy {TYPE_5__ set; TYPE_2__ state; } ;
typedef int imapstate ;
struct TYPE_9__ {int use; } ;
typedef int CURLcode ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int FUNC_0 (char const*,size_t,size_t*) ;
 size_t VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 int FUNC_1 (struct Curl_easy*,char*) ;
 int FUNC_2 (struct connectdata*) ;
 int FUNC_3 (struct connectdata*) ;
 int FUNC_4 (char const*,char*,int) ;

__attribute__((used)) static CURLcode FUNC_5(struct connectdata *VAR_6,
                                           int VAR_7,
                                           imapstate VAR_8)
{
  CURLcode VAR_9 = VAR_0;
  struct Curl_easy *VAR_10 = VAR_6->data;
  struct imap_conn *VAR_11 = &VAR_6->proto.imapc;
  const char *VAR_12 = VAR_10->state.buffer;

  (void)VAR_8;


  if(VAR_7 == '*') {
    VAR_12 += 2;


    for(;;) {
      size_t VAR_13;
      while(*VAR_12 &&
            (*VAR_12 == ' ' || *VAR_12 == '\t' ||
              *VAR_12 == '\r' || *VAR_12 == '\n')) {

        VAR_12++;
      }

      if(!*VAR_12)
        break;


      for(VAR_13 = 0; VAR_12[VAR_13] && VAR_12[VAR_13] != ' ' &&
            VAR_12[VAR_13] != '\t' && VAR_12[VAR_13] != '\r' &&
            VAR_12[VAR_13] != '\n';)
        VAR_13++;


      if(VAR_13 == 8 && !FUNC_4(VAR_12, "STARTTLS", 8))
        VAR_11->tls_supported = VAR_5;


      else if(VAR_13 == 13 && !FUNC_4(VAR_12, "LOGINDISABLED", 13))
        VAR_11->login_disabled = VAR_5;


      else if(VAR_13 == 7 && !FUNC_4(VAR_12, "SASL-IR", 7))
        VAR_11->ir_supported = VAR_5;


      else if(VAR_13 > 5 && !FUNC_4(VAR_12, "AUTH=", 5)) {
        size_t VAR_14;
        unsigned int VAR_15;

        VAR_12 += 5;
        VAR_13 -= 5;


        VAR_15 = FUNC_0(VAR_12, VAR_13, &VAR_14);
        if(VAR_15 && VAR_14 == VAR_13)
          VAR_11->sasl.authmechs |= VAR_15;
      }

      VAR_12 += VAR_13;
    }
  }
  else if(VAR_7 == VAR_4) {
    if(VAR_10->set.use_ssl && !VAR_6->ssl[VAR_3].use) {

      if(VAR_11->tls_supported)

        VAR_9 = FUNC_3(VAR_6);
      else if(VAR_10->set.use_ssl == VAR_2)

        VAR_9 = FUNC_2(VAR_6);
      else {
        FUNC_1(VAR_10, "STARTTLS not supported.");
        VAR_9 = VAR_1;
      }
    }
    else
      VAR_9 = FUNC_2(VAR_6);
  }
  else
    VAR_9 = FUNC_2(VAR_6);

  return VAR_9;
}
