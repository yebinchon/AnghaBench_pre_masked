
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int num; } ;
typedef TYPE_1__ tQueryResultset ;
typedef int int32_t ;
typedef int SVnodeSidList ;
typedef int SMetricMeta ;
typedef int SMeterSidExtInfo ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static int32_t FUNC_1(tQueryResultset *VAR_0, int32_t VAR_1, int32_t VAR_2) {
  int32_t VAR_3 = FUNC_0(VAR_0);

  int32_t VAR_4 = (sizeof(SMeterSidExtInfo) + VAR_1) * VAR_0->num +
                 ((VAR_0->num / VAR_2) + 1 + VAR_3) * sizeof(SVnodeSidList) + sizeof(SMetricMeta) +
                 1024;

  return VAR_4;
}
