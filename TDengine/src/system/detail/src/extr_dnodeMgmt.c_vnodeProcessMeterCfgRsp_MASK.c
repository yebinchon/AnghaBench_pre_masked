
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_2__ {scalar_t__ more; } ;
typedef TYPE_1__ STaosRsp ;
typedef int SMgmtObj ;


 int FUNC_0 (char*,int,int,int) ;
 int FUNC_1 (char*,int,int,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (int,int) ;

int FUNC_5(char *VAR_0, int VAR_1, SMgmtObj *VAR_2) {
  int VAR_3 = *VAR_0;

  if (VAR_3 == 0) {
    FUNC_3(VAR_0 + 1, VAR_1 - 1);
  } else {
    STaosRsp *VAR_4;
    VAR_4 = (STaosRsp *)VAR_0;
    int32_t *VAR_5 = (int32_t *)VAR_4->more;
    int VAR_6 = FUNC_2(*VAR_5);
    int VAR_7 = FUNC_2(*(VAR_5 + 1));
    FUNC_0("vid:%d, sid:%d, code:%d, meter is not configured, remove it", VAR_6, VAR_7, VAR_3);
    int VAR_8 = FUNC_4(VAR_6, VAR_7);
    FUNC_1("vid:%d, sid:%d, meter delete ret:%d", VAR_6, VAR_7, VAR_8);
  }

  return 0;
}
