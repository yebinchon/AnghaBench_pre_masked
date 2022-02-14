
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pop3_conn {int authtypes; int preftype; int sasl; } ;
struct TYPE_2__ {struct pop3_conn pop3c; } ;
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
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (struct connectdata*) ;
 scalar_t__ FUNC_4 (struct connectdata*) ;
 int FUNC_5 (struct connectdata*,int ) ;

__attribute__((used)) static CURLcode FUNC_6(struct connectdata *VAR_10)
{
  CURLcode VAR_11 = VAR_1;
  struct pop3_conn *VAR_12 = &VAR_10->proto.pop3c;
  saslprogress VAR_13 = VAR_8;



  if(!FUNC_0(&VAR_12->sasl, VAR_10)) {
    FUNC_5(VAR_10, VAR_4);
    return VAR_11;
  }

  if(VAR_12->authtypes & VAR_12->preftype & VAR_7) {

    VAR_11 = FUNC_1(&VAR_12->sasl, VAR_10, VAR_2, &VAR_13);

    if(!VAR_11)
      if(VAR_13 == VAR_9)
        FUNC_5(VAR_10, VAR_3);
  }

  if(!VAR_11 && VAR_13 == VAR_8) {

    if(VAR_12->authtypes & VAR_12->preftype & VAR_5)

      VAR_11 = FUNC_3(VAR_10);
    else

    if(VAR_12->authtypes & VAR_12->preftype & VAR_6)

      VAR_11 = FUNC_4(VAR_10);
    else {

      FUNC_2(VAR_10->data, "No known authentication mechanisms supported!\n");
      VAR_11 = VAR_0;
    }
  }

  return VAR_11;
}
