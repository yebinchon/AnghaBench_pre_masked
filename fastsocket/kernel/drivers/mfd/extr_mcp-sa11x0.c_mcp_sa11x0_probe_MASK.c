
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct mcp_plat_data* platform_data; } ;
struct platform_device {TYPE_1__ dev; } ;
struct mcp_sa11x0 {int dummy; } ;
struct mcp_plat_data {int sclk_rate; int mccr0; int mccr1; } ;
struct mcp {int sclk_rate; int rw_timeout; int dma_telco_wr; int dma_telco_rd; int dma_audio_wr; int dma_audio_rd; int * ops; int owner; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ FUNC_1 () ;
 struct mcp* FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (struct mcp*) ;
 int VAR_19 ;
 int FUNC_4 (struct platform_device*,struct mcp*) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (int,int,char*) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_20)
{
 struct mcp_plat_data *VAR_21 = VAR_20->dev.platform_data;
 struct mcp *VAR_22;
 int VAR_23;

 if (!VAR_21)
  return -VAR_6;

 if (!FUNC_6(0x80060000, 0x60, "sa11x0-mcp"))
  return -VAR_5;

 VAR_22 = FUNC_2(&VAR_20->dev, sizeof(struct mcp_sa11x0));
 if (!VAR_22) {
  VAR_23 = -VAR_7;
  goto release;
 }

 VAR_22->owner = VAR_18;
 VAR_22->ops = &VAR_19;
 VAR_22->sclk_rate = VAR_21->sclk_rate;
 VAR_22->dma_audio_rd = VAR_1;
 VAR_22->dma_audio_wr = VAR_2;
 VAR_22->dma_telco_rd = VAR_3;
 VAR_22->dma_telco_wr = VAR_4;

 FUNC_4(VAR_20, VAR_22);

 if (FUNC_1()) {
  FUNC_0(VAR_0);
 }




 VAR_12 &= ~VAR_8;
 VAR_12 |= VAR_11 | VAR_9 | VAR_10;
 VAR_14 |= VAR_8;
 VAR_14 &= ~(VAR_11 | VAR_9 | VAR_10);
 VAR_13 &= ~(VAR_11 | VAR_9 | VAR_10);





 VAR_17 = -1;
 VAR_16 = VAR_21->mccr1;
 VAR_15 = VAR_21->mccr0 | 0x7f7f;






 VAR_22->rw_timeout = (64 * 3 * 1000000 + VAR_22->sclk_rate - 1) /
     VAR_22->sclk_rate;

 VAR_23 = FUNC_3(VAR_22);
 if (VAR_23 == 0)
  goto out;

 release:
 FUNC_5(0x80060000, 0x60);
 FUNC_4(VAR_20, ((void*)0));

 out:
 return VAR_23;
}
