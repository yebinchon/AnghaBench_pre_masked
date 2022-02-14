
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_4__ {int offset; } ;
struct TYPE_5__ {TYPE_1__ limit; } ;
struct TYPE_6__ {TYPE_2__ query; } ;
typedef TYPE_3__ SQInfo ;



int64_t FUNC_0(void *VAR_0) {
  SQInfo *VAR_1 = (SQInfo *)VAR_0;
  return VAR_1->query.limit.offset;
}
