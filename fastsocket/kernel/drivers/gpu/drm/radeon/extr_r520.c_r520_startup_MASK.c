
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int hdp_cntl; } ;
struct TYPE_6__ {TYPE_2__ r300; } ;
struct TYPE_4__ {int installed; } ;
struct radeon_device {int flags; int dev; TYPE_3__ config; TYPE_1__ irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct radeon_device*,int) ;
 int FUNC_3 (struct radeon_device*) ;
 int FUNC_4 (struct radeon_device*) ;
 int FUNC_5 (struct radeon_device*,int ) ;
 int FUNC_6 (struct radeon_device*) ;
 int FUNC_7 (struct radeon_device*) ;
 int FUNC_8 (struct radeon_device*) ;
 int FUNC_9 (struct radeon_device*) ;
 int FUNC_10 (struct radeon_device*) ;
 int FUNC_11 (struct radeon_device*) ;

__attribute__((used)) static int FUNC_12(struct radeon_device *VAR_3)
{
 int VAR_4;

 FUNC_4(VAR_3);

 FUNC_11(VAR_3);

 FUNC_3(VAR_3);


 if (VAR_3->flags & VAR_1) {
  VAR_4 = FUNC_10(VAR_3);
  if (VAR_4)
   return VAR_4;
 }


 VAR_4 = FUNC_8(VAR_3);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_5(VAR_3, VAR_2);
 if (VAR_4) {
  FUNC_1(VAR_3->dev, "failed initializing CP fences (%d).\n", VAR_4);
  return VAR_4;
 }


 if (!VAR_3->irq.installed) {
  VAR_4 = FUNC_7(VAR_3);
  if (VAR_4)
   return VAR_4;
 }

 FUNC_9(VAR_3);
 VAR_3->config.r300.hdp_cntl = FUNC_0(VAR_0);

 VAR_4 = FUNC_2(VAR_3, 1024 * 1024);
 if (VAR_4) {
  FUNC_1(VAR_3->dev, "failed initializing CP (%d).\n", VAR_4);
  return VAR_4;
 }

 VAR_4 = FUNC_6(VAR_3);
 if (VAR_4) {
  FUNC_1(VAR_3->dev, "IB initialization failed (%d).\n", VAR_4);
  return VAR_4;
 }

 return 0;
}
