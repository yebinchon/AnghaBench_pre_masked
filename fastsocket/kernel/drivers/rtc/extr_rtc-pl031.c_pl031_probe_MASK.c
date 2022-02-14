
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pl031_local {int base; int rtc; } ;
struct amba_id {int dummy; } ;
struct TYPE_2__ {int start; } ;
struct amba_device {int * irq; int dev; TYPE_1__ res; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int FUNC_2 (struct amba_device*) ;
 int FUNC_3 (struct amba_device*,int *) ;
 int FUNC_4 (struct amba_device*,struct pl031_local*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct pl031_local*) ;
 struct pl031_local* FUNC_9 (int,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_10 (int ,int ,int ,char*,int ) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (char*,int *,int *,int ) ;

__attribute__((used)) static int FUNC_13(struct amba_device *VAR_7, struct amba_id *VAR_8)
{
 int VAR_9;
 struct pl031_local *VAR_10;

 VAR_9 = FUNC_3(VAR_7, ((void*)0));
 if (VAR_9)
  goto err_req;

 VAR_10 = FUNC_9(sizeof(struct pl031_local), VAR_2);
 if (!VAR_10) {
  VAR_9 = -VAR_1;
  goto out;
 }

 VAR_10->base = FUNC_6(VAR_7->res.start, FUNC_11(&VAR_7->res));
 if (!VAR_10->base) {
  VAR_9 = -VAR_1;
  goto out_no_remap;
 }

 FUNC_4(VAR_7, VAR_10);

 if (FUNC_10(VAR_7->irq[0], VAR_5, VAR_3,
   "rtc-pl031", VAR_10->rtc)) {
  VAR_9 = -VAR_0;
  goto out_no_irq;
 }

 VAR_10->rtc = FUNC_12("pl031", &VAR_7->dev, &VAR_6,
      VAR_4);
 if (FUNC_0(VAR_10->rtc)) {
  VAR_9 = FUNC_1(VAR_10->rtc);
  goto out_no_rtc;
 }

 return 0;

out_no_rtc:
 FUNC_5(VAR_7->irq[0], VAR_10->rtc);
out_no_irq:
 FUNC_7(VAR_10->base);
 FUNC_4(VAR_7, ((void*)0));
out_no_remap:
 FUNC_8(VAR_10);
out:
 FUNC_2(VAR_7);
err_req:
 return VAR_9;
}
