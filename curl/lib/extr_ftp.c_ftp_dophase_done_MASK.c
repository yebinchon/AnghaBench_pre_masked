
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ftp_conn {void* ctl_valid; } ;
struct TYPE_5__ {void* do_more; } ;
struct TYPE_7__ {struct ftp_conn ftpc; } ;
struct connectdata {TYPE_1__ bits; TYPE_4__* data; TYPE_3__ proto; } ;
struct FTP {scalar_t__ transfer; } ;
struct TYPE_6__ {struct FTP* protop; } ;
struct TYPE_8__ {TYPE_2__ req; } ;
typedef scalar_t__ CURLcode ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_4__*,int,int,int ,int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 void* VAR_3 ;
 int FUNC_1 (struct connectdata*) ;
 scalar_t__ FUNC_2 (struct connectdata*,int*) ;

__attribute__((used)) static CURLcode FUNC_3(struct connectdata *VAR_4,
                                 bool VAR_5)
{
  struct FTP *VAR_6 = VAR_4->data->req.protop;
  struct ftp_conn *VAR_7 = &VAR_4->proto.ftpc;

  if(VAR_5) {
    int VAR_8;
    CURLcode VAR_9 = FUNC_2(VAR_4, &VAR_8);

    if(VAR_9) {
      FUNC_1(VAR_4);
      return VAR_9;
    }
  }

  if(VAR_6->transfer != VAR_2)

    FUNC_0(VAR_4->data, -1, -1, VAR_1, -1);
  else if(!VAR_5)

    VAR_4->bits.do_more = VAR_3;

  VAR_7->ctl_valid = VAR_3;

  return VAR_0;
}
