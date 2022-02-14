
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ftp_conn {void* wait_data_conn; } ;
struct TYPE_8__ {struct ftp_conn ftpc; } ;
struct connectdata {TYPE_3__* data; TYPE_4__ proto; } ;
struct TYPE_6__ {scalar_t__ state; } ;
struct TYPE_5__ {scalar_t__ wildcardmatch; } ;
struct TYPE_7__ {TYPE_2__ wildcard; TYPE_1__ state; } ;
typedef scalar_t__ CURLcode ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 void* VAR_3 ;
 scalar_t__ FUNC_0 (struct connectdata*) ;
 scalar_t__ FUNC_1 (struct connectdata*,int*) ;
 scalar_t__ FUNC_2 (struct connectdata*) ;

__attribute__((used)) static CURLcode FUNC_3(struct connectdata *VAR_4, bool *VAR_5)
{
  CURLcode VAR_6 = VAR_0;
  struct ftp_conn *VAR_7 = &VAR_4->proto.ftpc;

  *VAR_5 = VAR_3;
  VAR_7->wait_data_conn = VAR_3;

  if(VAR_4->data->state.wildcardmatch) {
    VAR_6 = FUNC_2(VAR_4);
    if(VAR_4->data->wildcard.state == VAR_2 ||
      VAR_4->data->wildcard.state == VAR_1) {

      return VAR_0;
    }
    if(VAR_6)
      return VAR_6;
  }
  else {
    VAR_6 = FUNC_0(VAR_4);
    if(VAR_6)
      return VAR_6;
  }

  VAR_6 = FUNC_1(VAR_4, VAR_5);

  return VAR_6;
}
