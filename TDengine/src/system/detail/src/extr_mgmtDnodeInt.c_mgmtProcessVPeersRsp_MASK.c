
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ vgStatus; } ;
struct TYPE_7__ {int privateIp; } ;
struct TYPE_6__ {scalar_t__ code; int more; } ;
typedef TYPE_1__ STaosRsp ;
typedef TYPE_2__ SDnodeObj ;
typedef TYPE_3__ SDbObj ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (char*,int ,scalar_t__,...) ;
 int FUNC_1 (char*,int ,int ,...) ;
 TYPE_3__* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

int FUNC_4(char *VAR_5, int VAR_6, SDnodeObj *VAR_7) {
  STaosRsp *VAR_8 = (STaosRsp *)VAR_5;

  SDbObj *VAR_9 = FUNC_2(VAR_8->more);
  if (!VAR_9) {
    FUNC_0("dnode:%s, db not find, code:%d", FUNC_3(VAR_7->privateIp), VAR_8->code);
    return 0;
  }

  if (VAR_9->vgStatus != VAR_3) {
    FUNC_1("dnode:%s, db:%s vpeer rsp already disposed, code:%d", FUNC_3(VAR_7->privateIp), VAR_8->more, VAR_8->code);
    return 0;
  }

  if (VAR_8->code == 0) {
    VAR_9->vgStatus = VAR_4;
    FUNC_1("dnode:%s, db:%s vgroup is created in dnode", FUNC_3(VAR_7->privateIp), VAR_8->more);
    return 0;
  }

  if (VAR_8->code == VAR_0) {
    VAR_9->vgStatus = VAR_1;
  } else {
    VAR_9->vgStatus = VAR_2;
  }
  FUNC_0("dnode:%s, db:%s vgroup create failed, code:%d", FUNC_3(VAR_7->privateIp), VAR_8->more, VAR_8->code);

  return 0;
}
