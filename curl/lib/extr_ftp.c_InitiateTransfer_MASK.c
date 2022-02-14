
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int pending_resp; } ;
struct TYPE_9__ {scalar_t__ state_saved; int retr_size_saved; TYPE_3__ pp; } ;
struct TYPE_10__ {TYPE_4__ ftpc; } ;
struct TYPE_6__ {scalar_t__ ftp_use_data_ssl; } ;
struct connectdata {TYPE_5__ proto; int * sock; TYPE_1__ bits; struct Curl_easy* data; } ;
struct TYPE_7__ {int infilesize; } ;
struct Curl_easy {TYPE_2__ state; } ;
typedef scalar_t__ CURLcode ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct Curl_easy*,int ) ;
 int FUNC_1 (struct Curl_easy*,size_t,int,int ,int) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct connectdata*,size_t) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (struct Curl_easy*,char*) ;
 int FUNC_5 (struct connectdata*,int ) ;

__attribute__((used)) static CURLcode FUNC_6(struct connectdata *VAR_6)
{
  struct Curl_easy *VAR_7 = VAR_6->data;
  CURLcode VAR_8 = VAR_0;

  if(VAR_6->bits.ftp_use_data_ssl) {


    FUNC_4(VAR_7, "Doing the SSL/TLS handshake on the data stream\n");
    VAR_8 = FUNC_3(VAR_6, VAR_4);
    if(VAR_8)
      return VAR_8;
  }

  if(VAR_6->proto.ftpc.state_saved == VAR_3) {


    FUNC_0(VAR_7, VAR_7->state.infilesize);


    FUNC_2(VAR_6->sock[VAR_4]);

    FUNC_1(VAR_7, -1, -1, VAR_1, VAR_4);
  }
  else {

    FUNC_1(VAR_7, VAR_4,
                        VAR_6->proto.ftpc.retr_size_saved, VAR_1, -1);
  }

  VAR_6->proto.ftpc.pp.pending_resp = VAR_5;
  FUNC_5(VAR_6, VAR_2);

  return VAR_0;
}
