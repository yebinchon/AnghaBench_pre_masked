
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pingpong {struct connectdata* conn; int endofresp; int statemach_act; int response_time; } ;
struct smtp_conn {int sasl; struct pingpong pp; } ;
struct TYPE_2__ {struct smtp_conn smtpc; } ;
struct connectdata {TYPE_1__ proto; } ;
typedef scalar_t__ CURLcode ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct pingpong*) ;
 int FUNC_1 (int *,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct connectdata*,char*) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (struct connectdata*,int*) ;
 scalar_t__ FUNC_4 (struct connectdata*) ;
 scalar_t__ FUNC_5 (struct connectdata*) ;
 int VAR_6 ;
 int FUNC_6 (struct connectdata*,int ) ;

__attribute__((used)) static CURLcode FUNC_7(struct connectdata *VAR_7, bool *VAR_8)
{
  CURLcode VAR_9 = VAR_0;
  struct smtp_conn *VAR_10 = &VAR_7->proto.smtpc;
  struct pingpong *VAR_11 = &VAR_10->pp;

  *VAR_8 = VAR_1;


  FUNC_2(VAR_7, "SMTP default");


  VAR_11->response_time = VAR_2;
  VAR_11->statemach_act = VAR_6;
  VAR_11->endofresp = VAR_5;
  VAR_11->conn = VAR_7;


  FUNC_1(&VAR_10->sasl, &VAR_4);


  FUNC_0(VAR_11);


  VAR_9 = FUNC_4(VAR_7);
  if(VAR_9)
    return VAR_9;


  VAR_9 = FUNC_5(VAR_7);
  if(VAR_9)
    return VAR_9;


  FUNC_6(VAR_7, VAR_3);

  VAR_9 = FUNC_3(VAR_7, VAR_8);

  return VAR_9;
}
