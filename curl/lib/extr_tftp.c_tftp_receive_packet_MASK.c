
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ data; } ;
struct TYPE_8__ {int rbytes; int remote_addrlen; short event; TYPE_5__ rpacket; int error; int block; int remote_addr; scalar_t__ blksize; int sockfd; } ;
typedef TYPE_2__ tftp_state_data_t ;
typedef short tftp_event_t ;
typedef int tftp_error_t ;
struct sockaddr {int dummy; } ;
struct TYPE_7__ {scalar_t__ tftpc; } ;
struct connectdata {TYPE_1__ proto; struct Curl_easy* data; } ;
struct SingleRequest {int bytecount; } ;
struct Curl_sockaddr_storage {int dummy; } ;
struct Curl_easy {struct SingleRequest req; } ;
typedef int fromaddr ;
typedef int curl_socklen_t ;
typedef int curl_off_t ;
typedef int CURLcode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct connectdata*,int ,char*,int) ;
 int FUNC_1 (struct Curl_easy*,int ) ;
 scalar_t__ FUNC_2 (struct connectdata*) ;
 size_t FUNC_3 (char*,size_t) ;
 unsigned short FUNC_4 (int ) ;





 short VAR_3 ;

 int FUNC_5 (struct Curl_easy*,char*,...) ;
 unsigned short FUNC_6 (TYPE_5__*) ;
 unsigned short FUNC_7 (TYPE_5__*) ;
 int FUNC_8 (struct Curl_easy*,char*,char*) ;
 int FUNC_9 (int *,struct Curl_sockaddr_storage*,int) ;
 scalar_t__ FUNC_10 (int ,void*,scalar_t__,int ,struct sockaddr*,int*) ;
 int FUNC_11 (TYPE_2__*,char const*,int) ;
 int FUNC_12 (TYPE_2__*,int const) ;

__attribute__((used)) static CURLcode FUNC_13(struct connectdata *VAR_4)
{
  struct Curl_sockaddr_storage VAR_5;
  curl_socklen_t VAR_6;
  CURLcode VAR_7 = VAR_2;
  struct Curl_easy *VAR_8 = VAR_4->data;
  tftp_state_data_t *VAR_9 = (tftp_state_data_t *)VAR_4->proto.tftpc;
  struct SingleRequest *VAR_10 = &VAR_8->req;


  VAR_6 = sizeof(VAR_5);
  VAR_9->rbytes = (int)FUNC_10(VAR_9->sockfd,
                                (void *)VAR_9->rpacket.data,
                                VAR_9->blksize + 4,
                                0,
                                (struct sockaddr *)&VAR_5,
                                &VAR_6);
  if(VAR_9->remote_addrlen == 0) {
    FUNC_9(&VAR_9->remote_addr, &VAR_5, VAR_6);
    VAR_9->remote_addrlen = VAR_6;
  }


  if(VAR_9->rbytes < 4) {
    FUNC_5(VAR_8, "Received too short packet");

    VAR_9->event = VAR_3;
  }
  else {

    unsigned short VAR_11 = FUNC_7(&VAR_9->rpacket);
    VAR_9->event = (tftp_event_t)VAR_11;

    switch(VAR_9->event) {
    case 132:

      if(VAR_9->rbytes > 4 &&
         (FUNC_4(VAR_9->block) == FUNC_6(&VAR_9->rpacket))) {
        VAR_7 = FUNC_0(VAR_4, VAR_0,
                                   (char *)VAR_9->rpacket.data + 4,
                                   VAR_9->rbytes-4);
        if(VAR_7) {
          FUNC_12(VAR_9, 131);
          return VAR_7;
        }
        VAR_10->bytecount += VAR_9->rbytes-4;
        FUNC_1(VAR_8, (curl_off_t) VAR_10->bytecount);
      }
      break;
    case 131:
    {
      unsigned short VAR_12 = FUNC_6(&VAR_9->rpacket);
      char *VAR_13 = (char *)VAR_9->rpacket.data + 4;
      size_t VAR_14 = VAR_9->rbytes - 4;
      VAR_9->error = (tftp_error_t)VAR_12;
      if(FUNC_3(VAR_13, VAR_14) < VAR_14)
        FUNC_8(VAR_8, "TFTP error: %s\n", VAR_13);
      break;
    }
    case 133:
      break;
    case 130:
      VAR_7 = FUNC_11(VAR_9,
                                     (const char *)VAR_9->rpacket.data + 2,
                                     VAR_9->rbytes-2);
      if(VAR_7)
        return VAR_7;
      break;
    case 129:
    case 128:
    default:
      FUNC_5(VAR_8, "%s", "Internal error: Unexpected packet");
      break;
    }


    if(FUNC_2(VAR_4)) {
      FUNC_12(VAR_9, 131);
      return VAR_1;
    }
  }
  return VAR_7;
}
