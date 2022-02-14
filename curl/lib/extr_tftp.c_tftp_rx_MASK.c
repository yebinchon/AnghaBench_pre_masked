
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ data; } ;
struct TYPE_7__ {int block; int retries; int retry_max; void* state; int remote_addrlen; int remote_addr; TYPE_4__ spacket; int sockfd; int error; int rx_time; int blksize; int rbytes; int rpacket; TYPE_1__* conn; } ;
typedef TYPE_2__ tftp_state_data_t ;
typedef int tftp_event_t ;
struct sockaddr {int dummy; } ;
struct Curl_easy {int dummy; } ;
typedef int ssize_t ;
typedef int buffer ;
struct TYPE_6__ {struct Curl_easy* data; } ;
typedef int CURLcode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int const VAR_7 ;




 void* VAR_8 ;
 void* VAR_9 ;
 int FUNC_2 (struct Curl_easy*,char*,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct Curl_easy*,char*,int,...) ;
 int FUNC_5 (int ,void*,int,int ,struct sockaddr*,int ) ;
 int FUNC_6 (TYPE_4__*,unsigned short) ;
 int FUNC_7 (TYPE_4__*,int const) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static CURLcode FUNC_9(tftp_state_data_t *VAR_10, tftp_event_t VAR_11)
{
  ssize_t VAR_12;
  int VAR_13;
  struct Curl_easy *VAR_14 = VAR_10->conn->data;
  char VAR_15[VAR_5];

  switch(VAR_11) {

  case 131:

    VAR_13 = FUNC_3(&VAR_10->rpacket);
    if(FUNC_1(VAR_10->block) == VAR_13) {

      VAR_10->retries = 0;
    }
    else if(VAR_10->block == VAR_13) {


      FUNC_4(VAR_14, "Received last DATA packet block %d again.\n", VAR_13);
    }
    else {

      FUNC_4(VAR_14,
            "Received unexpected DATA packet block %d, expecting block %d\n",
            VAR_13, FUNC_1(VAR_10->block));
      break;
    }


    VAR_10->block = (unsigned short)VAR_13;
    FUNC_7(&VAR_10->spacket, VAR_7);
    FUNC_6(&VAR_10->spacket, VAR_10->block);
    VAR_12 = FUNC_5(VAR_10->sockfd, (void *)VAR_10->spacket.data,
                    4, VAR_3,
                    (struct sockaddr *)&VAR_10->remote_addr,
                    VAR_10->remote_addrlen);
    if(VAR_12 < 0) {
      FUNC_2(VAR_14, "%s", FUNC_0(VAR_4, VAR_15, sizeof(VAR_15)));
      return VAR_1;
    }


    if(VAR_10->rbytes < (ssize_t)VAR_10->blksize + 4) {
      VAR_10->state = VAR_8;
    }
    else {
      VAR_10->state = VAR_9;
    }
    FUNC_8(&VAR_10->rx_time);
    break;

  case 129:

    VAR_10->block = 0;
    VAR_10->retries = 0;
    FUNC_7(&VAR_10->spacket, VAR_7);
    FUNC_6(&VAR_10->spacket, VAR_10->block);
    VAR_12 = FUNC_5(VAR_10->sockfd, (void *)VAR_10->spacket.data,
                    4, VAR_3,
                    (struct sockaddr *)&VAR_10->remote_addr,
                    VAR_10->remote_addrlen);
    if(VAR_12 < 0) {
      FUNC_2(VAR_14, "%s", FUNC_0(VAR_4, VAR_15, sizeof(VAR_15)));
      return VAR_1;
    }


    VAR_10->state = VAR_9;
    FUNC_8(&VAR_10->rx_time);
    break;

  case 128:

    VAR_10->retries++;
    FUNC_4(VAR_14,
          "Timeout waiting for block %d ACK.  Retries = %d\n",
          FUNC_1(VAR_10->block), VAR_10->retries);
    if(VAR_10->retries > VAR_10->retry_max) {
      VAR_10->error = VAR_6;
      VAR_10->state = VAR_8;
    }
    else {

      VAR_12 = FUNC_5(VAR_10->sockfd, (void *)VAR_10->spacket.data,
                      4, VAR_3,
                      (struct sockaddr *)&VAR_10->remote_addr,
                      VAR_10->remote_addrlen);
      if(VAR_12<0) {
        FUNC_2(VAR_14, "%s", FUNC_0(VAR_4, VAR_15, sizeof(VAR_15)));
        return VAR_1;
      }
    }
    break;

  case 130:
    FUNC_7(&VAR_10->spacket, 130);
    FUNC_6(&VAR_10->spacket, VAR_10->block);
    (void)FUNC_5(VAR_10->sockfd, (void *)VAR_10->spacket.data,
                 4, VAR_3,
                 (struct sockaddr *)&VAR_10->remote_addr,
                 VAR_10->remote_addrlen);


    VAR_10->state = VAR_8;
    break;

  default:
    FUNC_2(VAR_14, "%s", "tftp_rx: internal error");
    return VAR_2;

  }
  return VAR_0;
}
