
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {void* referer; void* url; int * cookielist; void* referer_alloc; void* url_alloc; } ;
struct TYPE_9__ {void* headerbuff; void* buffer; int resolver; int * lastconnect; int * conn_cache; scalar_t__ headersize; } ;
struct TYPE_8__ {scalar_t__* str; int cookiesession; scalar_t__ buffer_size; } ;
struct TYPE_7__ {int callback; int flags; } ;
struct Curl_easy {TYPE_4__ change; TYPE_3__ state; int magic; TYPE_2__ set; TYPE_5__* cookies; TYPE_1__ progress; } ;
struct TYPE_11__ {int filename; } ;


 int VAR_0 ;
 int FUNC_0 (struct Curl_easy*) ;
 TYPE_5__* FUNC_1 (struct Curl_easy*,int ,TYPE_5__*,int ) ;
 int FUNC_2 (struct Curl_easy*) ;
 int FUNC_3 (struct Curl_easy*) ;
 scalar_t__ FUNC_4 (struct Curl_easy*,int *,int ) ;
 int FUNC_5 (void*) ;
 int * FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (struct Curl_easy*,scalar_t__) ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 void* VAR_3 ;
 struct Curl_easy* FUNC_8 (int,int) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (struct Curl_easy*,struct Curl_easy*) ;
 int FUNC_11 (struct Curl_easy*) ;
 void* FUNC_12 (scalar_t__) ;
 void* FUNC_13 (void*) ;

struct Curl_easy *FUNC_14(struct Curl_easy *VAR_4)
{
  struct Curl_easy *VAR_5 = FUNC_8(1, sizeof(struct Curl_easy));
  if(((void*)0) == VAR_5)
    goto fail;






  VAR_5->set.buffer_size = VAR_4->set.buffer_size;
  VAR_5->state.buffer = FUNC_12(VAR_5->set.buffer_size + 1);
  if(!VAR_5->state.buffer)
    goto fail;

  VAR_5->state.headerbuff = FUNC_12(VAR_1);
  if(!VAR_5->state.headerbuff)
    goto fail;
  VAR_5->state.headersize = VAR_1;


  if(FUNC_10(VAR_5, VAR_4))
    goto fail;


  VAR_5->state.conn_cache = ((void*)0);

  VAR_5->state.lastconnect = ((void*)0);

  VAR_5->progress.flags = VAR_4->progress.flags;
  VAR_5->progress.callback = VAR_4->progress.callback;

  if(VAR_4->cookies) {


    VAR_5->cookies = FUNC_1(VAR_4,
                                        VAR_4->cookies->filename,
                                        VAR_5->cookies,
                                        VAR_4->set.cookiesession);
    if(!VAR_5->cookies)
      goto fail;
  }


  if(VAR_4->change.cookielist) {
    VAR_5->change.cookielist =
      FUNC_6(VAR_4->change.cookielist);
    if(!VAR_5->change.cookielist)
      goto fail;
  }

  if(VAR_4->change.url) {
    VAR_5->change.url = FUNC_13(VAR_4->change.url);
    if(!VAR_5->change.url)
      goto fail;
    VAR_5->change.url_alloc = VAR_3;
  }

  if(VAR_4->change.referer) {
    VAR_5->change.referer = FUNC_13(VAR_4->change.referer);
    if(!VAR_5->change.referer)
      goto fail;
    VAR_5->change.referer_alloc = VAR_3;
  }



  if(VAR_5->set.str[VAR_2]) {
    if(FUNC_7(VAR_5, VAR_5->set.str[VAR_2]))
      goto fail;
  }


  if(FUNC_4(VAR_5,
                             &VAR_5->state.resolver,
                             VAR_4->state.resolver))
    goto fail;

  FUNC_0(VAR_5);

  FUNC_3(VAR_5);

  VAR_5->magic = VAR_0;



  return VAR_5;

  fail:

  if(VAR_5) {
    FUNC_9(VAR_5->change.cookielist);
    VAR_5->change.cookielist = ((void*)0);
    FUNC_5(VAR_5->state.buffer);
    FUNC_5(VAR_5->state.headerbuff);
    FUNC_5(VAR_5->change.url);
    FUNC_5(VAR_5->change.referer);
    FUNC_2(VAR_5);
    FUNC_11(VAR_5);
  }

  return ((void*)0);
}
