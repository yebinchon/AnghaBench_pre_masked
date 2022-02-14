
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct bnx2x {int dummy; } ;
struct TYPE_3__ {int en_mask; int mask_addr; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct bnx2x*,int ,int) ;
 TYPE_1__* VAR_0 ;
 int FUNC_2 (struct bnx2x*,int) ;
 int FUNC_3 (struct bnx2x*,int) ;

__attribute__((used)) static inline void FUNC_4(struct bnx2x *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++) {
  u32 VAR_3 = FUNC_2(VAR_1, VAR_2);

  if (VAR_3)
   FUNC_1(VAR_1, VAR_0[VAR_2].mask_addr,
    VAR_0[VAR_2].en_mask & VAR_3);
 }


 FUNC_3(VAR_1, 1);
}
