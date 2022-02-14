
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ int32_t ;
struct TYPE_2__ {scalar_t__ vnode; } ;
typedef int SMgmtObj ;
typedef TYPE_1__ SFreeVnodeMsg ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,scalar_t__) ;
 int FUNC_2 (char*,scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *,int ,scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;

int FUNC_6(char *VAR_4, int VAR_5, SMgmtObj *VAR_6) {
  SFreeVnodeMsg *VAR_7;

  VAR_7 = (SFreeVnodeMsg *)VAR_4;
  VAR_7->vnode = FUNC_3(VAR_7->vnode);

  if (VAR_7->vnode < 0 || VAR_7->vnode >= VAR_2) {
    FUNC_2("vid:%d out of range", VAR_7->vnode);
    return -1;
  }

  FUNC_1("vid:%d receive free vnode message", VAR_7->vnode);
  int32_t VAR_8 = FUNC_5(VAR_7->vnode);
  FUNC_0(VAR_8 == VAR_1 || VAR_8 == VAR_0);

  FUNC_4(VAR_6, VAR_3, VAR_8);
  return 0;
}
