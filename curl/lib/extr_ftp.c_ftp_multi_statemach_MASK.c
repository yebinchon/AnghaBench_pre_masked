
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ftp_conn {scalar_t__ state; int pp; } ;
struct TYPE_2__ {struct ftp_conn ftpc; } ;
struct connectdata {TYPE_1__ proto; } ;
typedef int CURLcode ;


 int FUNC_0 (int *,int,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static CURLcode FUNC_1(struct connectdata *VAR_3,
                                    bool *VAR_4)
{
  struct ftp_conn *VAR_5 = &VAR_3->proto.ftpc;
  CURLcode VAR_6 = FUNC_0(&VAR_5->pp, VAR_0, VAR_0);




  *VAR_4 = (VAR_5->state == VAR_1) ? VAR_2 : VAR_0;

  return VAR_6;
}
