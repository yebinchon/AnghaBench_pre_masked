
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct whcrc {scalar_t__ rc_base; TYPE_1__* umc_dev; } ;
struct uwb_rc {struct whcrc* priv; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,scalar_t__) ;
 scalar_t__ FUNC_1 (struct device*,scalar_t__,int ,int ,int,char*) ;
 int FUNC_2 (struct whcrc*) ;

__attribute__((used)) static int FUNC_3(struct uwb_rc *VAR_9)
{
 struct whcrc *VAR_10 = VAR_9->priv;
 struct device *VAR_11 = &VAR_10->umc_dev->dev;


 FUNC_0(VAR_3, VAR_10->rc_base + VAR_2);
 if (FUNC_1(VAR_11, VAR_10->rc_base + VAR_2, VAR_3, 0,
     5000, "hardware reset") < 0)
  return -VAR_0;


 FUNC_0(0, VAR_10->rc_base + VAR_5);
 FUNC_0(VAR_4, VAR_10->rc_base + VAR_2);
 if (FUNC_1(VAR_11, VAR_10->rc_base + VAR_7, VAR_8, 0,
     5000, "radio controller start") < 0)
  return -VAR_1;
 FUNC_2(VAR_10);
 FUNC_0(VAR_6, VAR_10->rc_base + VAR_5);
 return 0;
}
