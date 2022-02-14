
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct platform_device {int dummy; } ;
struct TYPE_6__ {int id; int name; } ;
struct msm_adsp_module {size_t id; TYPE_2__ pdev; int pmem_regions; int patch_event; int verify_cmd; int * clk; int name; TYPE_3__* info; int state_wait; int lock; } ;
struct adsp_rtos_mp_mtoa_init_info_type {int dummy; } ;
struct TYPE_7__ {unsigned int module_count; int max_module_id; struct msm_adsp_module* init_info_ptr; struct msm_adsp_module** id_to_module; TYPE_1__* module; int write_ctrl; int read_ctrl; int send_irq; } ;
struct TYPE_5__ {size_t id; int pdev_name; int patch_event; int verify_cmd; scalar_t__ clk_rate; scalar_t__ clk_name; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_3__ VAR_9 ;
 int FUNC_3 (TYPE_3__*) ;
 int VAR_10 ;
 struct msm_adsp_module* VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int * FUNC_4 (int *,scalar_t__) ;
 int FUNC_5 (int *,scalar_t__) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct msm_adsp_module*) ;
 int FUNC_11 (int ,int *,char*) ;
 void* FUNC_12 (int,int ) ;
 int FUNC_13 (struct msm_adsp_module*,unsigned int) ;
 int FUNC_14 (int *) ;
 int * FUNC_15 () ;
 int FUNC_16 (int *,int ,int ) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (TYPE_2__*) ;
 int FUNC_19 (char*,int) ;
 int FUNC_20 (char*) ;
 int FUNC_21 (int ,int ,int ,char*,int ) ;
 int * VAR_14 ;
 int FUNC_22 (int *) ;
 int FUNC_23 (int *,int ,char*) ;

__attribute__((used)) static int FUNC_24(struct platform_device *VAR_15)
{
 unsigned VAR_16;
 int VAR_17, VAR_18;
 int VAR_19;

 FUNC_20("adsp: probe\n");

 FUNC_23(&VAR_13, VAR_7, "adsp");







 VAR_17 = FUNC_3(&VAR_9);
 if (VAR_17)
  return VAR_17;
 VAR_9.send_irq += (uint32_t) VAR_4;
 VAR_9.read_ctrl += (uint32_t) VAR_4;
 VAR_9.write_ctrl += (uint32_t) VAR_4;
 VAR_16 = VAR_9.module_count;




 VAR_19 = VAR_9.max_module_id + 1;


 VAR_11 = FUNC_12(
  sizeof(struct msm_adsp_module) * VAR_16 +
  sizeof(void *) * VAR_19, VAR_1);
 if (!VAR_11)
  return -VAR_0;

 VAR_9.id_to_module = (void *) (VAR_11 + VAR_16);

 FUNC_22(&VAR_8);

 VAR_17 = FUNC_21(VAR_2, VAR_10, VAR_3,
    "adsp", 0);
 if (VAR_17 < 0)
  goto fail_request_irq;
 FUNC_6(VAR_2);

 VAR_14 = FUNC_15();
 if (FUNC_1(VAR_14)) {
  VAR_14 = ((void*)0);
  VAR_17 = FUNC_2(VAR_14);
  FUNC_19("adsp: could not create rpc server (%d)\n", VAR_17);
  goto fail_rpc_open;
 }

 VAR_17 = FUNC_16(VAR_14,
         VAR_5,
         VAR_6);
 if (VAR_17) {
  FUNC_19("adsp: could not register callback server (%d)\n", VAR_17);
  goto fail_rpc_register;
 }


 FUNC_11(VAR_12, ((void*)0), "kadspd");

 for (VAR_18 = 0; VAR_18 < VAR_16; VAR_18++) {
  struct msm_adsp_module *VAR_20 = VAR_11 + VAR_18;
  FUNC_17(&VAR_20->lock);
  FUNC_9(&VAR_20->state_wait);
  VAR_20->info = &VAR_9;
  VAR_20->name = VAR_9.module[VAR_18].name;
  VAR_20->id = VAR_9.module[VAR_18].id;
  if (VAR_9.module[VAR_18].clk_name)
   VAR_20->clk = FUNC_4(((void*)0), VAR_9.module[VAR_18].clk_name);
  else
   VAR_20->clk = ((void*)0);
  if (VAR_20->clk && VAR_9.module[VAR_18].clk_rate)
   FUNC_5(VAR_20->clk, VAR_9.module[VAR_18].clk_rate);
  VAR_20->verify_cmd = VAR_9.module[VAR_18].verify_cmd;
  VAR_20->patch_event = VAR_9.module[VAR_18].patch_event;
  FUNC_0(&VAR_20->pmem_regions);
  VAR_20->pdev.name = VAR_9.module[VAR_18].pdev_name;
  VAR_20->pdev.id = -1;



  VAR_9.id_to_module[VAR_20->id] = VAR_20;

  FUNC_18(&VAR_20->pdev);
 }

 FUNC_13(VAR_11, VAR_16);

 return 0;

fail_rpc_register:
 FUNC_14(VAR_14);
 VAR_14 = ((void*)0);
fail_rpc_open:
 FUNC_7(VAR_2);
 FUNC_8(VAR_2, 0);
fail_request_irq:
 FUNC_10(VAR_11);



 return VAR_17;
}
