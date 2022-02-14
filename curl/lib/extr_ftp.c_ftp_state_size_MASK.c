
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ftp_conn {scalar_t__ file; int pp; } ;
struct TYPE_6__ {struct ftp_conn ftpc; } ;
struct connectdata {TYPE_3__ proto; TYPE_2__* data; } ;
struct FTP {scalar_t__ transfer; } ;
struct TYPE_4__ {struct FTP* protop; } ;
struct TYPE_5__ {TYPE_1__ req; } ;
typedef int CURLcode ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,scalar_t__) ;
 int FUNC_1 (struct connectdata*) ;
 int FUNC_2 (struct connectdata*,int ) ;

__attribute__((used)) static CURLcode FUNC_3(struct connectdata *VAR_3)
{
  CURLcode VAR_4 = VAR_0;
  struct FTP *VAR_5 = VAR_3->data->req.protop;
  struct ftp_conn *VAR_6 = &VAR_3->proto.ftpc;

  if((VAR_5->transfer == VAR_1) && VAR_6->file) {



    FUNC_0(&VAR_6->pp, "SIZE %s", VAR_6->file);

    FUNC_2(VAR_3, VAR_2);
  }
  else
    VAR_4 = FUNC_1(VAR_3);

  return VAR_4;
}
