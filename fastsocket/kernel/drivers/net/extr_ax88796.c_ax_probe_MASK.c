
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct resource {int start; int flags; int end; } ;
struct TYPE_6__ {TYPE_1__* platform_data; } ;
struct platform_device {TYPE_3__ dev; int name; } ;
struct net_device {int irq; unsigned long base_addr; } ;
struct ax_device {int irqflags; int* reg_offsets; int * mem; int * mem2; int * map2; TYPE_1__* plat; struct platform_device* dev; int mii_lock; } ;
struct TYPE_5__ {int* reg_offset; int * mem; int rxcr_base; } ;
struct TYPE_4__ {int* reg_offsets; int rcr_val; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct net_device* FUNC_0 (int) ;
 int FUNC_1 (struct net_device*,int) ;
 int FUNC_2 (TYPE_3__*,char*,...) ;
 TYPE_2__ VAR_5 ;
 int FUNC_3 (struct net_device*) ;
 void* FUNC_4 (int,size_t) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct ax_device*,int ,int) ;
 struct resource* FUNC_8 (struct platform_device*,int ,int) ;
 int FUNC_9 (struct platform_device*,struct net_device*) ;
 int FUNC_10 (int *) ;
 void* FUNC_11 (int,size_t,int ) ;
 int FUNC_12 (int *) ;
 struct ax_device* FUNC_13 (struct net_device*) ;

__attribute__((used)) static int FUNC_14(struct platform_device *VAR_6)
{
 struct net_device *VAR_7;
 struct ax_device *VAR_8;
 struct resource *VAR_9;
 size_t VAR_10;
 int VAR_11 = 0;

 VAR_7 = FUNC_0(sizeof(struct ax_device));
 if (VAR_7 == ((void*)0))
  return -VAR_0;


 VAR_8 = FUNC_13(VAR_7);

 FUNC_7(VAR_8, 0, sizeof(struct ax_device));

 FUNC_12(&VAR_8->mii_lock);

 VAR_8->dev = VAR_6;
 VAR_8->plat = VAR_6->dev.platform_data;
 FUNC_9(VAR_6, VAR_7);

 VAR_5.rxcr_base = VAR_8->plat->rcr_val;



 VAR_9 = FUNC_8(VAR_6, VAR_2, 0);
 if (VAR_9 == ((void*)0)) {
  FUNC_2(&VAR_6->dev, "no IRQ specified\n");
  goto exit_mem;
 }

 VAR_7->irq = VAR_9->start;
 VAR_8->irqflags = VAR_9->flags & VAR_4;

 VAR_9 = FUNC_8(VAR_6, VAR_3, 0);
 if (VAR_9 == ((void*)0)) {
  FUNC_2(&VAR_6->dev, "no MEM specified\n");
  VAR_11 = -VAR_1;
  goto exit_mem;
 }

 VAR_10 = (VAR_9->end - VAR_9->start) + 1;




 if (VAR_8->plat->reg_offsets)
  VAR_5.reg_offset = VAR_8->plat->reg_offsets;
 else {
  VAR_5.reg_offset = VAR_8->reg_offsets;
  for (VAR_11 = 0; VAR_11 < 0x18; VAR_11++)
   VAR_8->reg_offsets[VAR_11] = (VAR_10 / 0x18) * VAR_11;
 }

 VAR_8->mem = FUNC_11(VAR_9->start, VAR_10, VAR_6->name);
 if (VAR_8->mem == ((void*)0)) {
  FUNC_2(&VAR_6->dev, "cannot reserve registers\n");
   VAR_11 = -VAR_1;
  goto exit_mem;
 }

 VAR_5.mem = FUNC_4(VAR_9->start, VAR_10);
 VAR_7->base_addr = (unsigned long)VAR_5.mem;

 if (VAR_5.mem == ((void*)0)) {
  FUNC_2(&VAR_6->dev, "Cannot ioremap area (%08llx,%08llx)\n",
   (unsigned long long)VAR_9->start,
   (unsigned long long)VAR_9->end);

   VAR_11 = -VAR_1;
  goto exit_req;
 }



 VAR_9 = FUNC_8(VAR_6, VAR_3, 1);
 if (VAR_9 == ((void*)0)) {
  if (!VAR_8->plat->reg_offsets) {
   for (VAR_11 = 0; VAR_11 < 0x20; VAR_11++)
    VAR_8->reg_offsets[VAR_11] = (VAR_10 / 0x20) * VAR_11;
  }

  VAR_8->map2 = ((void*)0);
 } else {
   VAR_10 = (VAR_9->end - VAR_9->start) + 1;

  VAR_8->mem2 = FUNC_11(VAR_9->start, VAR_10, VAR_6->name);
  if (VAR_8->mem == ((void*)0)) {
   FUNC_2(&VAR_6->dev, "cannot reserve registers\n");
   VAR_11 = -VAR_1;
   goto exit_mem1;
  }

  VAR_8->map2 = FUNC_4(VAR_9->start, VAR_10);
  if (VAR_8->map2 == ((void*)0)) {
   FUNC_2(&VAR_6->dev, "cannot map reset register\n");
   VAR_11 = -VAR_1;
   goto exit_mem2;
  }

  VAR_5.reg_offset[0x1f] = VAR_8->map2 - VAR_5.mem;
 }



 VAR_11 = FUNC_1(VAR_7, 1);
 if (!VAR_11)
  return 0;

 if (VAR_8->map2 == ((void*)0))
  goto exit_mem1;

 FUNC_5(VAR_8->map2);

 exit_mem2:
 FUNC_10(VAR_8->mem2);
 FUNC_6(VAR_8->mem2);

 exit_mem1:
 FUNC_5(VAR_5.mem);

 exit_req:
 FUNC_10(VAR_8->mem);
 FUNC_6(VAR_8->mem);

 exit_mem:
 FUNC_3(VAR_7);

 return VAR_11;
}
