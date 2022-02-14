
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int vnodeIndex; int blockIndex; } ;
struct TYPE_7__ {TYPE_1__ cur; } ;
typedef TYPE_1__ STSCursor ;
typedef TYPE_2__ STSBuf ;


 int FUNC_0 (TYPE_2__*,int,int ) ;

void FUNC_1(STSBuf* VAR_0, STSCursor* VAR_1) {
  if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0)) {
    return;
  }


  if (VAR_1->vnodeIndex != -1) {
    FUNC_0(VAR_0, VAR_1->vnodeIndex, VAR_1->blockIndex);
  }

  VAR_0->cur = *VAR_1;
}
