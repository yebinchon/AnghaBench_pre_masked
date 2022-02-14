
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int* defaultVal; } ;
struct TYPE_6__ {TYPE_1__ cmd; } ;
typedef TYPE_2__ SSqlObj ;


 int FUNC_0 (TYPE_2__*,char*,int ) ;

int FUNC_1(SSqlObj *VAR_0, char *VAR_1, bool VAR_2) {
  VAR_0->cmd.defaultVal[0] = VAR_2 ? 1 : 0;
  return FUNC_0(VAR_0, VAR_1, 0);
}
