
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ timediff_t ;
struct dohresponse {scalar_t__ size; int * memory; } ;
struct dnsprobe {long dohbuffer; struct Curl_easy* easy; scalar_t__ dohlen; struct dohresponse serverdoh; int dnstype; } ;
struct curl_slist {int dummy; } ;
struct TYPE_8__ {scalar_t__ verifystatus; scalar_t__ verifypeer; scalar_t__ verifyhost; } ;
struct TYPE_9__ {long fsslctx; long fsslctxp; scalar_t__ no_revoke; scalar_t__ certinfo; TYPE_3__ primary; scalar_t__ falsestart; } ;
struct TYPE_6__ {scalar_t__ verifypeer; scalar_t__ verifyhost; } ;
struct TYPE_7__ {scalar_t__ no_revoke; TYPE_1__ primary; } ;
struct TYPE_10__ {long* str; struct Curl_easy* dohfor; int fmultidone; TYPE_4__ ssl; TYPE_2__ proxy_ssl; scalar_t__ no_signal; scalar_t__ verbose; scalar_t__ doh_get; } ;
struct Curl_easy {TYPE_5__ set; } ;
typedef scalar_t__ DOHcode ;
typedef int DNStype ;
typedef scalar_t__ CURLcode ;
typedef int CURLM ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 long VAR_33 ;
 long VAR_34 ;
 long VAR_35 ;
 long VAR_36 ;
 scalar_t__ FUNC_0 (struct Curl_easy*,char*,scalar_t__,char**,size_t*) ;
 int FUNC_1 (struct Curl_easy**) ;
 int VAR_37 ;
 scalar_t__ FUNC_2 (struct Curl_easy**) ;
 scalar_t__ FUNC_3 (struct Curl_easy*,int *,int ) ;
 int FUNC_4 (int ,...) ;
 size_t VAR_38 ;
 size_t VAR_39 ;
 size_t VAR_40 ;
 size_t VAR_41 ;
 size_t VAR_42 ;
 size_t VAR_43 ;
 size_t VAR_44 ;
 size_t VAR_45 ;
 int VAR_46 ;
 char* FUNC_5 (char*,char const*,char*) ;
 scalar_t__ FUNC_6 (int *,struct Curl_easy*) ;
 scalar_t__ FUNC_7 (char const*,int ,long,int,scalar_t__*) ;
 long VAR_47 ;
 int FUNC_8 (struct Curl_easy*,char*,scalar_t__) ;
 int FUNC_9 (char*) ;

__attribute__((used)) static CURLcode FUNC_10(struct Curl_easy *VAR_48,
                         struct dnsprobe *VAR_49, DNStype VAR_50,
                         const char *VAR_51,
                         const char *VAR_52, CURLM *VAR_53,
                         struct curl_slist *VAR_54)
{
  struct Curl_easy *VAR_55 = ((void*)0);
  char *VAR_56 = ((void*)0);
  CURLcode VAR_57 = VAR_0;
  timediff_t VAR_58;
  DOHcode VAR_59 = FUNC_7(VAR_51, VAR_50, VAR_49->dohbuffer, sizeof(VAR_49->dohbuffer),
                         &VAR_49->dohlen);
  if(VAR_59) {
    FUNC_8(VAR_48, "Failed to encode DOH packet [%d]\n", VAR_59);
    return VAR_2;
  }

  VAR_49->dnstype = VAR_50;
  VAR_49->serverdoh.memory = ((void*)0);


  VAR_49->serverdoh.size = 0;




  if(VAR_48->set.doh_get) {
    char *VAR_60;
    size_t VAR_61;
    VAR_57 = FUNC_0(VAR_48, (char *)VAR_49->dohbuffer, VAR_49->dohlen,
                                   &VAR_60, &VAR_61);
    if(VAR_57)
      goto error;
    VAR_56 = FUNC_5("%s?dns=%s", VAR_52, VAR_60);
    FUNC_9(VAR_60);
    if(!VAR_56) {
      VAR_57 = VAR_2;
      goto error;
    }
    VAR_52 = VAR_56;
  }

  VAR_58 = FUNC_3(VAR_48, ((void*)0), VAR_46);
  if(VAR_58 <= 0) {
    VAR_57 = VAR_1;
    goto error;
  }

  VAR_57 = FUNC_2(&VAR_55);
  if(!VAR_57) {


    struct dohresponse *VAR_62 = &VAR_49->serverdoh;
    FUNC_4(VAR_29, VAR_52);
    FUNC_4(VAR_32, VAR_47);
    FUNC_4(VAR_31, VAR_62);
    if(!VAR_48->set.doh_get) {
      FUNC_4(VAR_11, VAR_49->dohbuffer);
      FUNC_4(VAR_12, (long)VAR_49->dohlen);
    }
    FUNC_4(VAR_8, VAR_54);





    FUNC_4(VAR_13, VAR_34);




    FUNC_4(VAR_28, (long)VAR_58);
    if(VAR_48->set.verbose)
      FUNC_4(VAR_30, 1L);
    if(VAR_48->set.no_signal)
      FUNC_4(VAR_10, 1L);



    if(VAR_48->set.ssl.falsestart)
      FUNC_4(VAR_23, 1L);
    if(VAR_48->set.ssl.primary.verifyhost)
      FUNC_4(VAR_25, 2L);
    if(VAR_48->set.proxy_ssl.primary.verifyhost)
      FUNC_4(VAR_18, 2L);
    if(VAR_48->set.ssl.primary.verifypeer)
      FUNC_4(VAR_26, 1L);
    if(VAR_48->set.proxy_ssl.primary.verifypeer)
      FUNC_4(VAR_19, 1L);
    if(VAR_48->set.ssl.primary.verifystatus)
      FUNC_4(VAR_27, 1L);
    if(VAR_48->set.str[VAR_38]) {
      FUNC_4(VAR_3,
        VAR_48->set.str[VAR_38]);
    }
    if(VAR_48->set.str[VAR_39]) {
      FUNC_4(VAR_14,
        VAR_48->set.str[VAR_39]);
    }
    if(VAR_48->set.str[VAR_40]) {
      FUNC_4(VAR_4,
        VAR_48->set.str[VAR_40]);
    }
    if(VAR_48->set.str[VAR_41]) {
      FUNC_4(VAR_15,
        VAR_48->set.str[VAR_41]);
    }
    if(VAR_48->set.str[VAR_42]) {
      FUNC_4(VAR_6,
        VAR_48->set.str[VAR_42]);
    }
    if(VAR_48->set.str[VAR_43]) {
      FUNC_4(VAR_16,
        VAR_48->set.str[VAR_43]);
    }
    if(VAR_48->set.ssl.certinfo)
      FUNC_4(VAR_5, 1L);
    if(VAR_48->set.str[VAR_45]) {
      FUNC_4(VAR_20,
        VAR_48->set.str[VAR_45]);
    }
    if(VAR_48->set.str[VAR_44]) {
      FUNC_4(VAR_7,
        VAR_48->set.str[VAR_44]);
    }
    if(VAR_48->set.ssl.no_revoke)
      FUNC_4(VAR_24, VAR_35);
    if(VAR_48->set.proxy_ssl.no_revoke)
      FUNC_4(VAR_17, VAR_35);
    if(VAR_48->set.ssl.fsslctx)
      FUNC_4(VAR_22, VAR_48->set.ssl.fsslctx);
    if(VAR_48->set.ssl.fsslctxp)
      FUNC_4(VAR_21, VAR_48->set.ssl.fsslctxp);

    VAR_55->set.fmultidone = VAR_37;
    VAR_55->set.dohfor = VAR_48;
    VAR_49->easy = VAR_55;


    if(FUNC_6(VAR_53, VAR_55))
      goto error;
  }
  else
    goto error;
  FUNC_9(VAR_56);
  return VAR_0;

  error:
  FUNC_9(VAR_56);
  FUNC_1(&VAR_55);
  return VAR_57;
}
