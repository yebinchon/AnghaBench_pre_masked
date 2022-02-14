
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_14__ {size_t vnodeIdx; } ;
struct TYPE_12__ {int type; } ;
struct TYPE_13__ {struct TYPE_13__** pSubs; TYPE_1__ cmd; } ;
typedef TYPE_2__ SSqlObj ;
typedef TYPE_3__ SRetrieveSupport ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (TYPE_2__*,size_t,int ,int ,TYPE_3__*,TYPE_2__*) ;
 int VAR_1 ;

__attribute__((used)) static SSqlObj *FUNC_1(SSqlObj *VAR_2, SRetrieveSupport *VAR_3, SSqlObj *VAR_4) {
  SSqlObj *VAR_5 = FUNC_0(VAR_2, VAR_3->vnodeIdx, 0, VAR_1, VAR_3, VAR_4);
  if (VAR_5 != ((void*)0)) {
    VAR_5->cmd.type |= VAR_0;
    VAR_2->pSubs[VAR_3->vnodeIdx] = VAR_5;
  }

  return VAR_5;
}
