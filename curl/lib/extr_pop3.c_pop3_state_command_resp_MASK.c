
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pingpong {scalar_t__ cache_size; scalar_t__ cache; } ;
struct pop3_conn {int eob; int strip; struct pingpong pp; } ;
struct TYPE_5__ {struct pop3_conn pop3c; } ;
struct connectdata {TYPE_2__ proto; struct Curl_easy* data; } ;
struct POP3 {scalar_t__ transfer; } ;
struct TYPE_6__ {int opt_no_body; } ;
struct TYPE_4__ {struct POP3* protop; } ;
struct Curl_easy {TYPE_3__ set; TYPE_1__ req; } ;
typedef int pop3state ;
typedef scalar_t__ CURLcode ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct connectdata*,scalar_t__,scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct Curl_easy*,int ,int,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct connectdata*,int ) ;

__attribute__((used)) static CURLcode FUNC_4(struct connectdata *VAR_6,
                                        int VAR_7,
                                        pop3state VAR_8)
{
  CURLcode VAR_9 = VAR_0;
  struct Curl_easy *VAR_10 = VAR_6->data;
  struct POP3 *VAR_11 = VAR_10->req.protop;
  struct pop3_conn *VAR_12 = &VAR_6->proto.pop3c;
  struct pingpong *VAR_13 = &VAR_12->pp;

  (void)VAR_8;

  if(VAR_7 != '+') {
    FUNC_3(VAR_6, VAR_5);
    return VAR_1;
  }





  VAR_12->eob = 2;



  VAR_12->strip = 2;

  if(VAR_11->transfer == VAR_4) {

    FUNC_2(VAR_10, VAR_3, -1, VAR_2, -1);

    if(VAR_13->cache) {




      if(!VAR_10->set.opt_no_body) {
        VAR_9 = FUNC_0(VAR_6, VAR_13->cache, VAR_13->cache_size);
        if(VAR_9)
          return VAR_9;
      }


      FUNC_1(VAR_13->cache);


      VAR_13->cache_size = 0;
    }
  }


  FUNC_3(VAR_6, VAR_5);

  return VAR_9;
}
