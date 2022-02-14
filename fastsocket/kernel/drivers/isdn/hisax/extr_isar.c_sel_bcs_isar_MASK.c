
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_char ;
struct IsdnCardState {struct BCState* bcs; } ;
struct TYPE_3__ {int dpath; } ;
struct TYPE_4__ {TYPE_1__ isar; } ;
struct BCState {TYPE_2__ hw; } ;



__attribute__((used)) static inline
struct BCState *FUNC_0(struct IsdnCardState *VAR_0, u_char VAR_1)
{
 if ((!VAR_1) || (VAR_1 == 3))
  return(((void*)0));
 if (VAR_0->bcs[0].hw.isar.dpath == VAR_1)
  return(&VAR_0->bcs[0]);
 if (VAR_0->bcs[1].hw.isar.dpath == VAR_1)
  return(&VAR_0->bcs[1]);
 return(((void*)0));
}
