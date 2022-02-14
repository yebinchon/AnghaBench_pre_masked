
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
typedef int int32_t ;
struct TYPE_8__ {scalar_t__ tag; } ;
struct TYPE_9__ {scalar_t__ order; } ;
struct TYPE_11__ {TYPE_1__ block; TYPE_2__ cur; int f; } ;
struct TYPE_10__ {scalar_t__ offset; scalar_t__ compLen; int numOfBlocks; } ;
typedef TYPE_3__ STSVnodeBlockInfo ;
typedef TYPE_4__ STSBuf ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ,scalar_t__,int ) ;
 int * FUNC_1 (TYPE_4__*,scalar_t__,int) ;

__attribute__((used)) static int32_t FUNC_2(STSBuf* VAR_2, STSVnodeBlockInfo* VAR_3, int64_t VAR_4) {
  bool VAR_5 = 0;

  int64_t VAR_6 = 0;
  if (VAR_2->cur.order == VAR_1) {
    VAR_6 = VAR_3->offset;
  } else {
    VAR_6 = VAR_3->offset + VAR_3->compLen;
  }

  if (FUNC_0(VAR_2->f, VAR_6, VAR_0) != 0) {
    return -1;
  }

  for (int32_t VAR_7 = 0; VAR_7 < VAR_3->numOfBlocks; ++VAR_7) {
    if (FUNC_1(VAR_2, VAR_2->cur.order, VAR_5) == ((void*)0)) {
      return -1;
    }

    if (VAR_2->block.tag == VAR_4) {
      return VAR_7;
    }
  }

  return -1;
}
