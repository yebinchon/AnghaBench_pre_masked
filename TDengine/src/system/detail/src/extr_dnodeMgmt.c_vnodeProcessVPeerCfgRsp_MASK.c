
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_4__ {scalar_t__ lastKey; } ;
struct TYPE_3__ {scalar_t__ code; scalar_t__ more; } ;
typedef TYPE_1__ STaosRsp ;
typedef int SMgmtObj ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int ) ;
 TYPE_2__* VAR_1 ;
 int FUNC_3 (scalar_t__,int,int *) ;
 int FUNC_4 (int) ;

int FUNC_5(char *VAR_2, int VAR_3, SMgmtObj *VAR_4) {
  STaosRsp *VAR_5;

  VAR_5 = (STaosRsp *)VAR_2;

  if (VAR_5->code == 0) {
    FUNC_3(VAR_5->more, VAR_3 - sizeof(STaosRsp), VAR_4);
  } else {
    int32_t *VAR_6 = (int32_t *)VAR_5->more;
    int VAR_7 = FUNC_2(*VAR_6);
    if (VAR_7 < VAR_0 && VAR_1[VAR_7].lastKey != 0) {
      FUNC_0("vnode:%d not configured, it shall be empty");
      FUNC_4(VAR_7);
    } else {
      FUNC_1("vnode:%d is invalid", VAR_7);
    }
  }

  return 0;
}
