
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_14__ {void* data; } ;
struct TYPE_13__ {void* data; } ;
struct TYPE_17__ {int blksize; int requested_blksize; int local_addr; int sockfd; int error; int state; struct connectdata* conn; TYPE_4__ spacket; TYPE_3__ rpacket; } ;
typedef TYPE_7__ tftp_state_data_t ;
struct sockaddr {scalar_t__ sa_family; } ;
struct TYPE_16__ {void* bound; } ;
struct TYPE_11__ {TYPE_7__* tftpc; } ;
struct connectdata {TYPE_9__* data; TYPE_6__ bits; TYPE_5__* ip_addr; int * sock; TYPE_1__ proto; } ;
typedef int buffer ;
struct TYPE_12__ {scalar_t__ tftp_blksize; } ;
struct TYPE_18__ {TYPE_2__ set; } ;
struct TYPE_15__ {int ai_addrlen; scalar_t__ ai_family; } ;
typedef int CURLcode ;
typedef scalar_t__ CURL_SA_FAMILY_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_9__*) ;
 int FUNC_1 (int ,char*,int) ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 void* VAR_12 ;
 int FUNC_2 (int ,struct sockaddr*,int ) ;
 void* FUNC_3 (int,int) ;
 int FUNC_4 (struct connectdata*,char*) ;
 int FUNC_5 (TYPE_9__*,char*,int ) ;
 int FUNC_6 (TYPE_7__*) ;

__attribute__((used)) static CURLcode FUNC_7(struct connectdata *VAR_13, bool *VAR_14)
{
  tftp_state_data_t *VAR_15;
  int VAR_16;
  int VAR_17;

  VAR_16 = VAR_7;

  VAR_15 = VAR_13->proto.tftpc = FUNC_3(1, sizeof(tftp_state_data_t));
  if(!VAR_15)
    return VAR_2;


  if(VAR_13->data->set.tftp_blksize) {
    VAR_16 = (int)VAR_13->data->set.tftp_blksize;
    if(VAR_16 > VAR_8 || VAR_16 < VAR_9)
      return VAR_3;
  }

  VAR_17 = VAR_16;

  if(VAR_17 < VAR_7)
    VAR_17 = VAR_7;

  if(!VAR_15->rpacket.data) {
    VAR_15->rpacket.data = FUNC_3(1, VAR_17 + 2 + 2);

    if(!VAR_15->rpacket.data)
      return VAR_2;
  }

  if(!VAR_15->spacket.data) {
    VAR_15->spacket.data = FUNC_3(1, VAR_17 + 2 + 2);

    if(!VAR_15->spacket.data)
      return VAR_2;
  }



  FUNC_4(VAR_13, "TFTP");

  VAR_15->conn = VAR_13;
  VAR_15->sockfd = VAR_15->conn->sock[VAR_4];
  VAR_15->state = VAR_11;
  VAR_15->error = VAR_10;
  VAR_15->blksize = VAR_7;
  VAR_15->requested_blksize = VAR_16;

  ((struct sockaddr *)&VAR_15->local_addr)->sa_family =
    (CURL_SA_FAMILY_T)(VAR_13->ip_addr->ai_family);

  FUNC_6(VAR_15);

  if(!VAR_13->bits.bound) {
    int VAR_18 = FUNC_2(VAR_15->sockfd, (struct sockaddr *)&VAR_15->local_addr,
                  VAR_13->ip_addr->ai_addrlen);
    if(VAR_18) {
      char VAR_19[VAR_6];
      FUNC_5(VAR_13->data, "bind() failed; %s",
            FUNC_1(VAR_5, VAR_19, sizeof(VAR_19)));
      return VAR_0;
    }
    VAR_13->bits.bound = VAR_12;
  }

  FUNC_0(VAR_13->data);

  *VAR_14 = VAR_12;

  return VAR_1;
}
