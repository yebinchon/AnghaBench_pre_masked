
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smtp_conn {scalar_t__ state; scalar_t__ ssldone; } ;
struct TYPE_2__ {struct smtp_conn smtpc; } ;
struct connectdata {TYPE_1__ proto; } ;
typedef int CURLcode ;


 int FUNC_0 (struct connectdata*,int ,scalar_t__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct connectdata*) ;
 int FUNC_2 (struct connectdata*) ;
 int FUNC_3 (struct connectdata*,scalar_t__) ;

__attribute__((used)) static CURLcode FUNC_4(struct connectdata *VAR_2)
{

  struct smtp_conn *VAR_3 = &VAR_2->proto.smtpc;
  CURLcode VAR_4 = FUNC_0(VAR_2, VAR_0,
                                                 &VAR_3->ssldone);

  if(!VAR_4) {
    if(VAR_3->state != VAR_1)
      FUNC_3(VAR_2, VAR_1);

    if(VAR_3->ssldone) {
      FUNC_2(VAR_2);
      VAR_4 = FUNC_1(VAR_2);
    }
  }

  return VAR_4;
}
