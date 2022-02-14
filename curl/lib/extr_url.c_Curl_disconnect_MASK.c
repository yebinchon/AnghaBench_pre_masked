
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ connect_only; } ;
struct connectdata {TYPE_2__* handler; TYPE_1__ bits; struct Curl_easy* data; int * dns_entry; } ;
struct Curl_easy {int dummy; } ;
struct TYPE_4__ {int (* disconnect ) (struct connectdata*,int) ;} ;
typedef int CURLcode ;


 scalar_t__ FUNC_0 (struct connectdata*) ;
 int VAR_0 ;
 int FUNC_1 (struct Curl_easy*) ;
 int FUNC_2 (struct connectdata*) ;
 int FUNC_3 (struct connectdata*) ;
 int FUNC_4 (struct Curl_easy*,int *) ;
 int FUNC_5 (int ) ;
 int VAR_1 ;
 int FUNC_6 (struct connectdata*) ;
 int FUNC_7 (struct connectdata*) ;
 int FUNC_8 (struct Curl_easy*,char*,...) ;
 int FUNC_9 (struct connectdata*,int) ;

CURLcode FUNC_10(struct Curl_easy *VAR_2,
                         struct connectdata *VAR_3, bool VAR_4)
{
  if(!VAR_3)
    return VAR_0;

  if(!VAR_2) {
    FUNC_5(FUNC_8(VAR_2, "DISCONNECT without easy handle, ignoring\n"));
    return VAR_0;
  }





  if(FUNC_0(VAR_3) && !VAR_4) {
    FUNC_5(FUNC_8(VAR_2, "Curl_disconnect when inuse: %zu\n", FUNC_0(VAR_3)));
    return VAR_0;
  }

  if(VAR_3->dns_entry != ((void*)0)) {
    FUNC_4(VAR_2, VAR_3->dns_entry);
    VAR_3->dns_entry = ((void*)0);
  }

  FUNC_1(VAR_2);
  VAR_3->data = VAR_2;

  if(VAR_3->bits.connect_only)

    VAR_4 = VAR_1;

  if(VAR_3->handler->disconnect)

    VAR_3->handler->disconnect(VAR_3, VAR_4);

  FUNC_7(VAR_3);
  FUNC_6(VAR_3);
  return VAR_0;
}
