
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ state; scalar_t__ event; int sockfd; } ;
typedef TYPE_2__ tftp_state_data_t ;
typedef scalar_t__ tftp_event_t ;
struct TYPE_4__ {scalar_t__ tftpc; } ;
struct connectdata {TYPE_1__ proto; struct Curl_easy* data; } ;
struct Curl_easy {int dummy; } ;
typedef int buffer ;
typedef scalar_t__ CURLcode ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct Curl_easy*,int,int,int,int) ;
 int FUNC_1 (int,char*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,int ) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (struct Curl_easy*,char*,...) ;
 scalar_t__ FUNC_4 (struct connectdata*) ;
 scalar_t__ FUNC_5 (TYPE_2__*,scalar_t__) ;
 long FUNC_6 (struct connectdata*,scalar_t__*) ;

__attribute__((used)) static CURLcode FUNC_7(struct connectdata *VAR_9, bool *VAR_10)
{
  tftp_event_t VAR_11;
  CURLcode VAR_12 = VAR_0;
  struct Curl_easy *VAR_13 = VAR_9->data;
  tftp_state_data_t *VAR_14 = (tftp_state_data_t *)VAR_9->proto.tftpc;
  long VAR_15 = FUNC_6(VAR_9, &VAR_11);

  *VAR_10 = VAR_2;

  if(VAR_15 <= 0) {
    FUNC_3(VAR_13, "TFTP response timeout");
    return VAR_1;
  }
  if(VAR_11 != VAR_6) {
    VAR_12 = FUNC_5(VAR_14, VAR_11);
    if(VAR_12)
      return VAR_12;
    *VAR_10 = (VAR_14->state == VAR_7) ? VAR_8 : VAR_2;
    if(*VAR_10)

      FUNC_0(VAR_13, -1, -1, VAR_2, -1);
  }
  else {

    int VAR_16 = FUNC_2(VAR_14->sockfd, 0);

    if(VAR_16 == -1) {

      int VAR_17 = VAR_3;
      char VAR_18[VAR_4];
      FUNC_3(VAR_13, "%s", FUNC_1(VAR_17, VAR_18, sizeof(VAR_18)));
      VAR_14->event = VAR_5;
    }
    else if(VAR_16 != 0) {
      VAR_12 = FUNC_4(VAR_9);
      if(VAR_12)
        return VAR_12;
      VAR_12 = FUNC_5(VAR_14, VAR_14->event);
      if(VAR_12)
        return VAR_12;
      *VAR_10 = (VAR_14->state == VAR_7) ? VAR_8 : VAR_2;
      if(*VAR_10)

        FUNC_0(VAR_13, -1, -1, VAR_2, -1);
    }

  }

  return VAR_12;
}
