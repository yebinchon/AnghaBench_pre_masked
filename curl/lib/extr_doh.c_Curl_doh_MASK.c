
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct dohdata {int dummy; } ;
struct connectdata {scalar_t__ ip_version; struct Curl_easy* data; } ;
struct TYPE_7__ {char const* host; int port; TYPE_4__* probe; int * headers; int pending; } ;
struct TYPE_6__ {TYPE_3__ doh; } ;
struct TYPE_5__ {int * str; } ;
struct Curl_easy {TYPE_2__ req; int multi; TYPE_1__ set; } ;
struct TYPE_8__ {int easy; } ;
typedef int Curl_addrinfo ;
typedef scalar_t__ CURLcode ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int * FUNC_1 (int *,char*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct Curl_easy*,TYPE_4__*,int ,char const*,int ,int ,int *) ;
 int FUNC_4 (TYPE_3__*,int ,int) ;

Curl_addrinfo *FUNC_5(struct connectdata *VAR_7,
                        const char *VAR_8,
                        int VAR_9,
                        int *VAR_10)
{
  struct Curl_easy *VAR_11 = VAR_7->data;
  CURLcode VAR_12 = VAR_0;
  *VAR_10 = VAR_6;
  (void)VAR_7;
  (void)VAR_8;
  (void)VAR_9;


  FUNC_4(&VAR_11->req.doh, 0, sizeof(struct dohdata));

  VAR_11->req.doh.host = VAR_8;
  VAR_11->req.doh.port = VAR_9;
  VAR_11->req.doh.headers =
    FUNC_1(((void*)0),
                      "Content-Type: application/dns-message");
  if(!VAR_11->req.doh.headers)
    goto error;

  if(VAR_7->ip_version != VAR_2) {

    VAR_12 = FUNC_3(VAR_11, &VAR_11->req.doh.probe[0], VAR_3,
                      VAR_8, VAR_11->set.str[VAR_5],
                      VAR_11->multi, VAR_11->req.doh.headers);
    if(VAR_12)
      goto error;
    VAR_11->req.doh.pending++;
  }

  if(VAR_7->ip_version != VAR_1) {

    VAR_12 = FUNC_3(VAR_11, &VAR_11->req.doh.probe[1], VAR_4,
                      VAR_8, VAR_11->set.str[VAR_5],
                      VAR_11->multi, VAR_11->req.doh.headers);
    if(VAR_12)
      goto error;
    VAR_11->req.doh.pending++;
  }
  return ((void*)0);

  error:
  FUNC_2(VAR_11->req.doh.headers);
  VAR_11->req.doh.headers = ((void*)0);
  FUNC_0(&VAR_11->req.doh.probe[0].easy);
  FUNC_0(&VAR_11->req.doh.probe[1].easy);
  return ((void*)0);
}
