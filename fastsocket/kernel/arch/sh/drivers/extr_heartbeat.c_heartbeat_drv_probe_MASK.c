
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {scalar_t__ start; scalar_t__ end; } ;
struct TYPE_2__ {struct heartbeat_data* platform_data; } ;
struct platform_device {int num_resources; TYPE_1__ dev; } ;
struct heartbeat_data {int nr_bits; int* bit_pos; int mask; int regsize; int timer; int base; } ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int* VAR_5 ;
 int FUNC_1 (TYPE_1__*,char*) ;
 int VAR_6 ;
 int FUNC_2 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_7 ;
 int FUNC_3 (struct heartbeat_data*) ;
 struct heartbeat_data* FUNC_4 (int,int ) ;
 int FUNC_5 (int *,scalar_t__) ;
 struct resource* FUNC_6 (struct platform_device*,int ,int ) ;
 int FUNC_7 (struct platform_device*,struct heartbeat_data*) ;
 int FUNC_8 (int *,int ,unsigned long) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_8)
{
 struct resource *VAR_9;
 struct heartbeat_data *VAR_10;
 int VAR_11;

 if (FUNC_9(VAR_8->num_resources != 1)) {
  FUNC_1(&VAR_8->dev, "invalid number of resources\n");
  return -VAR_0;
 }

 VAR_9 = FUNC_6(VAR_8, VAR_4, 0);
 if (FUNC_9(VAR_9 == ((void*)0))) {
  FUNC_1(&VAR_8->dev, "invalid resource\n");
  return -VAR_0;
 }

 if (VAR_8->dev.platform_data) {
  VAR_10 = VAR_8->dev.platform_data;
 } else {
  VAR_10 = FUNC_4(sizeof(struct heartbeat_data), VAR_3);
  if (FUNC_9(!VAR_10))
   return -VAR_1;
 }

 VAR_10->base = FUNC_2(VAR_9->start, VAR_9->end - VAR_9->start + 1);
 if (FUNC_9(!VAR_10->base)) {
  FUNC_1(&VAR_8->dev, "ioremap failed\n");

  if (!VAR_8->dev.platform_data)
   FUNC_3(VAR_10);

  return -VAR_2;
 }

 if (!VAR_10->nr_bits) {
  VAR_10->bit_pos = VAR_5;
  VAR_10->nr_bits = FUNC_0(VAR_5);
 }

 VAR_10->mask = 0;
 for (VAR_11 = 0; VAR_11 < VAR_10->nr_bits; VAR_11++)
  VAR_10->mask |= (1 << VAR_10->bit_pos[VAR_11]);

 if (!VAR_10->regsize)
  VAR_10->regsize = 8;

 FUNC_8(&VAR_10->timer, VAR_6, (unsigned long)VAR_10);
 FUNC_7(VAR_8, VAR_10);

 return FUNC_5(&VAR_10->timer, VAR_7 + 1);
}
