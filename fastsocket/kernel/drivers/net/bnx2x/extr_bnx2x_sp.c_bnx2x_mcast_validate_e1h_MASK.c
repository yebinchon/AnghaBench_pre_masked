
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnx2x_mcast_ramrod_params {int mcast_list_len; } ;
struct bnx2x {int dummy; } ;
typedef enum bnx2x_mcast_cmd { ____Placeholder_bnx2x_mcast_cmd } bnx2x_mcast_cmd ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct bnx2x *VAR_2,
        struct bnx2x_mcast_ramrod_params *VAR_3,
        enum bnx2x_mcast_cmd VAR_4)
{

 if ((VAR_4 == VAR_0) || (VAR_4 == VAR_1))
  VAR_3->mcast_list_len = 1;

 return 0;
}
