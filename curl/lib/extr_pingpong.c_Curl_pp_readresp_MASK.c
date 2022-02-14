
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pingpong {size_t nread_resp; char* linestart_resp; char* cache; int cache_size; void* pending_resp; scalar_t__ (* endofresp ) (struct connectdata*,char*,int,int*) ;struct connectdata* conn; } ;
struct connectdata {int data_prot; int sec_complete; struct Curl_easy* data; } ;
struct TYPE_6__ {int buffer_size; scalar_t__ verbose; } ;
struct TYPE_5__ {long headerbytecount; } ;
struct TYPE_4__ {char* buffer; } ;
struct Curl_easy {TYPE_3__ set; TYPE_2__ req; TYPE_1__ state; } ;
typedef int ssize_t ;
typedef enum protection_level { ____Placeholder_protection_level } protection_level ;
typedef int curl_socket_t ;
typedef scalar_t__ CURLcode ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct connectdata*,int ,char*,int) ;
 scalar_t__ FUNC_1 (struct Curl_easy*,char*,int) ;
 int FUNC_2 (struct Curl_easy*,int ,char*,size_t) ;
 scalar_t__ FUNC_3 (struct connectdata*,int ,char*,size_t,int*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 void* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_6 (struct Curl_easy*,char*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (struct Curl_easy*,char*,int) ;
 char* FUNC_9 (int) ;
 int FUNC_10 (char*,char*,int) ;
 int FUNC_11 (char* const,char*,size_t) ;
 scalar_t__ FUNC_12 (struct connectdata*,char*,int,int*) ;

CURLcode FUNC_13(curl_socket_t VAR_11,
                          struct pingpong *VAR_12,
                          int *VAR_13,
                          size_t *VAR_14)
{
  ssize_t VAR_15;
  bool VAR_16 = VAR_10;
  ssize_t VAR_17;
  char *VAR_18;
  struct connectdata *VAR_19 = VAR_12->conn;
  struct Curl_easy *VAR_20 = VAR_19->data;
  char * const VAR_21 = VAR_20->state.buffer;
  CURLcode VAR_22 = VAR_2;

  *VAR_13 = 0;
  *VAR_14 = 0;

  VAR_18 = VAR_21 + VAR_12->nread_resp;


  VAR_15 = (ssize_t)(VAR_18-VAR_12->linestart_resp);

  while((VAR_12->nread_resp < (size_t)VAR_20->set.buffer_size) &&
        (VAR_16 && !VAR_22)) {

    if(VAR_12->cache) {







      if((VAR_18 + VAR_12->cache_size) > (VAR_21 + VAR_20->set.buffer_size + 1)) {
        FUNC_6(VAR_20, "cached response data too big to handle");
        return VAR_4;
      }
      FUNC_10(VAR_18, VAR_12->cache, VAR_12->cache_size);
      VAR_17 = (ssize_t)VAR_12->cache_size;
      FUNC_7(VAR_12->cache);
      VAR_12->cache = ((void*)0);
      VAR_12->cache_size = 0;
    }
    else {




      FUNC_4((VAR_18 + VAR_20->set.buffer_size - VAR_12->nread_resp) <=
                  (VAR_21 + VAR_20->set.buffer_size + 1));
      VAR_22 = FUNC_3(VAR_19, VAR_11, VAR_18,
                         VAR_20->set.buffer_size - VAR_12->nread_resp,
                         &VAR_17);




      if(VAR_22 == VAR_1)
        return VAR_2;

      if(!VAR_22 && (VAR_17 > 0))

        VAR_22 = FUNC_1(VAR_20, VAR_18, VAR_17);


      if(VAR_22)

        VAR_16 = VAR_6;
    }

    if(!VAR_16)
      ;
    else if(VAR_17 <= 0) {
      VAR_16 = VAR_6;
      VAR_22 = VAR_4;
      FUNC_6(VAR_20, "response reading failed");
    }
    else {



      ssize_t VAR_23;
      ssize_t VAR_24 = 0;
      bool VAR_25 = VAR_6;

      VAR_20->req.headerbytecount += (long)VAR_17;

      VAR_12->nread_resp += VAR_17;
      for(VAR_23 = 0; VAR_23 < VAR_17; VAR_18++, VAR_23++) {
        VAR_15++;
        if(*VAR_18 == '\n') {







            if(VAR_20->set.verbose)
              FUNC_2(VAR_20, VAR_5,
                         VAR_12->linestart_resp, (size_t)VAR_15);






          VAR_22 = FUNC_0(VAR_19, VAR_0,
                                     VAR_12->linestart_resp, VAR_15);
          if(VAR_22)
            return VAR_22;

          if(VAR_12->endofresp(VAR_19, VAR_12->linestart_resp, VAR_15, VAR_13)) {


            size_t VAR_26 = VAR_18 - VAR_12->linestart_resp;
            FUNC_11(VAR_21, VAR_12->linestart_resp, VAR_26);
            VAR_21[VAR_26] = 0;
            VAR_16 = VAR_6;
            VAR_12->linestart_resp = VAR_18 + 1;
            VAR_23++;

            *VAR_14 = VAR_12->nread_resp;
            VAR_12->nread_resp = 0;
            break;
          }
          VAR_15 = 0;
          VAR_12->linestart_resp = VAR_18 + 1;
        }
      }

      if(!VAR_16 && (VAR_23 != VAR_17)) {




        VAR_24 = VAR_17 - VAR_23;
        VAR_25 = VAR_10;
        FUNC_5(FUNC_8(VAR_20, "Curl_pp_readresp_ %d bytes of trailing "
                     "server response left\n",
                     (int)VAR_24));
      }
      else if(VAR_16) {

        if((VAR_15 == VAR_17) && (VAR_17 > VAR_20->set.buffer_size/2)) {



          FUNC_8(VAR_20, "Excessive server response line length received, "
                "%zd bytes. Stripping\n", VAR_17);
          VAR_25 = VAR_10;



          VAR_24 = 40;
        }
        else if(VAR_12->nread_resp > (size_t)VAR_20->set.buffer_size/2) {



          VAR_24 = VAR_15;
          VAR_25 = VAR_10;
        }
      }
      else if(VAR_23 == VAR_17)
        VAR_25 = VAR_10;

      if(VAR_24) {
        VAR_12->cache_size = VAR_24;
        VAR_12->cache = FUNC_9(VAR_12->cache_size);
        if(VAR_12->cache)
          FUNC_10(VAR_12->cache, VAR_12->linestart_resp, VAR_12->cache_size);
        else
          return VAR_3;
      }
      if(VAR_25) {


        VAR_12->nread_resp = 0;
        VAR_18 = VAR_12->linestart_resp = VAR_21;
        VAR_15 = 0;
      }

    }

  }

  VAR_12->pending_resp = VAR_6;

  return VAR_22;
}
