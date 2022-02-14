
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int rtp_channel; } ;
struct TYPE_8__ {TYPE_3__ rtspc; } ;
struct connectdata {TYPE_4__ proto; struct Curl_easy* data; } ;
struct RTSP {long CSeq_sent; long CSeq_recv; } ;
struct TYPE_6__ {scalar_t__ rtspreq; } ;
struct TYPE_5__ {struct RTSP* protop; } ;
struct Curl_easy {TYPE_2__ set; TYPE_1__ req; } ;
typedef int CURLcode ;


 int VAR_0 ;
 int FUNC_0 (struct connectdata*,int ,int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct Curl_easy*,char*,long,long) ;
 int FUNC_2 (struct Curl_easy*,char*,long) ;

__attribute__((used)) static CURLcode FUNC_3(struct connectdata *VAR_3,
                          CURLcode VAR_4, bool VAR_5)
{
  struct Curl_easy *VAR_6 = VAR_3->data;
  struct RTSP *VAR_7 = VAR_6->req.protop;
  CURLcode VAR_8;


  if(VAR_6->set.rtspreq == VAR_1)
    VAR_5 = VAR_2;

  VAR_8 = FUNC_0(VAR_3, VAR_4, VAR_5);

  if(VAR_7) {

    long VAR_9 = VAR_7->CSeq_sent;
    long VAR_10 = VAR_7->CSeq_recv;
    if((VAR_6->set.rtspreq != VAR_1) && (VAR_9 != VAR_10)) {
      FUNC_1(VAR_6,
            "The CSeq of this request %ld did not match the response %ld",
            VAR_9, VAR_10);
      return VAR_0;
    }
    if(VAR_6->set.rtspreq == VAR_1 &&
            (VAR_3->proto.rtspc.rtp_channel == -1)) {
      FUNC_2(VAR_6, "Got an RTP Receive with a CSeq of %ld\n", VAR_10);
    }
  }

  return VAR_8;
}
