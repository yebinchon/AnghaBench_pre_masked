
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct resource {scalar_t__ start; scalar_t__ end; } ;
struct TYPE_4__ {struct mv_xor_platform_shared_data* platform_data; } ;
struct platform_device {TYPE_1__ dev; } ;
struct mv_xor_shared_private {void* xor_high_base; void* xor_base; } ;
struct mv_xor_platform_shared_data {int * dram; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,TYPE_1__*,char*) ;
 void* FUNC_1 (TYPE_1__*,scalar_t__,scalar_t__) ;
 struct mv_xor_shared_private* FUNC_2 (TYPE_1__*,int,int ) ;
 int FUNC_3 (struct mv_xor_shared_private*,int *) ;
 struct resource* FUNC_4 (struct platform_device*,int ,int) ;
 int FUNC_5 (struct platform_device*,struct mv_xor_shared_private*) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_6)
{
 struct mv_xor_platform_shared_data *VAR_7 = VAR_6->dev.platform_data;
 struct mv_xor_shared_private *VAR_8;
 struct resource *VAR_9;

 FUNC_0(VAR_5, &VAR_6->dev, "Marvell shared XOR driver\n");

 VAR_8 = FUNC_2(&VAR_6->dev, sizeof(*VAR_8), VAR_3);
 if (!VAR_8)
  return -VAR_2;

 VAR_9 = FUNC_4(VAR_6, VAR_4, 0);
 if (!VAR_9)
  return -VAR_1;

 VAR_8->xor_base = FUNC_1(&VAR_6->dev, VAR_9->start,
         VAR_9->end - VAR_9->start + 1);
 if (!VAR_8->xor_base)
  return -VAR_0;

 VAR_9 = FUNC_4(VAR_6, VAR_4, 1);
 if (!VAR_9)
  return -VAR_1;

 VAR_8->xor_high_base = FUNC_1(&VAR_6->dev, VAR_9->start,
       VAR_9->end - VAR_9->start + 1);
 if (!VAR_8->xor_high_base)
  return -VAR_0;

 FUNC_5(VAR_6, VAR_8);




 if (VAR_7 != ((void*)0) && VAR_7->dram != ((void*)0))
  FUNC_3(VAR_8, VAR_7->dram);

 return 0;
}
