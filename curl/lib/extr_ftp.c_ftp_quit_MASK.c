
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ ctl_valid; int pp; } ;
struct TYPE_4__ {TYPE_1__ ftpc; } ;
struct connectdata {TYPE_2__ proto; int data; } ;
typedef scalar_t__ CURLcode ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *,char*,char*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct connectdata*,char*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,char*,int ) ;
 scalar_t__ FUNC_4 (struct connectdata*) ;
 int FUNC_5 (struct connectdata*,int ) ;

__attribute__((used)) static CURLcode FUNC_6(struct connectdata *VAR_4)
{
  CURLcode VAR_5 = VAR_0;

  if(VAR_4->proto.ftpc.ctl_valid) {
    VAR_5 = FUNC_0(&VAR_4->proto.ftpc.pp, "%s", "QUIT");
    if(VAR_5) {
      FUNC_3(VAR_4->data, "Failure sending QUIT command: %s",
            FUNC_2(VAR_5));
      VAR_4->proto.ftpc.ctl_valid = VAR_1;
      FUNC_1(VAR_4, "QUIT command failed");
      FUNC_5(VAR_4, VAR_3);
      return VAR_5;
    }

    FUNC_5(VAR_4, VAR_2);

    VAR_5 = FUNC_4(VAR_4);
  }

  return VAR_5;
}
