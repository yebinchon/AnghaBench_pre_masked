
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int rtp_channel; } ;
struct TYPE_5__ {TYPE_1__ rtspc; } ;
struct connectdata {TYPE_2__ proto; struct Curl_easy* data; } ;
struct TYPE_6__ {int rtsp_next_client_CSeq; int rtsp_next_server_CSeq; } ;
struct Curl_easy {TYPE_3__ state; } ;
typedef int CURLcode ;


 int FUNC_0 (struct connectdata*,int*) ;

__attribute__((used)) static CURLcode FUNC_1(struct connectdata *VAR_0, bool *VAR_1)
{
  CURLcode VAR_2;
  struct Curl_easy *VAR_3 = VAR_0->data;

  VAR_2 = FUNC_0(VAR_0, VAR_1);


  if(VAR_3->state.rtsp_next_client_CSeq == 0)
    VAR_3->state.rtsp_next_client_CSeq = 1;
  if(VAR_3->state.rtsp_next_server_CSeq == 0)
    VAR_3->state.rtsp_next_server_CSeq = 1;

  VAR_0->proto.rtspc.rtp_channel = -1;

  return VAR_2;
}
