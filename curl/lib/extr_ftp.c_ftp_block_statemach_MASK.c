
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pingpong {int dummy; } ;
struct ftp_conn {scalar_t__ state; struct pingpong pp; } ;
struct TYPE_2__ {struct ftp_conn ftpc; } ;
struct connectdata {TYPE_1__ proto; } ;
typedef scalar_t__ CURLcode ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct pingpong*,int ,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static CURLcode FUNC_1(struct connectdata *VAR_3)
{
  struct ftp_conn *VAR_4 = &VAR_3->proto.ftpc;
  struct pingpong *VAR_5 = &VAR_4->pp;
  CURLcode VAR_6 = VAR_0;

  while(VAR_4->state != VAR_1) {
    VAR_6 = FUNC_0(VAR_5, VAR_2, VAR_2 );
    if(VAR_6)
      break;
  }

  return VAR_6;
}
