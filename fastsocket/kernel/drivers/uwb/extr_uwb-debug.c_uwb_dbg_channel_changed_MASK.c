
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct uwb_pal {TYPE_2__* rc; } ;
struct device {int dummy; } ;
struct TYPE_3__ {struct device dev; } ;
struct TYPE_4__ {TYPE_1__ uwb_dev; } ;


 int FUNC_0 (struct device*,char*,...) ;

__attribute__((used)) static void FUNC_1(struct uwb_pal *VAR_0, int VAR_1)
{
 struct device *VAR_2 = &VAR_0->rc->uwb_dev.dev;

 if (VAR_1 > 0)
  FUNC_0(VAR_2, "debug: channel %d started\n", VAR_1);
 else
  FUNC_0(VAR_2, "debug: channel stopped\n");
}
