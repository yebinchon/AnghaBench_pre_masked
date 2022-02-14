
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int state; TYPE_1__* conn; } ;
typedef TYPE_2__ tftp_state_data_t ;
typedef int tftp_event_t ;
struct Curl_easy {int dummy; } ;
struct TYPE_6__ {struct Curl_easy* data; } ;
typedef scalar_t__ CURLcode ;


 int VAR_0 ;
 int FUNC_0 (struct Curl_easy*,char*,char*) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (TYPE_2__*,int ) ;

__attribute__((used)) static CURLcode FUNC_3(tftp_state_data_t *VAR_1,
                                    tftp_event_t VAR_2)
{
  CURLcode VAR_3;

  struct Curl_easy *VAR_4 = VAR_1->conn->data;

  FUNC_0(VAR_4, "%s\n", "Connected for transmit");

  VAR_1->state = VAR_0;
  VAR_3 = FUNC_1(VAR_1);
  if(VAR_3)
    return VAR_3;
  return FUNC_2(VAR_1, VAR_2);
}
