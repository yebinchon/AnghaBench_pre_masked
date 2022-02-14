
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct stat {int st_size; } ;
typedef int int32_t ;
struct TYPE_7__ {int rowSize; TYPE_1__** sdata; } ;
struct TYPE_8__ {TYPE_2__ query; int * pMeterQuerySupporter; } ;
struct TYPE_6__ {int data; } ;
typedef TYPE_2__ SQuery ;
typedef TYPE_3__ SQInfo ;


 int FUNC_0 (char*,TYPE_3__*,int ,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (int ,struct stat*) ;
 int FUNC_3 (int ) ;

int32_t FUNC_4(void *VAR_1, int32_t *VAR_2) {
  SQInfo *VAR_3 = (SQInfo *)VAR_1;
  SQuery *VAR_4 = &VAR_3->query;







  if (VAR_3->pMeterQuerySupporter != ((void*)0) && FUNC_1(VAR_4) && (*VAR_2) > 0) {
    struct stat VAR_5;
    if (FUNC_2(VAR_4->sdata[0]->data, &VAR_5) == 0) {
      *VAR_2 = VAR_5.st_size;
      return VAR_5.st_size;
    } else {
      FUNC_0("QInfo:%p failed to get file info, path:%s, reason:%s", VAR_3, VAR_4->sdata[0]->data, FUNC_3(VAR_0));
      return 0;
    }
  } else {
    return VAR_3->query.rowSize * (*VAR_2);
  }
}
