
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ r2; int stag_inv; } ;
union t4_wr {TYPE_2__ inv; } ;
typedef int u8 ;
struct TYPE_3__ {int invalidate_rkey; } ;
struct ib_send_wr {TYPE_1__ ex; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(union t4_wr *VAR_0, struct ib_send_wr *VAR_1,
     u8 *VAR_2)
{
 VAR_0->inv.stag_inv = FUNC_1(VAR_1->ex.invalidate_rkey);
 VAR_0->inv.r2 = 0;
 *VAR_2 = FUNC_0(sizeof VAR_0->inv, 16);
 return 0;
}
