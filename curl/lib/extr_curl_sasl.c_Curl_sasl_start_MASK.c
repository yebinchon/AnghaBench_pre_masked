
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ user_passwd; } ;
struct TYPE_11__ {char* name; } ;
struct TYPE_9__ {char* name; } ;
struct TYPE_10__ {TYPE_1__ host; } ;
struct connectdata {long port; long remote_port; int user; int * passwd; int sasl_authzid; int oauth_bearer; int ntlm; int krb5; TYPE_5__ bits; TYPE_3__ host; TYPE_2__ http_proxy; struct Curl_easy* data; } ;
struct SASL {int force_ir; unsigned int authused; unsigned int authmechs; unsigned int prefmech; TYPE_4__* params; int mutual_auth; } ;
struct TYPE_16__ {char** str; scalar_t__ sasl_ir; } ;
struct Curl_easy {TYPE_8__ set; TYPE_7__* conn; } ;
typedef int saslstate ;
typedef int saslprogress ;
struct TYPE_14__ {int name; } ;
struct TYPE_15__ {TYPE_6__ host; } ;
struct TYPE_12__ {char* service; scalar_t__ maxirlen; scalar_t__ (* sendauth ) (struct connectdata*,char const*,char*) ;} ;
typedef scalar_t__ CURLcode ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct Curl_easy*,int ,char**,size_t*) ;
 scalar_t__ FUNC_1 (struct Curl_easy*,int ,int *,char const*,int ,int ,int *,int *,char**,size_t*) ;
 scalar_t__ FUNC_2 (struct Curl_easy*,int ,char**,size_t*) ;
 scalar_t__ FUNC_3 (struct Curl_easy*,int ,int *,char const*,char const* const,int *,char**,size_t*) ;
 scalar_t__ FUNC_4 (struct Curl_easy*,int ,char const* const,long const,int ,char**,size_t*) ;
 scalar_t__ FUNC_5 (struct Curl_easy*,int ,int ,int *,char**,size_t*) ;
 scalar_t__ FUNC_6 (struct Curl_easy*,int ,int ,char**,size_t*) ;
 scalar_t__ FUNC_7 () ;
 scalar_t__ FUNC_8 () ;
 scalar_t__ FUNC_9 () ;
 scalar_t__ FUNC_10 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 unsigned int VAR_16 ;
 unsigned int VAR_17 ;
 unsigned int VAR_18 ;
 unsigned int VAR_19 ;
 char* VAR_20 ;
 char* VAR_21 ;
 char* VAR_22 ;
 char* VAR_23 ;
 char* VAR_24 ;
 char* VAR_25 ;
 char* VAR_26 ;
 char* VAR_27 ;
 char* VAR_28 ;
 unsigned int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 scalar_t__ FUNC_11 () ;
 size_t VAR_36 ;
 int FUNC_12 (char*) ;
 int FUNC_13 (struct SASL*,struct connectdata*,int ) ;
 scalar_t__ FUNC_14 (char const*) ;
 scalar_t__ FUNC_15 (struct connectdata*,char const*,char*) ;

CURLcode FUNC_16(struct SASL *VAR_37, struct connectdata *VAR_38,
                         bool VAR_39, saslprogress *VAR_40)
{
  CURLcode VAR_41 = VAR_0;
  struct Curl_easy *VAR_42 = VAR_38->data;
  unsigned int VAR_43;
  const char *VAR_44 = ((void*)0);
  char *VAR_45 = ((void*)0);
  size_t VAR_46 = 0;
  saslstate VAR_47 = VAR_35;
  saslstate VAR_48 = VAR_5;
  const char * const VAR_49 = FUNC_11() ? VAR_38->http_proxy.host.name :
    VAR_38->host.name;
  const long int VAR_50 = FUNC_11() ? VAR_38->port : VAR_38->remote_port;






  VAR_37->force_ir = VAR_39;
  VAR_37->authused = 0;
  VAR_43 = VAR_37->authmechs & VAR_37->prefmech;
  *VAR_40 = VAR_8;



  if((VAR_43 & VAR_14) && !VAR_38->passwd[0]) {
    VAR_44 = VAR_22;
    VAR_47 = VAR_4;
    VAR_37->authused = VAR_14;

    if(VAR_39 || VAR_42->set.sasl_ir)
      VAR_41 = FUNC_0(VAR_42, VAR_38->user, &VAR_45,
                                                 &VAR_46);
  }
  else if(VAR_38->bits.user_passwd) {
    if((VAR_43 & VAR_13) &&
       FUNC_7()) {
      VAR_44 = VAR_21;
      VAR_47 = VAR_3;
      VAR_37->authused = VAR_13;
    }
    else if(VAR_43 & VAR_12) {
      VAR_44 = VAR_20;
      VAR_47 = VAR_2;
      VAR_37->authused = VAR_12;
    }
    else
    if((VAR_43 & VAR_18) && VAR_38->oauth_bearer) {
      VAR_44 = VAR_26;
      VAR_47 = VAR_32;
      VAR_48 = VAR_33;
      VAR_37->authused = VAR_18;

      if(VAR_39 || VAR_42->set.sasl_ir)
        VAR_41 = FUNC_4(VAR_42, VAR_38->user,
                                                       VAR_49,
                                                       VAR_50,
                                                       VAR_38->oauth_bearer,
                                                       &VAR_45, &VAR_46);
    }
    else if((VAR_43 & VAR_29) && VAR_38->oauth_bearer) {
      VAR_44 = VAR_28;
      VAR_47 = VAR_32;
      VAR_37->authused = VAR_29;

      if(VAR_39 || VAR_42->set.sasl_ir)
        VAR_41 = FUNC_6(VAR_42, VAR_38->user,
                                                        VAR_38->oauth_bearer,
                                                        &VAR_45, &VAR_46);
    }
    else if(VAR_43 & VAR_19) {
      VAR_44 = VAR_27;
      VAR_47 = VAR_34;
      VAR_37->authused = VAR_19;

      if(VAR_39 || VAR_42->set.sasl_ir)
        VAR_41 = FUNC_5(VAR_42, VAR_38->sasl_authzid,
                                                VAR_38->user, VAR_38->passwd,
                                                &VAR_45, &VAR_46);
    }
    else if(VAR_43 & VAR_16) {
      VAR_44 = VAR_24;
      VAR_47 = VAR_10;
      VAR_48 = VAR_11;
      VAR_37->authused = VAR_16;

      if(VAR_39 || VAR_42->set.sasl_ir)
        VAR_41 = FUNC_2(VAR_42, VAR_38->user, &VAR_45, &VAR_46);
    }
  }

  if(!VAR_41 && VAR_44) {
    if(VAR_45 && VAR_37->params->maxirlen &&
       FUNC_14(VAR_44) + VAR_46 > VAR_37->params->maxirlen) {
      FUNC_12(VAR_45);
      VAR_45 = ((void*)0);
    }

    VAR_41 = VAR_37->params->sendauth(VAR_38, VAR_44, VAR_45);
    if(!VAR_41) {
      *VAR_40 = VAR_9;
      FUNC_13(VAR_37, VAR_38, VAR_45 ? VAR_48 : VAR_47);
    }
  }

  FUNC_12(VAR_45);

  return VAR_41;
}
