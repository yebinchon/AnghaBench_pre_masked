
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ssp_device {int clk; int irq; } ;
struct ssp_dev {int port; int irq; struct ssp_device* ssp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,char*,struct ssp_dev*) ;
 int FUNC_2 (struct ssp_device*) ;
 int VAR_3 ;
 struct ssp_device* FUNC_3 (int,char*) ;

int FUNC_4(struct ssp_dev *VAR_4, u32 VAR_5, u32 VAR_6)
{
 struct ssp_device *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_3(VAR_5, "SSP");
 if (VAR_7 == ((void*)0))
  return -VAR_0;

 VAR_4->ssp = VAR_7;
 VAR_4->port = VAR_5;


 if (!(VAR_6 & VAR_2)) {
  VAR_8 = FUNC_1(VAR_7->irq, VAR_3,
    0, "SSP", VAR_4);
      if (VAR_8)
   goto out_region;
  VAR_4->irq = VAR_7->irq;
 } else
  VAR_4->irq = VAR_1;


 FUNC_0(VAR_7->clk);
 return 0;

out_region:
 FUNC_2(VAR_7);
 return VAR_8;
}
