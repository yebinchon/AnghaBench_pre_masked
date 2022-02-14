
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
typedef int u16 ;
struct bnx2x_func_afex_viflists_params {scalar_t__ func_to_clear; scalar_t__ func_bit_map; int vif_list_index; scalar_t__ afex_vif_list_command; } ;
struct TYPE_2__ {struct bnx2x_func_afex_viflists_params afex_viflists; } ;
struct bnx2x_func_state_params {int cmd; int * f_obj; TYPE_1__ params; int * member_0; } ;
struct bnx2x {int func_obj; } ;


 int FUNC_0 (char*,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (struct bnx2x*,struct bnx2x_func_state_params*) ;
 int FUNC_2 (struct bnx2x*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct bnx2x *VAR_5, u8 VAR_6,
       u16 VAR_7, u8 VAR_8)
{
 struct bnx2x_func_state_params VAR_9 = {((void*)0)};
 struct bnx2x_func_afex_viflists_params *VAR_10 =
  &VAR_9.params.afex_viflists;
 int VAR_11;
 u32 VAR_12;


 if ((VAR_6 != VAR_3) && (VAR_6 != VAR_4))
  FUNC_0("BUG! afex_handle_vif_list_cmd invalid type 0x%x\n",
     VAR_6);

 VAR_9.f_obj = &VAR_5->func_obj;
 VAR_9.cmd = VAR_0;


 VAR_10->afex_vif_list_command = VAR_6;
 VAR_10->vif_list_index = VAR_7;
 VAR_10->func_bit_map =
  (VAR_6 == VAR_3) ? 0 : VAR_8;
 VAR_10->func_to_clear = 0;
 VAR_12 =
  (VAR_6 == VAR_3) ?
  VAR_1 :
  VAR_2;




 VAR_11 = FUNC_1(VAR_5, &VAR_9);
 if (VAR_11 < 0)
  FUNC_2(VAR_5, VAR_12, 0);

 return 0;
}
