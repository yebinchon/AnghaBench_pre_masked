
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pwm_channel {int index; } ;
struct device {int dummy; } ;
struct TYPE_5__ {TYPE_1__* pdev; } ;
struct TYPE_4__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct device*,char*,char*,int ,int ,int ,...) ;
 TYPE_2__* VAR_7 ;
 int FUNC_1 (struct pwm_channel*,int ) ;
 int FUNC_2 (TYPE_2__*,int ) ;

__attribute__((used)) static void FUNC_3(struct pwm_channel *VAR_8, char *VAR_9)
{
 struct device *VAR_10 = &VAR_7->pdev->dev;

 FUNC_0(VAR_10, "%s: mr %08x, sr %08x, imr %08x\n",
  VAR_9,
  FUNC_2(VAR_7, VAR_5),
  FUNC_2(VAR_7, VAR_6),
  FUNC_2(VAR_7, VAR_4));
 FUNC_0(VAR_10,
  "pwm ch%d - mr %08x, dty %u, prd %u, cnt %u\n",
  VAR_8->index,
  FUNC_1(VAR_8, VAR_2),
  FUNC_1(VAR_8, VAR_1),
  FUNC_1(VAR_8, VAR_3),
  FUNC_1(VAR_8, VAR_0));
}
