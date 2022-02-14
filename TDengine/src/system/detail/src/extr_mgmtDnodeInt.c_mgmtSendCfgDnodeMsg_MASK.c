
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_7__ {int config; int ip; } ;
struct TYPE_6__ {int thandle; int privateIp; } ;
typedef TYPE_1__ SDnodeObj ;
typedef TYPE_2__ SCfgMsg ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*,int ,int ) ;
 int FUNC_3 (char*,char*,int) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 TYPE_1__* FUNC_5 (int ) ;
 char* FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (TYPE_1__*,char*,int) ;

int FUNC_9(char *VAR_3) {
  char * VAR_4, *VAR_5;
  int VAR_6 = 0;
  SDnodeObj *VAR_7;
  SCfgMsg * VAR_8 = (SCfgMsg *)VAR_3;
  uint32_t VAR_9;

  VAR_9 = FUNC_0(VAR_8->ip);
  VAR_7 = FUNC_5(VAR_9);
  if (VAR_7 == ((void*)0)) {
    FUNC_1("dnode ip:%s not configured", VAR_8->ip);
    return VAR_1;
  }

  FUNC_2("dnode:%s, dynamic option received, content:%s", FUNC_7(VAR_7->privateIp), VAR_8->config);
  int VAR_10 = FUNC_4(VAR_7, VAR_8->config);
  if (VAR_10 != -1) {
    return VAR_10;
  }

  VAR_5 = FUNC_6(VAR_7->thandle, VAR_2);
  if (VAR_5 == ((void*)0)) return VAR_0;
  VAR_4 = VAR_5;

  FUNC_3(VAR_4, VAR_3, sizeof(SCfgMsg));
  VAR_4 += sizeof(SCfgMsg);

  VAR_6 = VAR_4 - VAR_5;
  FUNC_8(VAR_7, VAR_5, VAR_6);

  return 0;
}
