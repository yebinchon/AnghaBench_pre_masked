
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct curl_slist {int dummy; } ;
struct connectdata {TYPE_1__* handler; struct Curl_easy* data; } ;
struct SingleRequest {scalar_t__ upload_fromhere; void* upload_done; scalar_t__ upload_chunky; int forbidchunk; int keepon; struct HTTP* protop; } ;
struct HTTP {scalar_t__ sending; } ;
struct TYPE_5__ {int (* trailer_callback ) (struct curl_slist**,int *) ;scalar_t__ prefer_ascii; int * trailer_data; scalar_t__ crlf; } ;
struct TYPE_6__ {scalar_t__ trailers_state; size_t (* fread_func ) (scalar_t__,int,size_t,void*) ;int trailers_buf; void* in; scalar_t__ trailers_bytes_sent; } ;
struct Curl_easy {struct SingleRequest req; TYPE_2__ set; TYPE_3__ state; } ;
typedef int hexbuffer ;
typedef size_t (* curl_read_callback ) (scalar_t__,int,size_t,void*) ;
struct TYPE_4__ {int protocol; int flags; } ;
typedef scalar_t__ CURLcode ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (struct Curl_easy*,scalar_t__,size_t) ;
 scalar_t__ FUNC_3 (struct curl_slist*,int *,struct Curl_easy*) ;
 int FUNC_4 (struct Curl_easy*,int) ;
 int FUNC_5 (struct Curl_easy*) ;
 size_t FUNC_6 (scalar_t__,int,size_t,void*) ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 void* VAR_17 ;
 int FUNC_7 (struct curl_slist*) ;
 int FUNC_8 (struct Curl_easy*,char*) ;
 int FUNC_9 (struct Curl_easy*,char*) ;
 int FUNC_10 (scalar_t__,char const*,size_t) ;
 int FUNC_11 (char*,int,char*,size_t,char const*) ;
 size_t FUNC_12 (char const*) ;
 int FUNC_13 (struct curl_slist**,int *) ;

CURLcode FUNC_14(struct connectdata *VAR_18, size_t VAR_19,
                             size_t *VAR_20)
{
  struct Curl_easy *VAR_21 = VAR_18->data;
  size_t VAR_22 = VAR_19;
  size_t VAR_23;

  curl_read_callback VAR_24 = ((void*)0);
  void *VAR_25 = ((void*)0);
  if(VAR_21->state.trailers_state == VAR_14) {
    struct curl_slist *VAR_26 = ((void*)0);
    CURLcode VAR_27;
    int VAR_28;



    FUNC_9(VAR_21,
          "Moving trailers state machine from initialized to sending.\n");
    VAR_21->state.trailers_state = VAR_16;
    VAR_21->state.trailers_buf = FUNC_1();
    if(!VAR_21->state.trailers_buf) {
      FUNC_8(VAR_21, "Unable to allocate trailing headers buffer !");
      return VAR_2;
    }
    VAR_21->state.trailers_bytes_sent = 0;
    FUNC_4(VAR_21, 1);
    VAR_28 = VAR_21->set.trailer_callback(&VAR_26,
                                                   VAR_21->set.trailer_data);
    FUNC_4(VAR_21, 0);
    if(VAR_28 == VAR_7) {
      VAR_27 = FUNC_3(VAR_26, &VAR_21->state.trailers_buf,
                                          VAR_21);
    }
    else {
      FUNC_8(VAR_21, "operation aborted by trailing headers callback");
      *VAR_20 = 0;
      VAR_27 = VAR_0;
    }
    if(VAR_27) {
      FUNC_0(&VAR_21->state.trailers_buf);
      FUNC_7(VAR_26);
      return VAR_27;
    }
    FUNC_9(VAR_21, "Successfully compiled trailers.\r\n");
    FUNC_7(VAR_26);
  }




  if(VAR_21->req.upload_chunky &&
     VAR_21->state.trailers_state == VAR_15) {

    VAR_22 -= (8 + 2 + 2);
    VAR_21->req.upload_fromhere += (8 + 2);
  }


  if(VAR_21->state.trailers_state == VAR_16) {






    VAR_24 = FUNC_6;
    VAR_25 = (void *)VAR_21;
  }
  else

  {
    VAR_24 = VAR_21->state.fread_func;
    VAR_25 = VAR_21->state.in;
  }

  FUNC_4(VAR_21, 1);
  VAR_23 = VAR_24(VAR_21->req.upload_fromhere, 1,
                   VAR_22, VAR_25);
  FUNC_4(VAR_21, 0);

  if(VAR_23 == VAR_5) {
    FUNC_8(VAR_21, "operation aborted by callback");
    *VAR_20 = 0;
    return VAR_0;
  }
  if(VAR_23 == VAR_6) {
    struct SingleRequest *VAR_29 = &VAR_21->req;

    if(VAR_18->handler->flags & VAR_11) {



      FUNC_8(VAR_21, "Read callback asked for PAUSE when not supported!");
      return VAR_3;
    }


    VAR_29->keepon |= VAR_10;
    if(VAR_21->req.upload_chunky) {

      VAR_21->req.upload_fromhere -= (8 + 2);
    }
    *VAR_20 = 0;

    return VAR_1;
  }
  else if(VAR_23 > VAR_22) {

    *VAR_20 = 0;
    FUNC_8(VAR_21, "read function returned funny value");
    return VAR_3;
  }

  if(!VAR_21->req.forbidchunk && VAR_21->req.upload_chunky) {
    bool VAR_30 = VAR_8;
    int VAR_31 = 0;
    const char *VAR_32;
    const char *VAR_33;

    if(



       (VAR_21->set.crlf)) {

      VAR_32 = "\n";
      VAR_33 = "\x0a";
    }
    else {
      VAR_32 = "\r\n";
      VAR_33 = "\x0d\x0a";
    }


    if(VAR_21->state.trailers_state != VAR_16) {
      char VAR_34[11] = "";
      VAR_31 = FUNC_11(VAR_34, sizeof(VAR_34),
                         "%zx%s", VAR_23, VAR_32);


      VAR_21->req.upload_fromhere -= VAR_31;
      VAR_23 += VAR_31;


      FUNC_10(VAR_21->req.upload_fromhere, VAR_34, VAR_31);




      if((VAR_23-VAR_31) == 0 &&
          VAR_21->set.trailer_callback != ((void*)0) &&
          VAR_21->state.trailers_state == VAR_15) {
        VAR_21->state.trailers_state = VAR_14;
      }
      else

      {
        FUNC_10(VAR_21->req.upload_fromhere + VAR_23,
               VAR_33,
               FUNC_12(VAR_33));
        VAR_30 = VAR_17;
      }
    }
    if(VAR_21->state.trailers_state == VAR_16 &&
       !FUNC_5(VAR_21)) {
      FUNC_0(&VAR_21->state.trailers_buf);
      VAR_21->state.trailers_state = VAR_13;
      VAR_21->set.trailer_data = ((void*)0);
      VAR_21->set.trailer_callback = ((void*)0);

      VAR_21->req.upload_done = VAR_17;
      FUNC_9(VAR_21, "Signaling end of chunked upload after trailers.\n");
    }
    else

      if((VAR_23 - VAR_31) == 0 &&
         VAR_21->state.trailers_state != VAR_14) {

        VAR_21->req.upload_done = VAR_17;
        FUNC_9(VAR_21,
              "Signaling end of chunked upload via terminating chunk.\n");
      }

    if(VAR_30)
      VAR_23 += FUNC_12(VAR_33);
  }
  *VAR_20 = VAR_23;

  return VAR_1;
}
