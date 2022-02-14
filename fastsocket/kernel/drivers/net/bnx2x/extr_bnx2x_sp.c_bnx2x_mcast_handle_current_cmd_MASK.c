
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnx2x_mcast_ramrod_params {scalar_t__ mcast_list_len; struct bnx2x_mcast_obj* mcast_obj; } ;
struct bnx2x_mcast_obj {int (* hdl_restore ) (struct bnx2x*,struct bnx2x_mcast_obj*,int ,int*) ;} ;
struct bnx2x {int dummy; } ;
typedef enum bnx2x_mcast_cmd { ____Placeholder_bnx2x_mcast_cmd } bnx2x_mcast_cmd ;


 int FUNC_0 (char*,int) ;



 int VAR_0 ;
 int FUNC_1 (int ,char*,scalar_t__) ;
 int VAR_1 ;
 int FUNC_2 (struct bnx2x*,struct bnx2x_mcast_obj*,struct bnx2x_mcast_ramrod_params*,int*) ;
 int FUNC_3 (struct bnx2x*,struct bnx2x_mcast_obj*,struct bnx2x_mcast_ramrod_params*,int*) ;
 int FUNC_4 (struct bnx2x*,struct bnx2x_mcast_obj*,int ,int*) ;

__attribute__((used)) static inline int FUNC_5(struct bnx2x *VAR_2,
   struct bnx2x_mcast_ramrod_params *VAR_3,
   enum bnx2x_mcast_cmd VAR_4,
   int VAR_5)
{
 struct bnx2x_mcast_obj *VAR_6 = VAR_3->mcast_obj;
 int VAR_7 = VAR_5;

 FUNC_1(VAR_0, "p->mcast_list_len=%d\n", VAR_3->mcast_list_len);

 switch (VAR_4) {
 case 130:
  FUNC_2(VAR_2, VAR_6, VAR_3, &VAR_7);
  break;

 case 129:
  FUNC_3(VAR_2, VAR_6, VAR_3, &VAR_7);
  break;

 case 128:
  VAR_6->hdl_restore(VAR_2, VAR_6, 0, &VAR_7);
  break;

 default:
  FUNC_0("Unknown command: %d\n", VAR_4);
  return -VAR_1;
 }


 VAR_3->mcast_list_len = 0;

 return VAR_7;
}
