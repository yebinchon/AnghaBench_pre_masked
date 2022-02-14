
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ reserved; int stag; } ;
union t3_wr {TYPE_2__ local_inv; } ;
typedef int u8 ;
struct t3_local_inv_wr {int dummy; } ;
struct TYPE_3__ {int invalidate_rkey; } ;
struct ib_send_wr {TYPE_1__ ex; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(union t3_wr *VAR_0, struct ib_send_wr *VAR_1,
    u8 *VAR_2)
{
 VAR_0->local_inv.stag = FUNC_0(VAR_1->ex.invalidate_rkey);
 VAR_0->local_inv.reserved = 0;
 *VAR_2 = sizeof(struct t3_local_inv_wr) >> 3;
 return 0;
}
