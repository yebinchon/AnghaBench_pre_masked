
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ count; scalar_t__ state; } ;
struct TYPE_9__ {TYPE_1__ internal; } ;
struct TYPE_10__ {TYPE_2__ counter; } ;
typedef TYPE_3__ ptw32_oll_snziRoot_t ;
struct TYPE_11__ {int nonZero; int open; } ;
typedef TYPE_4__ ptw32_oll_queryResult_t ;
struct TYPE_12__ {TYPE_3__ proxyRoot; } ;
typedef TYPE_5__ ptw32_oll_csnzi_t ;


 scalar_t__ VAR_0 ;

ptw32_oll_queryResult_t
FUNC_0(ptw32_oll_csnzi_t* VAR_1)
{
  ptw32_oll_queryResult_t VAR_2;
  ptw32_oll_snziRoot_t VAR_3 = VAR_1->proxyRoot;

  VAR_2.nonZero = (VAR_3.counter.internal.count > 0);
  VAR_2.open = (VAR_3.counter.internal.state == VAR_0);
  return VAR_2;
}
