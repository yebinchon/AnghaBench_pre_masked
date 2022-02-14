
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct connectdata {struct Curl_easy* data; } ;
struct TYPE_4__ {int (* resolver_start ) (int ,int *,int ) ;scalar_t__* str; scalar_t__ doh; int resolver_start_client; } ;
struct TYPE_3__ {int resolver; } ;
struct Curl_easy {scalar_t__ share; TYPE_2__ set; TYPE_1__ state; } ;
struct Curl_dns_entry {int inuse; } ;
typedef int Curl_addrinfo ;
typedef scalar_t__ CURLcode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct Curl_dns_entry* FUNC_0 (struct Curl_easy*,int *,char const*,int) ;
 int * FUNC_1 (struct connectdata*,char const*,int,int*) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (struct connectdata*,char*,int,int*) ;
 int FUNC_4 (struct connectdata*) ;
 scalar_t__ FUNC_5 (struct connectdata*,struct Curl_dns_entry**) ;
 int FUNC_6 (struct Curl_easy*,int) ;
 int FUNC_7 (struct Curl_easy*,int ,int ) ;
 int FUNC_8 (struct Curl_easy*,int ) ;
 size_t VAR_5 ;
 struct Curl_dns_entry* FUNC_9 (struct connectdata*,char const*,int) ;
 int FUNC_10 (struct Curl_easy*,char*,char const*) ;
 int FUNC_11 (scalar_t__,char*) ;
 int FUNC_12 (int ,int *,int ) ;

int FUNC_13(struct connectdata *VAR_6,
                const char *VAR_7,
                int VAR_8,
                bool VAR_9,
                struct Curl_dns_entry **VAR_10)
{
  struct Curl_dns_entry *VAR_11 = ((void*)0);
  struct Curl_easy *VAR_12 = VAR_6->data;
  CURLcode VAR_13;
  int VAR_14 = VAR_0;

  *VAR_10 = ((void*)0);

  if(VAR_12->share)
    FUNC_7(VAR_12, VAR_4, VAR_3);

  VAR_11 = FUNC_9(VAR_6, VAR_7, VAR_8);

  if(VAR_11) {
    FUNC_10(VAR_12, "Hostname %s was found in DNS cache\n", VAR_7);
    VAR_11->inuse++;
    VAR_14 = VAR_2;
  }

  if(VAR_12->share)
    FUNC_8(VAR_12, VAR_4);

  if(!VAR_11) {


    Curl_addrinfo *VAR_15;
    int VAR_16 = 0;



    if(!FUNC_4(VAR_6))
      return VAR_0;


    if(VAR_12->set.resolver_start) {
      int VAR_17;
      FUNC_6(VAR_12, 1);
      VAR_17 = VAR_12->set.resolver_start(VAR_12->state.resolver, ((void*)0),
                                    VAR_12->set.resolver_start_client);
      FUNC_6(VAR_12, 0);
      if(VAR_17)
        return VAR_0;
    }

    if(VAR_9 && VAR_12->set.doh) {
      VAR_15 = FUNC_1(VAR_6, VAR_7, VAR_8, &VAR_16);
    }
    else {



      VAR_15 = FUNC_3(VAR_6,





                              VAR_7, VAR_8, &VAR_16);
    }
    if(!VAR_15) {
      if(VAR_16) {



        VAR_13 = FUNC_5(VAR_6, &VAR_11);
        if(VAR_13)
          return VAR_0;
        if(VAR_11)
          VAR_14 = VAR_2;
        else
          VAR_14 = VAR_1;
      }
    }
    else {
      if(VAR_12->share)
        FUNC_7(VAR_12, VAR_4, VAR_3);


      VAR_11 = FUNC_0(VAR_12, VAR_15, VAR_7, VAR_8);

      if(VAR_12->share)
        FUNC_8(VAR_12, VAR_4);

      if(!VAR_11)

        FUNC_2(VAR_15);
      else
        VAR_14 = VAR_2;
    }
  }

  *VAR_10 = VAR_11;

  return VAR_14;
}
