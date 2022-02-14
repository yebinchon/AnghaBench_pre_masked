
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t f1; size_t f2; int dfifosize; int* send; } ;
struct TYPE_4__ {TYPE_1__ hfcD; } ;
struct IsdnCardState {TYPE_2__ hw; } ;



__attribute__((used)) static int
FUNC_0(struct IsdnCardState *VAR_0)
{
 int VAR_1;

 if (VAR_0->hw.hfcD.f1 == VAR_0->hw.hfcD.f2)
  return (VAR_0->hw.hfcD.dfifosize);
 VAR_1 = VAR_0->hw.hfcD.send[VAR_0->hw.hfcD.f1] - VAR_0->hw.hfcD.send[VAR_0->hw.hfcD.f2];
 if (VAR_1 <= 0)
  VAR_1 += VAR_0->hw.hfcD.dfifosize;
 VAR_1 = VAR_0->hw.hfcD.dfifosize - VAR_1;
 return (VAR_1);
}
