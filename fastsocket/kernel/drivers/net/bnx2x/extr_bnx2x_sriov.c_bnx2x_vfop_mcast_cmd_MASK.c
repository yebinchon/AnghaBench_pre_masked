
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct bnx2x_mcast_ramrod_params {int ramrod_flags; int * mcast_obj; } ;
struct TYPE_4__ {struct bnx2x_mcast_ramrod_params mcast; } ;
struct bnx2x_virtf {int mcast_obj; TYPE_1__ op_params; } ;
struct bnx2x_vfop_cmd {int block; int done; } ;
struct TYPE_5__ {int mc_num; struct bnx2x_mcast_list_elem* mc; } ;
struct TYPE_6__ {TYPE_2__ mc_list; } ;
struct bnx2x_vfop {TYPE_3__ args; } ;
struct bnx2x_mcast_list_elem {int mac; } ;
struct bnx2x {int dummy; } ;
typedef int bnx2x_mac_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct bnx2x_vfop* FUNC_0 (struct bnx2x*,struct bnx2x_virtf*) ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct bnx2x*,struct bnx2x_virtf*,int ,int ) ;
 int FUNC_3 (struct bnx2x_mcast_list_elem*) ;
 struct bnx2x_mcast_list_elem* FUNC_4 (size_t,int ) ;
 int FUNC_5 (struct bnx2x_mcast_ramrod_params*,int ,int) ;
 int FUNC_6 (int ,int *) ;

int FUNC_7(struct bnx2x *VAR_5,
    struct bnx2x_virtf *VAR_6,
    struct bnx2x_vfop_cmd *VAR_7,
    bnx2x_mac_addr_t *VAR_8,
    int VAR_9, bool VAR_10)
{
 struct bnx2x_vfop *VAR_11 = ((void*)0);
 size_t VAR_12 = VAR_9 * sizeof(struct bnx2x_mcast_list_elem);
 struct bnx2x_mcast_list_elem *VAR_13 = VAR_12 ? FUNC_4(VAR_12, VAR_2) :
        ((void*)0);

 if (!VAR_12 || VAR_13) {
  VAR_11 = FUNC_0(VAR_5, VAR_6);
  if (VAR_11) {
   int VAR_14;
   struct bnx2x_mcast_ramrod_params *VAR_15 =
    &VAR_6->op_params.mcast;


   FUNC_5(VAR_15, 0, sizeof(*VAR_15));
   VAR_15->mcast_obj = &VAR_6->mcast_obj;
   if (VAR_10)
    FUNC_6(VAR_3,
     &VAR_15->ramrod_flags);


   VAR_11->args.mc_list.mc_num = VAR_9;
   VAR_11->args.mc_list.mc = VAR_13;
   for (VAR_14 = 0; VAR_14 < VAR_9; VAR_14++)
    VAR_13[VAR_14].mac = VAR_8[VAR_14];

   FUNC_1(VAR_0,
      VAR_4, VAR_7->done);
   return FUNC_2(VAR_5, VAR_6, VAR_4,
           VAR_7->block);
  } else {
   FUNC_3(VAR_13);
  }
 }
 return -VAR_1;
}
