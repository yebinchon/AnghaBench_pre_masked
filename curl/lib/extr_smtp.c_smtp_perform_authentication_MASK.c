
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smtp_conn {int sasl; int auth_supported; } ;
struct TYPE_2__ {struct smtp_conn smtpc; } ;
struct connectdata {int data; TYPE_1__ proto; } ;
typedef scalar_t__ saslprogress ;
typedef scalar_t__ CURLcode ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,struct connectdata*) ;
 scalar_t__ FUNC_1 (int *,struct connectdata*,int ,scalar_t__*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct connectdata*,int ) ;

__attribute__((used)) static CURLcode FUNC_4(struct connectdata *VAR_6)
{
  CURLcode VAR_7 = VAR_1;
  struct smtp_conn *VAR_8 = &VAR_6->proto.smtpc;
  saslprogress VAR_9;



  if(!VAR_8->auth_supported ||
     !FUNC_0(&VAR_8->sasl, VAR_6)) {
    FUNC_3(VAR_6, VAR_5);
    return VAR_7;
  }


  VAR_7 = FUNC_1(&VAR_8->sasl, VAR_6, VAR_2, &VAR_9);

  if(!VAR_7) {
    if(VAR_9 == VAR_3)
      FUNC_3(VAR_6, VAR_4);
    else {

      FUNC_2(VAR_6->data, "No known authentication mechanisms supported!\n");
      VAR_7 = VAR_0;
    }
  }

  return VAR_7;
}
