
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_9__ {int order; } ;
struct TYPE_11__ {int numOfVnodes; TYPE_1__ cur; } ;
struct TYPE_10__ {int vnode; int ts; int tag; } ;
typedef TYPE_2__ STSElem ;
typedef TYPE_3__ STSBuf ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 TYPE_2__ FUNC_1 (TYPE_3__*) ;
 scalar_t__ FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;

void FUNC_4(STSBuf* VAR_1) {
  FUNC_0("-------start of ts comp file-------\n");
  FUNC_0("number of vnode:%d\n", VAR_1->numOfVnodes);

  int32_t VAR_2 = VAR_1->cur.order;
  VAR_1->cur.order = VAR_0;

  FUNC_3(VAR_1);

  while (FUNC_2(VAR_1)) {
    STSElem VAR_3 = FUNC_1(VAR_1);
    FUNC_0("%d-%lld-%lld\n", VAR_3.vnode, VAR_3.tag, VAR_3.ts);
  }

  VAR_1->cur.order = VAR_2;
  FUNC_0("-------end of ts comp file-------\n");
}
