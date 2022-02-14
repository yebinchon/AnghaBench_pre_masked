
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int payload; } ;
struct TYPE_6__ {int rawBuf; } ;
struct TYPE_8__ {int path; scalar_t__ autoDelete; int f; TYPE_2__ block; int pData; TYPE_1__ tsData; int assistBuf; } ;
typedef TYPE_3__ STSBuf ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

void FUNC_4(STSBuf* VAR_0) {
  if (VAR_0 == ((void*)0)) {
    return;
  }

  FUNC_2(VAR_0->assistBuf);
  FUNC_2(VAR_0->tsData.rawBuf);

  FUNC_2(VAR_0->pData);
  FUNC_2(VAR_0->block.payload);

  FUNC_0(VAR_0->f);

  if (VAR_0->autoDelete) {
    FUNC_3(VAR_0->path);
  }

  FUNC_1(VAR_0);
}
