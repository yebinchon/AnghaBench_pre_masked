
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int start; } ;
struct pmc_type {int has_deep_sleep; } ;
struct of_device_id {struct pmc_type* data; } ;
struct of_device {struct device_node* node; } ;
struct mpc83xx_pmc {int dummy; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 void* VAR_5 ;
 int FUNC_0 (scalar_t__,struct of_device*) ;
 int FUNC_1 () ;
 int VAR_6 ;
 int VAR_7 ;
 void* FUNC_2 (int ,int) ;
 int FUNC_3 (void*) ;
 scalar_t__ FUNC_4 (struct device_node*,int ) ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 () ;
 int VAR_9 ;
 int FUNC_7 (struct device_node*,int,struct resource*) ;
 int FUNC_8 (struct device_node*) ;
 struct of_device* VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 void* VAR_13 ;
 int FUNC_9 (scalar_t__,int ,int ,char*,struct of_device*) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(struct of_device *VAR_14,
                     const struct of_device_id *VAR_15)
{
 struct device_node *VAR_16 = VAR_14->node;
 struct resource VAR_17;
 struct pmc_type *VAR_18 = VAR_15->data;
 int VAR_19 = 0;

 if (!FUNC_8(VAR_16))
  return -VAR_1;

 VAR_6 = VAR_18->has_deep_sleep;
 VAR_7 = FUNC_1();
 VAR_10 = VAR_14;

 VAR_8 = FUNC_5();
 if (VAR_8 < 0)
  return VAR_8;

 VAR_19 = FUNC_7(VAR_16, 0, &VAR_17);
 if (VAR_19)
  return -VAR_1;

 VAR_11 = FUNC_4(VAR_16, 0);
 if (VAR_11 != VAR_4) {
  VAR_19 = FUNC_9(VAR_11, VAR_12, VAR_3,
                    "pmc", VAR_14);

  if (VAR_19)
   return -VAR_0;
 }

 VAR_13 = FUNC_2(VAR_17.start, sizeof(struct mpc83xx_pmc));

 if (!VAR_13) {
  VAR_19 = -VAR_2;
  goto out;
 }

 VAR_19 = FUNC_7(VAR_16, 1, &VAR_17);
 if (VAR_19) {
  VAR_19 = -VAR_1;
  goto out_pmc;
 }

 VAR_5 = FUNC_2(VAR_17.start, sizeof(struct mpc83xx_pmc));

 if (!VAR_5) {
  VAR_19 = -VAR_2;
  goto out_pmc;
 }

 if (VAR_8)
  FUNC_6();

 FUNC_10(&VAR_9);
 return 0;

out_pmc:
 FUNC_3(VAR_13);
out:
 if (VAR_11 != VAR_4)
  FUNC_0(VAR_11, VAR_14);

 return VAR_19;
}
