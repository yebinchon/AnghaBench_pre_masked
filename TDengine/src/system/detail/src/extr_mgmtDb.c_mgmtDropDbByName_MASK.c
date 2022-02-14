
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int name; } ;
typedef TYPE_1__ SDbObj ;
typedef int SAcctObj ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,char*) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (int ,char*) ;
 int VAR_3 ;

int FUNC_4(SAcctObj *VAR_4, char *VAR_5) {
  SDbObj *VAR_6;
  VAR_6 = (SDbObj *)FUNC_3(VAR_2, VAR_5);
  if (VAR_6 == ((void*)0)) {
    FUNC_0("db:%s is not there", VAR_5);

    return VAR_1;
  }

  if (FUNC_1(VAR_6->name, VAR_3)) {
    return VAR_0;
  }

  return FUNC_2(VAR_6);
}
