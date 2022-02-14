
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int (* clear_pending ) (TYPE_2__*) ;} ;
struct TYPE_3__ {scalar_t__ (* check_pending ) (TYPE_1__*) ;TYPE_2__ raw; } ;
struct bnx2x_virtf {TYPE_1__ mcast_obj; } ;
struct bnx2x_mcast_ramrod_params {TYPE_1__* mcast_obj; int * member_0; } ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int FUNC_1 (struct bnx2x*,struct bnx2x_mcast_ramrod_params*,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static
void FUNC_4(struct bnx2x *VAR_1,
          struct bnx2x_virtf *VAR_2)
{
 struct bnx2x_mcast_ramrod_params VAR_3 = {((void*)0)};
 int VAR_4;

 VAR_3.mcast_obj = &VAR_2->mcast_obj;
 VAR_2->mcast_obj.raw.clear_pending(&VAR_2->mcast_obj.raw);


 if (VAR_2->mcast_obj.check_pending(&VAR_2->mcast_obj)) {
  VAR_4 = FUNC_1(VAR_1, &VAR_3, VAR_0);
  if (VAR_4 < 0)
   FUNC_0("Failed to send pending mcast commands: %d\n",
      VAR_4);
 }
}
