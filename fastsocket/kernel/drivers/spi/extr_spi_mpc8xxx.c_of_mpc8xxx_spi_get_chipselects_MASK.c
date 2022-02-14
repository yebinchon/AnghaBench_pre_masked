
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpc8xxx_spi_probe_info {int* gpios; int* alow_flags; } ;
struct fsl_spi_platform_data {int max_chipselect; int cs_control; } ;
struct device_node {int dummy; } ;
struct device {struct fsl_spi_platform_data* platform_data; int archdata; } ;
typedef enum of_gpio_flags { ____Placeholder_of_gpio_flags } of_gpio_flags ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct device_node* FUNC_0 (int *) ;
 int FUNC_1 (struct device*,char*,int,int) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (int,int ) ;
 int FUNC_7 (int*) ;
 int* FUNC_8 (unsigned int,int ) ;
 int* FUNC_9 (unsigned int,int ) ;
 int FUNC_10 (int*,int,unsigned int) ;
 int VAR_3 ;
 int FUNC_11 (struct device_node*,int,int*) ;
 unsigned int FUNC_12 (struct device_node*) ;
 struct mpc8xxx_spi_probe_info* FUNC_13 (struct fsl_spi_platform_data*) ;

__attribute__((used)) static int FUNC_14(struct device *VAR_4)
{
 struct device_node *VAR_5 = FUNC_0(&VAR_4->archdata);
 struct fsl_spi_platform_data *VAR_6 = VAR_4->platform_data;
 struct mpc8xxx_spi_probe_info *VAR_7 = FUNC_13(VAR_6);
 unsigned int VAR_8;
 int VAR_9 = 0;
 int VAR_10;

 VAR_8 = FUNC_12(VAR_5);
 if (!VAR_8) {




  VAR_6->max_chipselect = 1;
  return 0;
 }

 VAR_7->gpios = FUNC_8(VAR_8 * sizeof(*VAR_7->gpios), VAR_1);
 if (!VAR_7->gpios)
  return -VAR_0;
 FUNC_10(VAR_7->gpios, -1, VAR_8 * sizeof(*VAR_7->gpios));

 VAR_7->alow_flags = FUNC_9(VAR_8 * sizeof(*VAR_7->alow_flags),
        VAR_1);
 if (!VAR_7->alow_flags) {
  VAR_10 = -VAR_0;
  goto err_alloc_flags;
 }

 for (; VAR_9 < VAR_8; VAR_9++) {
  int VAR_11;
  enum of_gpio_flags VAR_12;

  VAR_11 = FUNC_11(VAR_5, VAR_9, &VAR_12);
  if (!FUNC_5(VAR_11)) {
   FUNC_1(VAR_4, "invalid gpio #%d: %d\n", VAR_9, VAR_11);
   goto err_loop;
  }

  VAR_10 = FUNC_6(VAR_11, FUNC_2(VAR_4));
  if (VAR_10) {
   FUNC_1(VAR_4, "can't request gpio #%d: %d\n", VAR_9, VAR_10);
   goto err_loop;
  }

  VAR_7->gpios[VAR_9] = VAR_11;
  VAR_7->alow_flags[VAR_9] = VAR_12 & VAR_2;

  VAR_10 = FUNC_3(VAR_7->gpios[VAR_9],
         VAR_7->alow_flags[VAR_9]);
  if (VAR_10) {
   FUNC_1(VAR_4, "can't set output direction for gpio "
    "#%d: %d\n", VAR_9, VAR_10);
   goto err_loop;
  }
 }

 VAR_6->max_chipselect = VAR_8;
 VAR_6->cs_control = VAR_3;

 return 0;

err_loop:
 while (VAR_9 >= 0) {
  if (FUNC_5(VAR_7->gpios[VAR_9]))
   FUNC_4(VAR_7->gpios[VAR_9]);
  VAR_9--;
 }

 FUNC_7(VAR_7->alow_flags);
 VAR_7->alow_flags = ((void*)0);
err_alloc_flags:
 FUNC_7(VAR_7->gpios);
 VAR_7->gpios = ((void*)0);
 return VAR_10;
}
