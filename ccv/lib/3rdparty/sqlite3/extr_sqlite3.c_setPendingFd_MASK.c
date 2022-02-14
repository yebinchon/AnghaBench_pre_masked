
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_3__* pUnused; } ;
typedef TYPE_1__ unixInodeInfo ;
struct TYPE_6__ {int h; TYPE_3__* pPreallocatedUnused; TYPE_1__* pInode; } ;
typedef TYPE_2__ unixFile ;
struct TYPE_7__ {struct TYPE_7__* pNext; } ;
typedef TYPE_3__ UnixUnusedFd ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(unixFile *VAR_1){
  unixInodeInfo *VAR_2 = VAR_1->pInode;
  UnixUnusedFd *VAR_3 = VAR_1->pPreallocatedUnused;
  VAR_3->pNext = VAR_2->pUnused;
  VAR_2->pUnused = VAR_3;
  VAR_1->h = -1;
  VAR_1->pPreallocatedUnused = 0;
  VAR_0++;
}
