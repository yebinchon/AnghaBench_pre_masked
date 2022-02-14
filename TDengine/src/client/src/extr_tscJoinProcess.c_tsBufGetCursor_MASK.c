
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int vnodeIndex; } ;
struct TYPE_6__ {TYPE_1__ cur; } ;
typedef TYPE_1__ STSCursor ;
typedef TYPE_2__ STSBuf ;



STSCursor FUNC_0(STSBuf* VAR_0) {
  STSCursor VAR_1 = {.vnodeIndex = -1};
  if (VAR_0 == ((void*)0)) {
    return VAR_1;
  }

  return VAR_0->cur;
}
