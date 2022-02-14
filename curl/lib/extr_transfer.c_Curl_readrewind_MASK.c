
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int rewindaftersend; } ;
struct connectdata {TYPE_2__* handler; TYPE_1__ bits; struct Curl_easy* data; } ;
struct HTTP {int * sendit; } ;
struct TYPE_10__ {scalar_t__ fread_func; int in; } ;
struct TYPE_9__ {scalar_t__ httpreq; int (* seek_func ) (int ,int ,int ) ;int ioctl_client; scalar_t__ (* ioctl_func ) (struct Curl_easy*,int ,int ) ;int seek_client; scalar_t__ postfields; int mimepost; } ;
struct TYPE_8__ {struct HTTP* protop; int keepon; } ;
struct Curl_easy {TYPE_5__ state; TYPE_4__ set; TYPE_3__ req; } ;
typedef scalar_t__ curlioerr ;
typedef scalar_t__ curl_read_callback ;
typedef int curl_mimepart ;
struct TYPE_7__ {int protocol; } ;
typedef int CURLcode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct Curl_easy*,int) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct Curl_easy*,char*,...) ;
 scalar_t__ VAR_9 ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (struct Curl_easy*,char*,int) ;
 int FUNC_5 (int ,int ,int ) ;
 scalar_t__ FUNC_6 (struct Curl_easy*,int ,int ) ;

CURLcode FUNC_7(struct connectdata *VAR_10)
{
  struct Curl_easy *VAR_11 = VAR_10->data;
  curl_mimepart *VAR_12 = &VAR_11->set.mimepost;

  VAR_10->bits.rewindaftersend = VAR_3;





  VAR_11->req.keepon &= ~VAR_6;




  if(VAR_10->handler->protocol & VAR_7) {
    struct HTTP *VAR_13 = VAR_11->req.protop;

    if(VAR_13->sendit)
      VAR_12 = VAR_13->sendit;
  }
  if(VAR_11->set.postfields)
    ;
  else if(VAR_11->set.httpreq == VAR_5 ||
          VAR_11->set.httpreq == VAR_4) {
    if(FUNC_0(VAR_12)) {
      FUNC_2(VAR_11, "Cannot rewind mime/post data");
      return VAR_1;
    }
  }
  else {
    if(VAR_11->set.seek_func) {
      int VAR_14;

      FUNC_1(VAR_11, 1);
      VAR_14 = (VAR_11->set.seek_func)(VAR_11->set.seek_client, 0, VAR_8);
      FUNC_1(VAR_11, 0);
      if(VAR_14) {
        FUNC_2(VAR_11, "seek callback returned error %d", (int)VAR_14);
        return VAR_1;
      }
    }
    else if(VAR_11->set.ioctl_func) {
      curlioerr VAR_15;

      FUNC_1(VAR_11, 1);
      VAR_15 = (VAR_11->set.ioctl_func)(VAR_11, VAR_2,
                                   VAR_11->set.ioctl_client);
      FUNC_1(VAR_11, 0);
      FUNC_4(VAR_11, "the ioctl callback returned %d\n", (int)VAR_15);

      if(VAR_15) {
        FUNC_2(VAR_11, "ioctl callback returned error %d", (int)VAR_15);
        return VAR_1;
      }
    }
    else {



      if(VAR_11->state.fread_func == (curl_read_callback)VAR_9) {
        if(-1 != FUNC_3(VAR_11->state.in, 0, VAR_8))

          return VAR_0;
      }


      FUNC_2(VAR_11, "necessary data rewind wasn't possible");
      return VAR_1;
    }
  }
  return VAR_0;
}
