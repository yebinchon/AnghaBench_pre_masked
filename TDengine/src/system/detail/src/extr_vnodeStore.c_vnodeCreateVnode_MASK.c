
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cfg; int status; } ;
typedef int SVnodeCfg ;
typedef int SVPeerDesc ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*,char*,char*,int) ;
 char* VAR_3 ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 TYPE_1__* VAR_4 ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int,int *,int *) ;

int FUNC_6(int VAR_5, SVnodeCfg *VAR_6, SVPeerDesc *VAR_7) {
  char VAR_8[128];

  VAR_4[VAR_5].status = VAR_2;

  FUNC_1(VAR_8, "%s/vnode%d", VAR_3, VAR_5);
  FUNC_0(VAR_8, 0755);

  FUNC_1(VAR_8, "%s/vnode%d/db", VAR_3, VAR_5);
  FUNC_0(VAR_8, 0755);

  VAR_4[VAR_5].cfg = *VAR_6;
  if (FUNC_2(VAR_5) != 0) {
    return VAR_1;
  }

  if (FUNC_5(VAR_5, VAR_6, VAR_7) != 0) {
    return VAR_1;
  }

  if (FUNC_3(VAR_5) != 0) {
    return VAR_0;
  }

  return FUNC_4(VAR_5);
}
