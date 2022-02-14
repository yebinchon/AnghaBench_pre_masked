
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pingpong {struct connectdata* conn; int endofresp; int statemach_act; int response_time; } ;
struct ftp_conn {struct pingpong pp; } ;
struct TYPE_4__ {struct ftp_conn ftpc; } ;
struct connectdata {TYPE_1__* handler; TYPE_2__ proto; } ;
struct TYPE_3__ {int flags; } ;
typedef scalar_t__ CURLcode ;


 int FUNC_0 (struct pingpong*) ;
 scalar_t__ FUNC_1 (struct connectdata*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct connectdata*,char*) ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (struct connectdata*,int*) ;
 int VAR_6 ;
 int FUNC_4 (struct connectdata*,int ) ;

__attribute__((used)) static CURLcode FUNC_5(struct connectdata *VAR_7,
                                 bool *VAR_8)
{
  CURLcode VAR_9;
  struct ftp_conn *VAR_10 = &VAR_7->proto.ftpc;
  struct pingpong *VAR_11 = &VAR_10->pp;

  *VAR_8 = VAR_0;


  FUNC_2(VAR_7, "FTP default");

  VAR_11->response_time = VAR_4;
  VAR_11->statemach_act = VAR_6;
  VAR_11->endofresp = VAR_5;
  VAR_11->conn = VAR_7;

  if(VAR_7->handler->flags & VAR_3) {

    VAR_9 = FUNC_1(VAR_7, VAR_1);
    if(VAR_9)
      return VAR_9;
  }

  FUNC_0(VAR_11);



  FUNC_4(VAR_7, VAR_2);

  VAR_9 = FUNC_3(VAR_7, VAR_8);

  return VAR_9;
}
