
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {size_t count; int state; } ;
struct TYPE_7__ {TYPE_1__ internal; } ;
struct TYPE_8__ {TYPE_2__ counter; } ;
struct TYPE_9__ {TYPE_3__ proxyRoot; } ;
typedef TYPE_4__ ptw32_oll_csnzi_t ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;

void
FUNC_0(ptw32_oll_csnzi_t* VAR_2, size_t VAR_3, BOOL VAR_4)
{
  VAR_2->proxyRoot.counter.internal.count = VAR_3;
  VAR_2->proxyRoot.counter.internal.state = (VAR_4 ? VAR_0 : VAR_1);
}
