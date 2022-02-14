
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_10__ {int numOfPoints; } ;
struct TYPE_8__ {scalar_t__ offset; } ;
struct TYPE_9__ {scalar_t__ numOfFilterCols; int pos; int numOfBlocks; TYPE_1__ limit; } ;
typedef int SVnodeObj ;
typedef TYPE_2__ SQuery ;
typedef int SMeterObj ;
typedef TYPE_3__ SCompBlock ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int,int,int *,int *) ;

int FUNC_2(SQuery *VAR_0, SCompBlock *VAR_1, int32_t VAR_2, SVnodeObj *VAR_3, SMeterObj *VAR_4) {
  int VAR_5 = FUNC_0(VAR_0) ? 1 : -1;

  if (VAR_0->limit.offset > 0 && VAR_0->numOfFilterCols == 0) {
    int VAR_6 = FUNC_0(VAR_0) ? VAR_1->numOfPoints - VAR_0->pos : VAR_0->pos + 1;

    if (VAR_0->limit.offset < VAR_6) {
      if (FUNC_0(VAR_0)) {
        VAR_0->pos += VAR_0->limit.offset;
      } else {
        VAR_0->pos -= VAR_0->limit.offset;
      }

      VAR_0->limit.offset = 0;

    } else {
      VAR_0->limit.offset -= VAR_6;
      VAR_2 += VAR_5;

      return FUNC_1(VAR_0, VAR_2, VAR_5, VAR_3, VAR_4);
    }
  }

  return VAR_0->numOfBlocks;
}
