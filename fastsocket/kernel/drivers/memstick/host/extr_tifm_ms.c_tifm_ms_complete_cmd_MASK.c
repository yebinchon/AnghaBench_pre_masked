
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tifm_ms {TYPE_1__* req; scalar_t__ use_dma; int timer; struct tifm_dev* dev; } ;
struct tifm_dev {int dev; scalar_t__ addr; } ;
struct memstick_host {int dummy; } ;
struct TYPE_2__ {int int_reg; scalar_t__ data_dir; int sg; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct memstick_host*,TYPE_1__**) ;
 int FUNC_3 (scalar_t__) ;
 struct memstick_host* FUNC_4 (struct tifm_dev*) ;
 scalar_t__ FUNC_5 (struct tifm_ms*) ;
 int FUNC_6 (struct tifm_dev*,int *,int,int ) ;
 int FUNC_7 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_8(struct tifm_ms *VAR_10)
{
 struct tifm_dev *VAR_11 = VAR_10->dev;
 struct memstick_host *VAR_12 = FUNC_4(VAR_11);
 int VAR_13;

 FUNC_0(&VAR_10->timer);

 VAR_10->req->int_reg = FUNC_3(VAR_11->addr + VAR_6) & 0xff;
 VAR_10->req->int_reg = (VAR_10->req->int_reg & 1)
        | ((VAR_10->req->int_reg << 4) & 0xe0);

 FUNC_7(VAR_9,
        VAR_11->addr + VAR_5);
 FUNC_7(VAR_8, VAR_11->addr + VAR_4);

 if (VAR_10->use_dma) {
  FUNC_6(VAR_11, &VAR_10->req->sg, 1,
         VAR_10->req->data_dir == VAR_2
         ? VAR_0
         : VAR_1);
 }

 FUNC_7((~VAR_7) & FUNC_3(VAR_11->addr + VAR_3),
        VAR_11->addr + VAR_3);

 FUNC_1(&VAR_11->dev, "TPC complete\n");
 do {
  VAR_13 = FUNC_2(VAR_12, &VAR_10->req);
 } while (!VAR_13 && FUNC_5(VAR_10));
}
