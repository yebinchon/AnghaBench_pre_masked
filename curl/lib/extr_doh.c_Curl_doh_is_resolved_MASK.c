
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct dohentry {int dummy; } ;
struct TYPE_12__ {struct Curl_dns_entry* dns; int hostname; } ;
struct TYPE_7__ {scalar_t__ proxy; } ;
struct connectdata {TYPE_6__ async; TYPE_1__ bits; struct Curl_easy* data; } ;
struct TYPE_10__ {int port; int host; TYPE_3__* probe; int pending; } ;
struct TYPE_11__ {TYPE_4__ doh; } ;
struct Curl_easy {scalar_t__ share; TYPE_5__ req; int multi; } ;
struct Curl_dns_entry {int dummy; } ;
struct Curl_addrinfo {int dummy; } ;
struct TYPE_8__ {int memory; int size; } ;
struct TYPE_9__ {int dnstype; TYPE_2__ serverdoh; int easy; } ;
typedef scalar_t__ DOHcode ;
typedef int CURLcode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct Curl_dns_entry* FUNC_0 (struct Curl_easy*,struct Curl_addrinfo*,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct Curl_addrinfo*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct Curl_easy*,int ,int ) ;
 int FUNC_5 (struct Curl_easy*,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (struct dohentry*) ;
 struct Curl_addrinfo* FUNC_8 (struct dohentry*,int ,int ) ;
 scalar_t__ FUNC_9 (int ,int ,int ,struct dohentry*) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (struct Curl_easy*,char*,int ) ;
 int FUNC_12 (struct Curl_easy*,char*,int ,...) ;
 int FUNC_13 (struct dohentry*) ;
 int FUNC_14 (struct Curl_easy*,struct dohentry*) ;
 int FUNC_15 (int ) ;

CURLcode FUNC_16(struct connectdata *VAR_6,
                              struct Curl_dns_entry **VAR_7)
{
  struct Curl_easy *VAR_8 = VAR_6->data;
  *VAR_7 = ((void*)0);

  if(!VAR_8->req.doh.probe[0].easy && !VAR_8->req.doh.probe[1].easy) {
    FUNC_11(VAR_8, "Could not DOH-resolve: %s", VAR_6->async.hostname);
    return VAR_6->bits.proxy?VAR_1:
      VAR_0;
  }
  else if(!VAR_8->req.doh.pending) {
    DOHcode VAR_9;
    DOHcode VAR_10;
    struct dohentry VAR_11;

    FUNC_6(VAR_8->multi, VAR_8->req.doh.probe[0].easy);
    FUNC_1(&VAR_8->req.doh.probe[0].easy);
    FUNC_6(VAR_8->multi, VAR_8->req.doh.probe[1].easy);
    FUNC_1(&VAR_8->req.doh.probe[1].easy);

    FUNC_13(&VAR_11);
    VAR_9 = FUNC_9(VAR_8->req.doh.probe[0].serverdoh.memory,
                    VAR_8->req.doh.probe[0].serverdoh.size,
                    VAR_8->req.doh.probe[0].dnstype,
                    &VAR_11);
    FUNC_3(VAR_8->req.doh.probe[0].serverdoh.memory);
    if(VAR_9) {
      FUNC_12(VAR_8, "DOH: %s type %s for %s\n", FUNC_10(VAR_9),
            FUNC_15(VAR_8->req.doh.probe[0].dnstype),
            VAR_8->req.doh.host);
    }
    VAR_10 = FUNC_9(VAR_8->req.doh.probe[1].serverdoh.memory,
                     VAR_8->req.doh.probe[1].serverdoh.size,
                     VAR_8->req.doh.probe[1].dnstype,
                     &VAR_11);
    FUNC_3(VAR_8->req.doh.probe[1].serverdoh.memory);
    if(VAR_10) {
      FUNC_12(VAR_8, "DOH: %s type %s for %s\n", FUNC_10(VAR_10),
            FUNC_15(VAR_8->req.doh.probe[1].dnstype),
            VAR_8->req.doh.host);
    }
    if(!VAR_9 || !VAR_10) {
      struct Curl_dns_entry *VAR_12;
      struct Curl_addrinfo *VAR_13;

      FUNC_12(VAR_8, "DOH Host name: %s\n", VAR_8->req.doh.host);
      FUNC_14(VAR_8, &VAR_11);

      VAR_13 = FUNC_8(&VAR_11, VAR_8->req.doh.host, VAR_8->req.doh.port);
      if(!VAR_13) {
        FUNC_7(&VAR_11);
        return VAR_3;
      }

      if(VAR_8->share)
        FUNC_4(VAR_8, VAR_5, VAR_4);


      VAR_12 = FUNC_0(VAR_8, VAR_13, VAR_8->req.doh.host, VAR_8->req.doh.port);

      if(VAR_8->share)
        FUNC_5(VAR_8, VAR_5);

      FUNC_7(&VAR_11);
      if(!VAR_12)

        FUNC_2(VAR_13);
      else {
        VAR_6->async.dns = VAR_12;
        *VAR_7 = VAR_12;
        return VAR_2;
      }
    }
    FUNC_7(&VAR_11);

    return VAR_0;
  }

  return VAR_2;
}
