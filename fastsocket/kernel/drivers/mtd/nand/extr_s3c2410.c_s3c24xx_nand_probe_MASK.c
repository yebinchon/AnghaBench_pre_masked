
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct s3c2410_platform_nand {int nr_sets; struct s3c2410_nand_set* sets; } ;
struct s3c2410_nand_set {int nr_chips; } ;
struct TYPE_3__ {int wq; int lock; } ;
struct s3c2410_nand_mtd {int cpu_type; int mtd_count; scalar_t__ scan_res; int clk; int mtd; struct s3c2410_nand_mtd* mtds; int * regs; struct s3c2410_platform_nand* platform; int * device; int * area; TYPE_1__ controller; } ;
struct s3c2410_nand_info {int cpu_type; int mtd_count; scalar_t__ scan_res; int clk; int mtd; struct s3c2410_nand_info* mtds; int * regs; struct s3c2410_platform_nand* platform; int * device; int * area; TYPE_1__ controller; } ;
struct resource {int end; int start; } ;
struct platform_device {int dev; int name; struct resource* resource; } ;
typedef enum s3c_cpu_type { ____Placeholder_s3c_cpu_type } s3c_cpu_type ;
struct TYPE_4__ {int driver_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct s3c2410_nand_mtd*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,char*,int *) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (int,int) ;
 void* FUNC_10 (int,int ) ;
 int FUNC_11 (struct s3c2410_nand_mtd*,int ,int) ;
 scalar_t__ FUNC_12 (int *,int) ;
 int FUNC_13 (int *) ;
 TYPE_2__* FUNC_14 (struct platform_device*) ;
 int FUNC_15 (struct platform_device*,struct s3c2410_nand_mtd*) ;
 int FUNC_16 (char*,...) ;
 int * FUNC_17 (int,int,int ) ;
 int FUNC_18 (struct s3c2410_nand_mtd*,struct s3c2410_nand_mtd*,struct s3c2410_nand_set*) ;
 int FUNC_19 (struct s3c2410_nand_mtd*) ;
 int FUNC_20 (struct s3c2410_nand_mtd*,struct s3c2410_nand_mtd*,struct s3c2410_nand_set*) ;
 int FUNC_21 (struct s3c2410_nand_mtd*) ;
 int FUNC_22 (struct s3c2410_nand_mtd*,struct s3c2410_nand_mtd*) ;
 int FUNC_23 (struct platform_device*) ;
 int FUNC_24 (int *) ;
 struct s3c2410_platform_nand* FUNC_25 (struct platform_device*) ;

__attribute__((used)) static int FUNC_26(struct platform_device *VAR_5)
{
 struct s3c2410_platform_nand *VAR_6 = FUNC_25(VAR_5);
 enum s3c_cpu_type VAR_7;
 struct s3c2410_nand_info *VAR_8;
 struct s3c2410_nand_mtd *VAR_9;
 struct s3c2410_nand_set *VAR_10;
 struct resource *VAR_11;
 int VAR_12 = 0;
 int VAR_13;
 int VAR_14;
 int VAR_15;

 VAR_7 = FUNC_14(VAR_5)->driver_data;

 FUNC_16("s3c2410_nand_probe(%p)\n", VAR_5);

 VAR_8 = FUNC_10(sizeof(*VAR_8), VAR_4);
 if (VAR_8 == ((void*)0)) {
  FUNC_6(&VAR_5->dev, "no memory for flash info\n");
  VAR_12 = -VAR_3;
  goto exit_error;
 }

 FUNC_11(VAR_8, 0, sizeof(*VAR_8));
 FUNC_15(VAR_5, VAR_8);

 FUNC_24(&VAR_8->controller.lock);
 FUNC_8(&VAR_8->controller.wq);



 VAR_8->clk = FUNC_4(&VAR_5->dev, "nand");
 if (FUNC_0(VAR_8->clk)) {
  FUNC_6(&VAR_5->dev, "failed to get clock\n");
  VAR_12 = -VAR_2;
  goto exit_error;
 }

 FUNC_3(VAR_8->clk);




 VAR_11 = VAR_5->resource;
 VAR_13 = VAR_11->end - VAR_11->start + 1;

 VAR_8->area = FUNC_17(VAR_11->start, VAR_13, VAR_5->name);

 if (VAR_8->area == ((void*)0)) {
  FUNC_6(&VAR_5->dev, "cannot reserve register region\n");
  VAR_12 = -VAR_2;
  goto exit_error;
 }

 VAR_8->device = &VAR_5->dev;
 VAR_8->platform = VAR_6;
 VAR_8->regs = FUNC_9(VAR_11->start, VAR_13);
 VAR_8->cpu_type = VAR_7;

 if (VAR_8->regs == ((void*)0)) {
  FUNC_6(&VAR_5->dev, "cannot reserve register region\n");
  VAR_12 = -VAR_1;
  goto exit_error;
 }

 FUNC_5(&VAR_5->dev, "mapped registers at %p\n", VAR_8->regs);



 VAR_12 = FUNC_21(VAR_8);
 if (VAR_12 != 0)
  goto exit_error;

 VAR_10 = (VAR_6 != ((void*)0)) ? VAR_6->sets : ((void*)0);
 VAR_14 = (VAR_6 != ((void*)0)) ? VAR_6->nr_sets : 1;

 VAR_8->mtd_count = VAR_14;



 VAR_13 = VAR_14 * sizeof(*VAR_8->mtds);
 VAR_8->mtds = FUNC_10(VAR_13, VAR_4);
 if (VAR_8->mtds == ((void*)0)) {
  FUNC_6(&VAR_5->dev, "failed to allocate mtd storage\n");
  VAR_12 = -VAR_3;
  goto exit_error;
 }

 FUNC_11(VAR_8->mtds, 0, VAR_13);



 VAR_9 = VAR_8->mtds;

 for (VAR_15 = 0; VAR_15 < VAR_14; VAR_15++, VAR_9++) {
  FUNC_16("initialising set %d (%p, info %p)\n", VAR_15, VAR_9, VAR_8);

  FUNC_20(VAR_8, VAR_9, VAR_10);

  VAR_9->scan_res = FUNC_12(&VAR_9->mtd,
       (VAR_10) ? VAR_10->nr_chips : 1);

  if (VAR_9->scan_res == 0) {
   FUNC_22(VAR_8, VAR_9);
   FUNC_13(&VAR_9->mtd);
   FUNC_18(VAR_8, VAR_9, VAR_10);
  }

  if (VAR_10 != ((void*)0))
   VAR_10++;
 }

 VAR_12 = FUNC_19(VAR_8);
 if (VAR_12 < 0) {
  FUNC_6(&VAR_5->dev, "failed to init cpufreq support\n");
  goto exit_error;
 }

 if (FUNC_1(VAR_8)) {
  FUNC_7(&VAR_5->dev, "clock idle support enabled\n");
  FUNC_2(VAR_8->clk);
 }

 FUNC_16("initialised ok\n");
 return 0;

 exit_error:
 FUNC_23(VAR_5);

 if (VAR_12 == 0)
  VAR_12 = -VAR_0;
 return VAR_12;
}
