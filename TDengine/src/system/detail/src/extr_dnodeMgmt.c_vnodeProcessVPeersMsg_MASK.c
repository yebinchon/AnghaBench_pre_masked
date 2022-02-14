
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int code; int more; } ;
struct TYPE_4__ {int db; } ;
struct TYPE_5__ {TYPE_1__ cfg; } ;
typedef TYPE_2__ SVPeersMsg ;
typedef TYPE_3__ STaosRsp ;
typedef int SMgmtObj ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int) ;
 char* FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (char*,int,int *) ;

int FUNC_4(char *VAR_2, int VAR_3, SMgmtObj *VAR_4) {
  int VAR_5 = 0;

  VAR_5 = FUNC_3(VAR_2, VAR_3, VAR_4);

  char * VAR_6;
  STaosRsp * VAR_7;
  SVPeersMsg *VAR_8 = (SVPeersMsg *)VAR_2;

  VAR_6 = FUNC_1(VAR_4, VAR_1);
  if (VAR_6 == ((void*)0)) return -1;

  VAR_7 = (STaosRsp *)VAR_6;
  VAR_7->code = VAR_5;
  FUNC_0(VAR_7->more, VAR_8->cfg.db, VAR_0);

  VAR_3 = sizeof(STaosRsp) + VAR_0;
  FUNC_2(VAR_4, VAR_6, VAR_3);

  return VAR_5;
}
