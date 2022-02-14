
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int in_bytes; int out_bytes; } ;
struct pxa_ep {TYPE_1__ stats; } ;



__attribute__((used)) static void FUNC_0(struct pxa_ep *VAR_0, int VAR_1, int VAR_2)
{
 if (VAR_2)
  VAR_0->stats.in_bytes += VAR_1;
 else
  VAR_0->stats.out_bytes += VAR_1;
}
