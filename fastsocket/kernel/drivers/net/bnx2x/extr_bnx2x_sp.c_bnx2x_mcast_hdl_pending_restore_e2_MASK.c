
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ next_bin; } ;
struct bnx2x_pending_mcast_cmd {int done; TYPE_1__ data; } ;
struct bnx2x_mcast_obj {scalar_t__ (* hdl_restore ) (struct bnx2x*,struct bnx2x_mcast_obj*,scalar_t__,int*) ;} ;
struct bnx2x {int dummy; } ;


 scalar_t__ FUNC_0 (struct bnx2x*,struct bnx2x_mcast_obj*,scalar_t__,int*) ;

__attribute__((used)) static inline void FUNC_1(struct bnx2x *VAR_0,
 struct bnx2x_mcast_obj *VAR_1, struct bnx2x_pending_mcast_cmd *VAR_2,
 int *VAR_3)
{
 VAR_2->data.next_bin = VAR_1->hdl_restore(VAR_0, VAR_1, VAR_2->data.next_bin,
      VAR_3);

 if (VAR_2->data.next_bin < 0)

  VAR_2->done = 1;
 else

  VAR_2->data.next_bin++;
}
