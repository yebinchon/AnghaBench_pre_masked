
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {size_t f1; size_t f2; int* send; } ;
struct TYPE_7__ {TYPE_1__ hfc; } ;
struct BCState {TYPE_5__* cs; TYPE_2__ hw; } ;
struct TYPE_8__ {int fifosize; } ;
struct TYPE_9__ {TYPE_3__ hfc; } ;
struct TYPE_10__ {TYPE_4__ hw; } ;



__attribute__((used)) static int
FUNC_0(struct BCState *VAR_0)
{
 int VAR_1;

 if (VAR_0->hw.hfc.f1 == VAR_0->hw.hfc.f2)
  return (VAR_0->cs->hw.hfc.fifosize);
 VAR_1 = VAR_0->hw.hfc.send[VAR_0->hw.hfc.f1] - VAR_0->hw.hfc.send[VAR_0->hw.hfc.f2];
 if (VAR_1 <= 0)
  VAR_1 += VAR_0->cs->hw.hfc.fifosize;
 VAR_1 = VAR_0->cs->hw.hfc.fifosize - VAR_1;
 return (VAR_1);
}
