
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct Curl_multi {int dummy; } ;
struct TYPE_17__ {int headers; TYPE_7__* probe; } ;
struct TYPE_18__ {TYPE_8__ doh; struct Curl_easy* newurl; } ;
struct TYPE_13__ {int resolver; int * ulbuf; int * headerbuff; int * buffer; int * scratch; int * first_host; struct Curl_easy* range; scalar_t__ rangestringalloc; int timeoutlist; } ;
struct TYPE_12__ {int * wouldredirect; int * contenttype; } ;
struct TYPE_11__ {int * str; } ;
struct TYPE_10__ {int * referer; scalar_t__ referer_alloc; } ;
struct Curl_easy {int wildcard; TYPE_9__ req; TYPE_5__* share; TYPE_4__ state; TYPE_3__ info; int * asi; TYPE_2__ set; TYPE_1__ change; scalar_t__ magic; int * multi_easy; struct Curl_multi* multi; } ;
struct TYPE_15__ {struct Curl_easy* memory; } ;
struct TYPE_16__ {TYPE_6__ serverdoh; } ;
struct TYPE_14__ {int dirty; } ;
typedef int CURLcode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct Curl_easy*) ;
 int FUNC_3 (struct Curl_easy*) ;
 int FUNC_4 (struct Curl_easy*,int ) ;
 int FUNC_5 (struct Curl_easy*) ;
 int FUNC_6 (struct Curl_easy*) ;
 int FUNC_7 (struct Curl_easy*) ;
 int FUNC_8 (struct Curl_easy*) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct Curl_easy*,int ,int ) ;
 int FUNC_13 (struct Curl_easy*,int ) ;
 int FUNC_14 (struct Curl_easy*) ;
 int FUNC_15 (struct Curl_easy*) ;
 int FUNC_16 (int *) ;
 scalar_t__ VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int FUNC_17 (int *) ;
 int FUNC_18 (struct Curl_multi*,struct Curl_easy*) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (struct Curl_easy*) ;
 int FUNC_21 (struct Curl_easy*) ;

CURLcode FUNC_22(struct Curl_easy **VAR_6)
{
  struct Curl_multi *VAR_7;
  struct Curl_easy *VAR_8;

  if(!VAR_6 || !*VAR_6)
    return VAR_0;

  VAR_8 = *VAR_6;
  *VAR_6 = ((void*)0);

  FUNC_3(VAR_8);

  VAR_7 = VAR_8->multi;
  if(VAR_7)


    FUNC_18(VAR_8->multi, VAR_8);

  if(VAR_8->multi_easy) {


    FUNC_17(VAR_8->multi_easy);
    VAR_8->multi_easy = ((void*)0);
  }




  FUNC_9(&VAR_8->state.timeoutlist, ((void*)0));

  VAR_8->magic = 0;



  if(VAR_8->state.rangestringalloc)
    FUNC_20(VAR_8->state.range);


  FUNC_5(VAR_8);


  FUNC_14(VAR_8);
  FUNC_11(VAR_8->state.first_host);
  FUNC_11(VAR_8->state.scratch);
  FUNC_15(VAR_8);


  FUNC_20(VAR_8->req.newurl);
  VAR_8->req.newurl = ((void*)0);

  if(VAR_8->change.referer_alloc) {
    FUNC_11(VAR_8->change.referer);
    VAR_8->change.referer_alloc = VAR_3;
  }
  VAR_8->change.referer = ((void*)0);

  FUNC_21(VAR_8);
  FUNC_11(VAR_8->state.buffer);
  FUNC_11(VAR_8->state.headerbuff);
  FUNC_11(VAR_8->state.ulbuf);
  FUNC_4(VAR_8, VAR_5);






  FUNC_8(VAR_8);

  FUNC_11(VAR_8->info.contenttype);
  FUNC_11(VAR_8->info.wouldredirect);


  FUNC_10(VAR_8->state.resolver);

  FUNC_7(VAR_8);
  FUNC_2(VAR_8);


  if(VAR_8->share) {
    FUNC_12(VAR_8, VAR_2, VAR_1);
    VAR_8->share->dirty--;
    FUNC_13(VAR_8, VAR_2);
  }


  FUNC_20(VAR_8->req.doh.probe[0].serverdoh.memory);
  FUNC_20(VAR_8->req.doh.probe[1].serverdoh.memory);
  FUNC_19(VAR_8->req.doh.headers);



  FUNC_16(&VAR_8->wildcard);
  FUNC_6(VAR_8);
  FUNC_20(VAR_8);
  return VAR_0;
}
