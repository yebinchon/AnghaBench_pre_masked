
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct s3cmci_host {int real_rate; int bus_width; scalar_t__ base; TYPE_1__* pdata; int is2440; } ;
struct mmc_ios {int power_mode; int clock; int bus_width; int vdd; } ;
struct mmc_host {int dummy; } ;
struct TYPE_2__ {int (* set_power ) (int,int ) ;} ;





 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct s3cmci_host*,int ,char*,...) ;
 int VAR_10 ;
 int FUNC_2 (int ,int ) ;
 struct s3cmci_host* FUNC_3 (struct mmc_host*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (struct s3cmci_host*,struct mmc_ios*) ;
 int FUNC_7 (int,int ) ;
 int FUNC_8 (int,int ) ;
 int FUNC_9 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_10(struct mmc_host *VAR_11, struct mmc_ios *VAR_12)
{
 struct s3cmci_host *VAR_13 = FUNC_3(VAR_11);
 u32 VAR_14;



 VAR_14 = FUNC_4(VAR_13->base + VAR_6);

 switch (VAR_12->power_mode) {
 case 129:
 case 128:
  FUNC_5(FUNC_0(5), VAR_1);
  FUNC_5(FUNC_0(6), VAR_2);
  FUNC_5(FUNC_0(7), VAR_3);
  FUNC_5(FUNC_0(8), VAR_4);
  FUNC_5(FUNC_0(9), VAR_5);
  FUNC_5(FUNC_0(10), VAR_0);

  if (VAR_13->pdata->set_power)
   VAR_13->pdata->set_power(VAR_12->power_mode, VAR_12->vdd);

  if (!VAR_13->is2440)
   VAR_14 |= VAR_8;

  break;

 case 130:
 default:
  FUNC_2(FUNC_0(5), 0);

  if (VAR_13->is2440)
   VAR_14 |= VAR_9;

  if (VAR_13->pdata->set_power)
   VAR_13->pdata->set_power(VAR_12->power_mode, VAR_12->vdd);

  break;
 }

 FUNC_6(VAR_13, VAR_12);


 if (VAR_12->clock)
  VAR_14 |= VAR_7;
 else
  VAR_14 &= ~VAR_7;

 FUNC_9(VAR_14, VAR_13->base + VAR_6);

 if ((VAR_12->power_mode == 129) ||
     (VAR_12->power_mode == 128)) {
  FUNC_1(VAR_13, VAR_10, "running at %lukHz (requested: %ukHz).\n",
   VAR_13->real_rate/1000, VAR_12->clock/1000);
 } else {
  FUNC_1(VAR_13, VAR_10, "powered down.\n");
 }

 VAR_13->bus_width = VAR_12->bus_width;
}
