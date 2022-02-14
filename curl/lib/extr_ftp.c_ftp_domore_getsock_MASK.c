
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ftp_conn {scalar_t__ state; int pp; } ;
struct TYPE_6__ {struct ftp_conn ftpc; } ;
struct connectdata {scalar_t__* sock; scalar_t__* tempsock; TYPE_3__ proto; TYPE_2__* data; } ;
typedef scalar_t__ curl_socket_t ;
struct TYPE_4__ {int ftp_use_port; } ;
struct TYPE_5__ {TYPE_1__ set; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,scalar_t__*) ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 size_t VAR_3 ;

__attribute__((used)) static int FUNC_3(struct connectdata *VAR_4, curl_socket_t *VAR_5)
{
  struct ftp_conn *VAR_6 = &VAR_4->proto.ftpc;






  if(VAR_2 == VAR_6->state) {
    int VAR_7 = FUNC_1(0);



    VAR_5[0] = VAR_4->sock[VAR_1];

    if(!VAR_4->data->set.ftp_use_port) {
      int VAR_8;
      int VAR_9;


      for(VAR_8 = 1, VAR_9 = 0; VAR_9<2; VAR_9++) {
        if(VAR_4->tempsock[VAR_9] != VAR_0) {
          VAR_5[VAR_8] = VAR_4->tempsock[VAR_9];
          VAR_7 |= FUNC_2(VAR_8++);
        }
      }
    }
    else {
      VAR_5[1] = VAR_4->sock[VAR_3];
      VAR_7 |= FUNC_2(1) | FUNC_1(1);
    }

    return VAR_7;
  }
  return FUNC_0(&VAR_4->proto.ftpc.pp, VAR_5);
}
