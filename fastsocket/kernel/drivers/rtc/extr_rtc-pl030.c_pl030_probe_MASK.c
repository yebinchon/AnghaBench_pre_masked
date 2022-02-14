
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pl030_rtc {scalar_t__ base; int rtc; } ;
struct amba_id {int dummy; } ;
struct TYPE_2__ {int start; } ;
struct amba_device {int * irq; int dev; TYPE_1__ res; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (struct amba_device*) ;
 int FUNC_4 (struct amba_device*,int *) ;
 int FUNC_5 (struct amba_device*,struct pl030_rtc*) ;
 int FUNC_6 (int ,struct pl030_rtc*) ;
 scalar_t__ FUNC_7 (int ,int ) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (struct pl030_rtc*) ;
 struct pl030_rtc* FUNC_10 (int,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_11 (int ,int ,int ,char*,struct pl030_rtc*) ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (char*,int *,int *,int ) ;

__attribute__((used)) static int FUNC_14(struct amba_device *VAR_8, struct amba_id *VAR_9)
{
 struct pl030_rtc *VAR_10;
 int VAR_11;

 VAR_11 = FUNC_4(VAR_8, ((void*)0));
 if (VAR_11)
  goto err_req;

 VAR_10 = FUNC_10(sizeof(*VAR_10), VAR_1);
 if (!VAR_10) {
  VAR_11 = -VAR_0;
  goto err_rtc;
 }

 VAR_10->base = FUNC_7(VAR_8->res.start, FUNC_12(&VAR_8->res));
 if (!VAR_10->base) {
  VAR_11 = -VAR_0;
  goto err_map;
 }

 FUNC_2(0, VAR_10->base + VAR_3);
 FUNC_2(0, VAR_10->base + VAR_4);

 FUNC_5(VAR_8, VAR_10);

 VAR_11 = FUNC_11(VAR_8->irq[0], VAR_6, VAR_2,
     "rtc-pl030", VAR_10);
 if (VAR_11)
  goto err_irq;

 VAR_10->rtc = FUNC_13("pl030", &VAR_8->dev, &VAR_7,
           VAR_5);
 if (FUNC_0(VAR_10->rtc)) {
  VAR_11 = FUNC_1(VAR_10->rtc);
  goto err_reg;
 }

 return 0;

 err_reg:
 FUNC_6(VAR_8->irq[0], VAR_10);
 err_irq:
 FUNC_8(VAR_10->base);
 err_map:
 FUNC_9(VAR_10);
 err_rtc:
 FUNC_3(VAR_8);
 err_req:
 return VAR_11;
}
