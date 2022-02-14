
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef TYPE_1__* kern_allocation_name_t ;
typedef scalar_t__ int64_t ;
struct TYPE_5__ {scalar_t__ total; scalar_t__ peak; int tag; } ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__*) ;
 int FUNC_1 (scalar_t__,scalar_t__,scalar_t__*) ;
 int FUNC_2 (int,char*,TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;

void
FUNC_4(kern_allocation_name_t VAR_0, int64_t VAR_1)
{
    uint64_t VAR_2;

    if (VAR_1 < 0) {
  FUNC_2(VAR_0->total >= ((uint64_t)-VAR_1), "name %p", VAR_0);
    }
    VAR_2 = FUNC_0(VAR_1, &VAR_0->total);
    if (!VAR_2 && !VAR_0->tag) FUNC_3(VAR_0);
}
