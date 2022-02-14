
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rtsp_conn {char* rtp_buf; int rtp_bufsize; int rtp_channel; } ;
struct TYPE_3__ {struct rtsp_conn rtspc; } ;
struct connectdata {TYPE_1__ proto; } ;
struct SingleRequest {char* str; int keepon; } ;
struct TYPE_4__ {scalar_t__ rtspreq; } ;
struct Curl_easy {TYPE_2__ set; struct SingleRequest req; } ;
typedef int ssize_t ;
typedef int CURLcode ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (struct Curl_easy*,char*) ;
 int FUNC_7 (struct Curl_easy*,char*,int,...) ;
 char* FUNC_8 (int) ;
 int FUNC_9 (char*,char*,int) ;
 int FUNC_10 (struct connectdata*,char*,int) ;

__attribute__((used)) static CURLcode FUNC_11(struct Curl_easy *VAR_6,
                                   struct connectdata *VAR_7,
                                   ssize_t *VAR_8,
                                   bool *VAR_9) {
  struct SingleRequest *VAR_10 = &VAR_6->req;
  struct rtsp_conn *VAR_11 = &(VAR_7->proto.rtspc);

  char *VAR_12;
  ssize_t VAR_13;
  char *VAR_14;
  CURLcode VAR_15;

  if(VAR_11->rtp_buf) {

    char *VAR_16 = FUNC_1(VAR_11->rtp_buf,
                                    VAR_11->rtp_bufsize + *VAR_8);
    if(!VAR_16) {
      VAR_11->rtp_buf = ((void*)0);
      VAR_11->rtp_bufsize = 0;
      return VAR_1;
    }
    VAR_11->rtp_buf = VAR_16;
    FUNC_9(VAR_11->rtp_buf + VAR_11->rtp_bufsize, VAR_10->str, *VAR_8);
    VAR_11->rtp_bufsize += *VAR_8;
    VAR_12 = VAR_11->rtp_buf;
    VAR_13 = VAR_11->rtp_bufsize;
  }
  else {

    VAR_12 = VAR_10->str;
    VAR_13 = *VAR_8;
  }

  while((VAR_13 > 0) &&
        (VAR_12[0] == '$')) {
    if(VAR_13 > 4) {
      int VAR_17;



      VAR_11->rtp_channel = FUNC_4(VAR_12);


      VAR_17 = FUNC_5(VAR_12);

      if(VAR_13 < VAR_17 + 4) {

        *VAR_9 = VAR_5;
        break;
      }


      FUNC_3(FUNC_7(VAR_6, "RTP write channel %d rtp_length %d\n",
             VAR_11->rtp_channel, VAR_17));
      VAR_15 = FUNC_10(VAR_7, &VAR_12[0], VAR_17 + 4);
      if(VAR_15) {
        FUNC_6(VAR_6, "Got an error writing an RTP packet");
        *VAR_9 = VAR_2;
        FUNC_0(VAR_11->rtp_buf);
        VAR_11->rtp_buf = ((void*)0);
        VAR_11->rtp_bufsize = 0;
        return VAR_15;
      }


      VAR_13 -= VAR_17 + 4;
      VAR_12 += VAR_17 + 4;

      if(VAR_6->set.rtspreq == VAR_4) {



        VAR_10->keepon &= ~VAR_3;
      }
    }
    else {

      *VAR_9 = VAR_5;
      break;
    }
  }

  if(VAR_13 != 0 && VAR_12[0] == '$') {
    FUNC_3(FUNC_7(VAR_6, "RTP Rewinding %zd %s\n", VAR_13,
          *VAR_9 ? "(READMORE)" : ""));


    VAR_14 = FUNC_8(VAR_13);
    if(!VAR_14) {
      FUNC_0(VAR_11->rtp_buf);
      VAR_11->rtp_buf = ((void*)0);
      VAR_11->rtp_bufsize = 0;
      return VAR_1;
    }
    FUNC_9(VAR_14, VAR_12, VAR_13);
    FUNC_0(VAR_11->rtp_buf);
    VAR_11->rtp_buf = VAR_14;
    VAR_11->rtp_bufsize = VAR_13;


    *VAR_8 = 0;
    return VAR_0;
  }

  VAR_10->str += *VAR_8 - VAR_13;




  if(VAR_13 > 0)
    FUNC_2(VAR_10->str[0] == VAR_12[0]);

  FUNC_2(VAR_13 <= *VAR_8);

  *VAR_8 = VAR_13;


  FUNC_0(VAR_11->rtp_buf);
  VAR_11->rtp_buf = ((void*)0);
  VAR_11->rtp_bufsize = 0;

  return VAR_0;
}
