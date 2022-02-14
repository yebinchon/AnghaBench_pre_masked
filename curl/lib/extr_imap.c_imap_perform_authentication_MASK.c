
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct imap_conn {int preftype; int login_disabled; int ir_supported; int sasl; scalar_t__ preauth; } ;
struct TYPE_2__ {struct imap_conn imapc; } ;
struct connectdata {int data; TYPE_1__ proto; } ;
typedef scalar_t__ saslprogress ;
typedef scalar_t__ CURLcode ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,struct connectdata*) ;
 scalar_t__ FUNC_1 (int *,struct connectdata*,int ,scalar_t__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_2 (struct connectdata*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct connectdata*,int ) ;

__attribute__((used)) static CURLcode FUNC_5(struct connectdata *VAR_6)
{
  CURLcode VAR_7 = VAR_1;
  struct imap_conn *VAR_8 = &VAR_6->proto.imapc;
  saslprogress VAR_9;



  if(VAR_8->preauth ||
     !FUNC_0(&VAR_8->sasl, VAR_6)) {
    FUNC_4(VAR_6, VAR_3);
    return VAR_7;
  }


  VAR_7 = FUNC_1(&VAR_8->sasl, VAR_6, VAR_8->ir_supported, &VAR_9);

  if(!VAR_7) {
    if(VAR_9 == VAR_5)
      FUNC_4(VAR_6, VAR_2);
    else if(!VAR_8->login_disabled && (VAR_8->preftype & VAR_4))

      VAR_7 = FUNC_2(VAR_6);
    else {

      FUNC_3(VAR_6->data, "No known authentication mechanisms supported!\n");
      VAR_7 = VAR_0;
    }
  }

  return VAR_7;
}
