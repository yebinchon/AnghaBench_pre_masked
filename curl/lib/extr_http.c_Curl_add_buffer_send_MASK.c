
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ proxytype; } ;
struct connectdata {int httpversion; TYPE_2__ http_proxy; TYPE_1__* handler; int * sock; struct Curl_easy* data; } ;
struct TYPE_14__ {char* postdata; long postsize; void* fread_in; scalar_t__ fread_func; } ;
struct HTTP {char* postdata; long postsize; int sending; TYPE_7__* send_buffer; TYPE_5__ backup; } ;
struct TYPE_15__ {char* ulbuf; void* in; scalar_t__ fread_func; } ;
struct TYPE_13__ {size_t writebytecount; struct HTTP* protop; } ;
struct TYPE_12__ {scalar_t__ verbose; } ;
struct Curl_easy {TYPE_6__ state; TYPE_4__ req; TYPE_3__ set; } ;
typedef size_t ssize_t ;
typedef int curl_socket_t ;
typedef scalar_t__ curl_read_callback ;
typedef long curl_off_t ;
struct TYPE_16__ {char* buffer; size_t size_used; } ;
struct TYPE_10__ {int flags; } ;
typedef TYPE_7__ Curl_send_buffer ;
typedef scalar_t__ CURLcode ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t FUNC_0 (size_t,int ) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_7__**) ;
 scalar_t__ FUNC_2 (struct Curl_easy*,char*,size_t) ;
 int FUNC_3 (struct Curl_easy*,int ,char*,size_t) ;
 scalar_t__ FUNC_4 (struct Curl_easy*) ;
 int FUNC_5 (struct Curl_easy*,size_t) ;
 scalar_t__ FUNC_6 (struct connectdata*,int ,char*,size_t,size_t*) ;
 int FUNC_7 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_8 (char*,char*,size_t) ;
 scalar_t__ VAR_10 ;

CURLcode FUNC_9(Curl_send_buffer **VAR_11,
                              struct connectdata *VAR_12,



                              curl_off_t *VAR_13,


                              size_t VAR_14,
                              int VAR_15)
{
  ssize_t VAR_16;
  CURLcode VAR_17;
  char *VAR_18;
  size_t VAR_19;
  struct Curl_easy *VAR_20 = VAR_12->data;
  struct HTTP *VAR_21 = VAR_20->req.protop;
  size_t VAR_22;
  curl_socket_t VAR_23;
  size_t VAR_24;
  Curl_send_buffer *VAR_25 = *VAR_11;

  FUNC_7(VAR_15 <= VAR_9);

  VAR_23 = VAR_12->sock[VAR_15];




  VAR_18 = VAR_25->buffer;
  VAR_19 = VAR_25->size_used;

  VAR_24 = VAR_19 - VAR_14;


  FUNC_7(VAR_19 > VAR_14);

  VAR_17 = FUNC_2(VAR_20, VAR_18, VAR_24);

  if(VAR_17) {

    FUNC_1(VAR_11);
    return VAR_17;
  }

  if((VAR_12->handler->flags & VAR_8 ||
     VAR_12->http_proxy.proxytype == VAR_4)
     && VAR_12->httpversion != 20) {






    VAR_22 = FUNC_0(VAR_19, VAR_5);







    VAR_17 = FUNC_4(VAR_20);
    if(VAR_17) {

      FUNC_1(&VAR_25);
      return VAR_17;
    }
    FUNC_8(VAR_20->state.ulbuf, VAR_18, VAR_22);
    VAR_18 = VAR_20->state.ulbuf;
  }
  else
    VAR_22 = VAR_19;

  VAR_17 = FUNC_6(VAR_12, VAR_23, VAR_18, VAR_22, &VAR_16);

  if(!VAR_17) {






    size_t VAR_26 = (size_t)VAR_16>VAR_24 ? VAR_24 : (size_t)VAR_16;
    size_t VAR_27 = VAR_16 - VAR_26;

    if(VAR_20->set.verbose) {

      FUNC_3(VAR_20, VAR_3, VAR_18, VAR_26);
      if(VAR_27) {


        FUNC_3(VAR_20, VAR_2,
                   VAR_18 + VAR_26, VAR_27);
      }
    }




    *VAR_13 += (long)VAR_16;

    if(VAR_21) {


      VAR_20->req.writebytecount += VAR_27;
      FUNC_5(VAR_20, VAR_20->req.writebytecount);

      if((size_t)VAR_16 != VAR_19) {




        VAR_19 -= VAR_16;

        VAR_18 = VAR_25->buffer + VAR_16;


        VAR_21->backup.fread_func = VAR_20->state.fread_func;
        VAR_21->backup.fread_in = VAR_20->state.in;
        VAR_21->backup.postdata = VAR_21->postdata;
        VAR_21->backup.postsize = VAR_21->postsize;


        VAR_20->state.fread_func = (curl_read_callback)VAR_10;
        VAR_20->state.in = (void *)VAR_12;
        VAR_21->postdata = VAR_18;
        VAR_21->postsize = (curl_off_t)VAR_19;

        VAR_21->send_buffer = VAR_25;
        VAR_21->sending = VAR_7;

        return VAR_0;
      }
      VAR_21->sending = VAR_6;

    }
    else {
      if((size_t)VAR_16 != VAR_19)







        return VAR_1;
    }
  }
  FUNC_1(&VAR_25);

  return VAR_17;
}
