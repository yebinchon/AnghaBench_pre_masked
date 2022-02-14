
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int load_phase; } ;
struct TYPE_4__ {TYPE_1__ hw_init; } ;
struct bnx2x_func_state_params {struct bnx2x_func_sp_obj* f_obj; TYPE_2__ params; } ;
struct bnx2x_func_sp_obj {int (* complete_cmd ) (struct bnx2x*,struct bnx2x_func_sp_obj*,int ) ;struct bnx2x_func_sp_drv_ops* drv; } ;
struct bnx2x_func_sp_drv_ops {int (* gunzip_init ) (struct bnx2x*) ;int (* init_fw ) (struct bnx2x*) ;int (* gunzip_end ) (struct bnx2x*) ;} ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct bnx2x*) ;
 int FUNC_2 (int ,char*,int ,int) ;
 int VAR_2 ;




 int FUNC_3 (struct bnx2x*,struct bnx2x_func_sp_drv_ops const*) ;
 int FUNC_4 (struct bnx2x*,struct bnx2x_func_sp_drv_ops const*) ;
 int FUNC_5 (struct bnx2x*,struct bnx2x_func_sp_drv_ops const*) ;
 int FUNC_6 (struct bnx2x*,struct bnx2x_func_sp_drv_ops const*) ;
 int FUNC_7 (struct bnx2x*) ;
 int FUNC_8 (struct bnx2x*) ;
 int FUNC_9 (struct bnx2x*) ;
 int FUNC_10 (struct bnx2x*,struct bnx2x_func_sp_obj*,int ) ;

__attribute__((used)) static int FUNC_11(struct bnx2x *VAR_3,
         struct bnx2x_func_state_params *VAR_4)
{
 u32 VAR_5 = VAR_4->params.hw_init.load_phase;
 struct bnx2x_func_sp_obj *VAR_6 = VAR_4->f_obj;
 const struct bnx2x_func_sp_drv_ops *VAR_7 = VAR_6->drv;
 int VAR_8 = 0;

 FUNC_2(VAR_1, "function %d  load_code %x\n",
    FUNC_1(VAR_3), VAR_5);


 VAR_8 = VAR_7->gunzip_init(VAR_3);
 if (VAR_8)
  return VAR_8;


 VAR_8 = VAR_7->init_fw(VAR_3);
 if (VAR_8) {
  FUNC_0("Error loading firmware\n");
  goto init_err;
 }


 switch (VAR_5) {
 case 130:
  VAR_8 = FUNC_4(VAR_3, VAR_7);
  if (VAR_8)
   goto init_err;

  break;
 case 131:
  VAR_8 = FUNC_3(VAR_3, VAR_7);
  if (VAR_8)
   goto init_err;

  break;
 case 128:
  VAR_8 = FUNC_6(VAR_3, VAR_7);
  if (VAR_8)
   goto init_err;

  break;
 case 129:
  VAR_8 = FUNC_5(VAR_3, VAR_7);
  if (VAR_8)
   goto init_err;

  break;
 default:
  FUNC_0("Unknown load_code (0x%x) from MCP\n", VAR_5);
  VAR_8 = -VAR_2;
 }

init_err:
 VAR_7->gunzip_end(VAR_3);




 if (!VAR_8)
  VAR_6->complete_cmd(VAR_3, VAR_6, VAR_0);

 return VAR_8;
}
