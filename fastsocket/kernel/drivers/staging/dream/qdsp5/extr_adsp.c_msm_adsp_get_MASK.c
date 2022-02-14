
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct msm_adsp_ops {int dummy; } ;
struct msm_adsp_module {scalar_t__ open_count; int lock; scalar_t__ clk; int name; int * driver_data; struct msm_adsp_ops* ops; int id; } ;
struct TYPE_3__ {scalar_t__ init_info_state; int init_info_wait; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct msm_adsp_module*) ;
 int FUNC_1 () ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 struct msm_adsp_module* FUNC_6 (TYPE_1__*,char const*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 () ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (char*,...) ;
 int FUNC_13 () ;
 int FUNC_14 (int ,int ,struct msm_adsp_module*) ;
 int FUNC_15 (int ,int,int) ;

int FUNC_16(const char *VAR_10, struct msm_adsp_module **VAR_11,
   struct msm_adsp_ops *VAR_12, void *VAR_13)
{
 struct msm_adsp_module *VAR_14;
 int VAR_15 = 0;
 VAR_14 = FUNC_6(&VAR_7, VAR_10);
 if (!VAR_14)
  return -VAR_2;

 FUNC_9(&VAR_14->lock);
 FUNC_12("adsp: opening module %s\n", VAR_14->name);
 if (VAR_14->open_count++ == 0 && VAR_14->clk)
  FUNC_3(VAR_14->clk);

 FUNC_9(&VAR_9);
 if (VAR_8++ == 0) {
  FUNC_5(VAR_5);
  FUNC_13();
 }
 FUNC_10(&VAR_9);

 if (VAR_14->ops) {
  VAR_15 = -VAR_1;
  goto done;
 }

 VAR_15 = FUNC_0(VAR_14);
 if (VAR_15)
  goto done;

 VAR_14->ops = VAR_12;
 VAR_14->driver_data = VAR_13;
 *VAR_11 = VAR_14;
 VAR_15 = FUNC_14(VAR_6,
     VAR_14->id, VAR_14);
 if (VAR_15) {
  VAR_14->ops = ((void*)0);
  VAR_14->driver_data = ((void*)0);
  *VAR_11 = ((void*)0);
  FUNC_11("adsp: REGISTER_APP failed\n");
  goto done;
 }

 FUNC_12("adsp: module %s has been registered\n", VAR_14->name);

done:
 FUNC_9(&VAR_9);
 if (VAR_15 && --VAR_8 == 0) {
  FUNC_4(VAR_5);
  FUNC_1();
 }
 if (VAR_15 && --VAR_14->open_count == 0 && VAR_14->clk)
  FUNC_2(VAR_14->clk);
 FUNC_10(&VAR_9);
 FUNC_10(&VAR_14->lock);
 return VAR_15;
}
