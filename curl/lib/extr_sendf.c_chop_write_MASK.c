
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct connectdata {TYPE_2__* handler; struct Curl_easy* data; } ;
struct TYPE_6__ {size_t (* fwrite_func ) (char*,int,size_t,scalar_t__) ;size_t (* fwrite_header ) (char*,int,size_t,scalar_t__) ;scalar_t__ writeheader; scalar_t__ out; } ;
struct TYPE_4__ {int keepon; } ;
struct Curl_easy {TYPE_3__ set; TYPE_1__ req; } ;
typedef size_t (* curl_write_callback ) (char*,int,size_t,scalar_t__) ;
struct TYPE_5__ {int flags; } ;
typedef int CURLcode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int FUNC_0 (struct Curl_easy*,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct Curl_easy*,char*,...) ;
 int FUNC_2 (struct Curl_easy*,int,char*,size_t) ;

__attribute__((used)) static CURLcode FUNC_3(struct connectdata *VAR_8,
                           int VAR_9,
                           char *VAR_10,
                           size_t VAR_11)
{
  struct Curl_easy *VAR_12 = VAR_8->data;
  curl_write_callback VAR_13 = ((void*)0);
  curl_write_callback VAR_14 = ((void*)0);
  char *VAR_15 = VAR_10;
  size_t VAR_16 = VAR_11;

  if(!VAR_16)
    return VAR_2;



  if(VAR_12->req.keepon & VAR_6)
    return FUNC_2(VAR_12, VAR_9, VAR_15, VAR_16);


  if(VAR_9 & VAR_0)
    VAR_14 = VAR_12->set.fwrite_func;
  if((VAR_9 & VAR_1) &&
     (VAR_12->set.fwrite_header || VAR_12->set.writeheader)) {




    VAR_13 =
      VAR_12->set.fwrite_header? VAR_12->set.fwrite_header: VAR_12->set.fwrite_func;
  }


  while(VAR_16) {
    size_t VAR_17 = VAR_16 <= VAR_4? VAR_16: VAR_4;

    if(VAR_14) {
      size_t VAR_18;
      FUNC_0(VAR_12, 1);
      VAR_18 = VAR_14(VAR_15, 1, VAR_17, VAR_12->set.out);
      FUNC_0(VAR_12, 0);

      if(VAR_5 == VAR_18) {
        if(VAR_8->handler->flags & VAR_7) {



          FUNC_1(VAR_12, "Write callback asked for PAUSE when not supported!");
          return VAR_3;
        }
        return FUNC_2(VAR_12, VAR_9, VAR_15, VAR_16);
      }
      if(VAR_18 != VAR_17) {
        FUNC_1(VAR_12, "Failed writing body (%zu != %zu)", VAR_18, VAR_17);
        return VAR_3;
      }
    }

    VAR_15 += VAR_17;
    VAR_16 -= VAR_17;
  }

  if(VAR_13) {
    size_t VAR_19;
    VAR_15 = VAR_10;
    VAR_16 = VAR_11;
    FUNC_0(VAR_12, 1);
    VAR_19 = VAR_13(VAR_15, 1, VAR_16, VAR_12->set.writeheader);
    FUNC_0(VAR_12, 0);

    if(VAR_5 == VAR_19)



      return FUNC_2(VAR_12, VAR_1, VAR_15, VAR_16);

    if(VAR_19 != VAR_16) {
      FUNC_1(VAR_12, "Failed writing header");
      return VAR_3;
    }
  }

  return VAR_2;
}
