
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int name; } ;
struct TYPE_7__ {int cmd; TYPE_1__* pTscObj; } ;
struct TYPE_6__ {int db; } ;
typedef TYPE_1__ STscObj ;
typedef TYPE_2__ SSqlObj ;
typedef TYPE_3__ SMeterMetaInfo ;


 int FUNC_0 (int ,int ) ;
 TYPE_3__* FUNC_1 (int *,int ) ;

int FUNC_2(SSqlObj *VAR_0) {
  STscObj * VAR_1 = VAR_0->pTscObj;
  SMeterMetaInfo *VAR_2 = FUNC_1(&VAR_0->cmd, 0);

  FUNC_0(VAR_1->db, VAR_2->name);
  return 0;
}
