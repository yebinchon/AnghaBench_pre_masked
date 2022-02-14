
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int end; int start; } ;
struct device {int dummy; } ;
struct platform_device {int name; struct device dev; } ;
struct parport {struct ax_drvdata* private_data; } ;
struct ax_drvdata {int irq_enabled; struct ax_drvdata* io; int * base; int * spp_cpr; int * spp_spr; int * spp_data; struct device* dev; struct parport* parport; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct device*,char*) ;
 int * FUNC_2 (int,unsigned long) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct ax_drvdata*) ;
 struct ax_drvdata* FUNC_5 (int,int ) ;
 int FUNC_6 (struct parport*) ;
 int VAR_8 ;
 int VAR_9 ;
 struct parport* FUNC_7 (unsigned long,int,int ,int *) ;
 int FUNC_8 (struct parport*) ;
 int FUNC_9 (struct platform_device*,int ) ;
 struct resource* FUNC_10 (struct platform_device*,int ,int ) ;
 int FUNC_11 (struct platform_device*,struct parport*) ;
 int FUNC_12 (struct ax_drvdata*) ;
 int FUNC_13 (int,int ,int ,int ,struct parport*) ;
 struct ax_drvdata* FUNC_14 (int,unsigned long,int ) ;
 int FUNC_15 (int ,int *) ;

__attribute__((used)) static int FUNC_16(struct platform_device *VAR_10)
{
 struct device *VAR_11 = &VAR_10->dev;
 struct ax_drvdata *VAR_12;
 struct parport *VAR_13 = ((void*)0);
 struct resource *VAR_14;
 unsigned long VAR_15;
 int VAR_16;
 int VAR_17;
 int VAR_18;

 VAR_12 = FUNC_5(sizeof(struct ax_drvdata), VAR_3);
 if (VAR_12 == ((void*)0)) {
  FUNC_0(VAR_11, "no memory for private data\n");
  return -VAR_1;
 }

 VAR_14 = FUNC_10(VAR_10, VAR_4, 0);
 if (VAR_14 == ((void*)0)) {
  FUNC_0(VAR_11, "no MEM specified\n");
  VAR_18 = -VAR_2;
  goto exit_mem;
 }

 VAR_15 = (VAR_14->end - VAR_14->start) + 1;
 VAR_16 = VAR_15 / 3;

 VAR_12->io = FUNC_14(VAR_14->start, VAR_15, VAR_10->name);
 if (VAR_12->io == ((void*)0)) {
  FUNC_0(VAR_11, "cannot reserve memory\n");
  VAR_18 = -VAR_2;
  goto exit_mem;
 }

 VAR_12->base = FUNC_2(VAR_14->start, VAR_15);
 if (VAR_12->base == ((void*)0)) {
  FUNC_0(VAR_11, "cannot ioremap region\n");
  VAR_18 = -VAR_2;
  goto exit_res;
 }

 VAR_17 = FUNC_9(VAR_10, 0);
 if (VAR_17 <= 0)
  VAR_17 = VAR_7;

 VAR_13 = FUNC_7((unsigned long)VAR_12->base, VAR_17,
       VAR_6,
       &VAR_8);

 if (VAR_13 == ((void*)0)) {
  FUNC_0(VAR_11, "failed to register parallel port\n");
  VAR_18 = -VAR_1;
  goto exit_unmap;
 }

 VAR_13->private_data = VAR_12;
 VAR_12->parport = VAR_13;
 VAR_12->dev = VAR_11;

 VAR_12->spp_data = VAR_12->base;
 VAR_12->spp_spr = VAR_12->base + (VAR_16 * 1);
 VAR_12->spp_cpr = VAR_12->base + (VAR_16 * 2);


 FUNC_15(VAR_0, VAR_12->spp_cpr);

 if (VAR_17 >= 0) {

  VAR_18 = FUNC_13(VAR_17, VAR_9,
      VAR_5, VAR_10->name, VAR_13);

  if (VAR_18 < 0)
   goto exit_port;

  VAR_12->irq_enabled = 1;
 }

 FUNC_11(VAR_10, VAR_13);

 FUNC_1(VAR_11, "attached parallel port driver\n");
 FUNC_6(VAR_13);

 return 0;

 exit_port:
 FUNC_8(VAR_13);
 exit_unmap:
 FUNC_3(VAR_12->base);
 exit_res:
 FUNC_12(VAR_12->io);
 FUNC_4(VAR_12->io);
 exit_mem:
 FUNC_4(VAR_12);
 return VAR_18;
}
