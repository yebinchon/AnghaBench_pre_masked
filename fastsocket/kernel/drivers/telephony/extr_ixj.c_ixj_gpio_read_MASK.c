
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int high; int low; } ;
struct TYPE_7__ {int high; int low; } ;
struct TYPE_8__ {TYPE_1__ bytes; } ;
struct TYPE_10__ {TYPE_3__ ssr; TYPE_2__ gpio; } ;
typedef TYPE_4__ IXJ ;


 scalar_t__ FUNC_0 (int,TYPE_4__*) ;

__attribute__((used)) static inline int FUNC_1(IXJ *VAR_0)
{
 if (FUNC_0(0x5143, VAR_0))
  return -1;

 VAR_0->gpio.bytes.low = VAR_0->ssr.low;
 VAR_0->gpio.bytes.high = VAR_0->ssr.high;

 return 0;
}
