
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct ffb_par {scalar_t__ rop_cache; TYPE_1__* fbc; } ;
struct TYPE_2__ {int rop; } ;


 int FUNC_0 (struct ffb_par*,int) ;
 int FUNC_1 (scalar_t__,int *) ;

__attribute__((used)) static __inline__ void FUNC_2(struct ffb_par *VAR_0, u32 VAR_1)
{
 if (VAR_0->rop_cache != VAR_1) {
  FUNC_0(VAR_0, 1);
  FUNC_1(VAR_1, &VAR_0->fbc->rop);
  VAR_0->rop_cache = VAR_1;
 }
}
