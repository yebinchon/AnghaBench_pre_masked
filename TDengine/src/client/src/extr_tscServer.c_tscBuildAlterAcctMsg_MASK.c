
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int msgType; } ;
struct TYPE_6__ {TYPE_1__ cmd; } ;
typedef TYPE_2__ SSqlObj ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;

int FUNC_1(SSqlObj *VAR_1) {
  int VAR_2 = FUNC_0(VAR_1);
  VAR_1->cmd.msgType = VAR_0;
  return VAR_2;
}
