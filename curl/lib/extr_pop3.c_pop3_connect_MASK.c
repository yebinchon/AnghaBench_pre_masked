
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pingpong {struct connectdata* conn; int endofresp; int statemach_act; int response_time; } ;
struct pop3_conn {int sasl; int preftype; struct pingpong pp; } ;
struct TYPE_2__ {struct pop3_conn pop3c; } ;
struct connectdata {TYPE_1__ proto; } ;
typedef scalar_t__ CURLcode ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct pingpong*) ;
 int FUNC_1 (int *,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct connectdata*,char*) ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (struct connectdata*,int*) ;
 scalar_t__ FUNC_4 (struct connectdata*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (struct connectdata*,int ) ;

__attribute__((used)) static CURLcode FUNC_6(struct connectdata *VAR_8, bool *VAR_9)
{
  CURLcode VAR_10 = VAR_0;
  struct pop3_conn *VAR_11 = &VAR_8->proto.pop3c;
  struct pingpong *VAR_12 = &VAR_11->pp;

  *VAR_9 = VAR_1;


  FUNC_2(VAR_8, "POP3 default");


  VAR_12->response_time = VAR_4;
  VAR_12->statemach_act = VAR_6;
  VAR_12->endofresp = VAR_5;
  VAR_12->conn = VAR_8;


  VAR_11->preftype = VAR_3;
  FUNC_1(&VAR_11->sasl, &VAR_7);


  FUNC_0(VAR_12);


  VAR_10 = FUNC_4(VAR_8);
  if(VAR_10)
    return VAR_10;


  FUNC_5(VAR_8, VAR_2);

  VAR_10 = FUNC_3(VAR_8, VAR_9);

  return VAR_10;
}
