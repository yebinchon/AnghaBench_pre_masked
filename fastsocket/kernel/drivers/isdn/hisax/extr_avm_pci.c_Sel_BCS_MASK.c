
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct IsdnCardState {struct BCState* bcs; } ;
struct BCState {int channel; scalar_t__ mode; } ;



__attribute__((used)) static inline
struct BCState *FUNC_0(struct IsdnCardState *VAR_0, int VAR_1)
{
 if (VAR_0->bcs[0].mode && (VAR_0->bcs[0].channel == VAR_1))
  return(&VAR_0->bcs[0]);
 else if (VAR_0->bcs[1].mode && (VAR_0->bcs[1].channel == VAR_1))
  return(&VAR_0->bcs[1]);
 else
  return(((void*)0));
}
