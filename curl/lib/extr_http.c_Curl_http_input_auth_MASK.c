
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct connectdata {int http_negotiate_state; int proxy_negotiate_state; struct Curl_easy* data; } ;
struct auth {unsigned long avail; unsigned long picked; } ;
struct TYPE_8__ {void* authproblem; struct auth authhost; struct auth authproxy; } ;
struct TYPE_7__ {scalar_t__ newurl; } ;
struct TYPE_6__ {int url; } ;
struct TYPE_5__ {unsigned long proxyauthavail; unsigned long httpauthavail; } ;
struct Curl_easy {TYPE_4__ state; TYPE_3__ req; TYPE_2__ change; TYPE_1__ info; } ;
typedef int curlnegotiate ;
typedef scalar_t__ CURLcode ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 void* VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 (struct connectdata*,int,char const*) ;
 scalar_t__ FUNC_4 (struct connectdata*,int,char const*) ;
 scalar_t__ FUNC_5 (struct connectdata*,int,char const*) ;
 scalar_t__ FUNC_6 (struct connectdata*,int,char const*) ;
 int FUNC_7 (int) ;
 void* VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_8 (char const) ;
 void* VAR_11 ;
 scalar_t__ FUNC_9 (char*,char const*) ;
 int FUNC_10 (struct Curl_easy*,char*) ;
 scalar_t__ FUNC_11 (int ) ;

CURLcode FUNC_12(struct connectdata *VAR_12, bool VAR_13,
                              const char *VAR_14)
{



  struct Curl_easy *VAR_15 = VAR_12->data;





  unsigned long *VAR_16;
  struct auth *VAR_17;

  if(VAR_13) {
    VAR_16 = &VAR_15->info.proxyauthavail;
    VAR_17 = &VAR_15->state.authproxy;
  }
  else {
    VAR_16 = &VAR_15->info.httpauthavail;
    VAR_17 = &VAR_15->state.authhost;
  }
  while(*VAR_14) {
        if(FUNC_9("Digest", VAR_14)) {
          if((VAR_17->avail & VAR_2) != 0)
            FUNC_10(VAR_15, "Ignoring duplicate digest auth header.\n");
          else if(FUNC_0()) {
            CURLcode VAR_18;

            *VAR_16 |= VAR_2;
            VAR_17->avail |= VAR_2;





            VAR_18 = FUNC_3(VAR_12, VAR_13, VAR_14);
            if(VAR_18) {
              FUNC_10(VAR_15, "Authentication problem. Ignoring this.\n");
              VAR_15->state.authproblem = VAR_11;
            }
          }
        }
        else

          if(FUNC_9("Basic", VAR_14)) {
            *VAR_16 |= VAR_0;
            VAR_17->avail |= VAR_0;
            if(VAR_17->picked == VAR_0) {



              VAR_17->avail = VAR_4;
              FUNC_10(VAR_15, "Authentication problem. Ignoring this.\n");
              VAR_15->state.authproblem = VAR_11;
            }
          }
          else
            if(FUNC_9("Bearer", VAR_14)) {
              *VAR_16 |= VAR_1;
              VAR_17->avail |= VAR_1;
              if(VAR_17->picked == VAR_1) {


                VAR_17->avail = VAR_4;
                FUNC_10(VAR_15, "Authentication problem. Ignoring this.\n");
                VAR_15->state.authproblem = VAR_11;
              }
            }


    while(*VAR_14 && *VAR_14 != ',')
      VAR_14++;
    if(*VAR_14 == ',')
      VAR_14++;
    while(*VAR_14 && FUNC_8(*VAR_14))
      VAR_14++;
  }

  return VAR_7;
}
