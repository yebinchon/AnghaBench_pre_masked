
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int retry; } ;
struct connectdata {TYPE_4__ bits; int seek_client; int seek_func; struct Curl_easy* data; } ;
struct HTTP {int form; scalar_t__ send_buffer; } ;
struct TYPE_12__ {scalar_t__ bytecount; scalar_t__ headerbytecount; scalar_t__ deductheadercount; struct HTTP* protop; } ;
struct TYPE_11__ {int connect_only; int seek_client; int seek_func; } ;
struct TYPE_8__ {void* multipass; } ;
struct TYPE_7__ {void* multipass; } ;
struct TYPE_9__ {TYPE_2__ authproxy; TYPE_1__ authhost; } ;
struct Curl_easy {TYPE_6__ req; TYPE_5__ set; TYPE_3__ state; } ;
typedef scalar_t__ CURLcode ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__*) ;
 int FUNC_1 (struct connectdata*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct connectdata*) ;
 void* VAR_2 ;
 int FUNC_4 (struct Curl_easy*,char*) ;

CURLcode FUNC_5(struct connectdata *VAR_3,
                        CURLcode VAR_4, bool VAR_5)
{
  struct Curl_easy *VAR_6 = VAR_3->data;
  struct HTTP *VAR_7 = VAR_6->req.protop;



  VAR_6->state.authhost.multipass = VAR_2;
  VAR_6->state.authproxy.multipass = VAR_2;

  FUNC_3(VAR_3);


  VAR_3->seek_func = VAR_6->set.seek_func;
  VAR_3->seek_client = VAR_6->set.seek_client;

  if(!VAR_7)
    return VAR_1;

  if(VAR_7->send_buffer) {
    FUNC_0(&VAR_7->send_buffer);
  }

  FUNC_1(VAR_3, VAR_5);

  FUNC_2(&VAR_7->form);

  if(VAR_4)
    return VAR_4;

  if(!VAR_5 &&

     !VAR_3->bits.retry &&
     !VAR_6->set.connect_only &&
     (VAR_6->req.bytecount +
      VAR_6->req.headerbytecount -
      VAR_6->req.deductheadercount) <= 0) {



    FUNC_4(VAR_6, "Empty reply from server");
    return VAR_0;
  }

  return VAR_1;
}
