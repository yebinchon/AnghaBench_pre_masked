
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct adapter_info {int gpio_out; } ;
struct TYPE_3__ {int cclk; } ;
struct TYPE_4__ {scalar_t__ rev; TYPE_1__ vpd; } ;
struct adapter {TYPE_2__ params; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int) ;
 scalar_t__ FUNC_4 (struct adapter*) ;
 int FUNC_5 (struct adapter*,struct adapter_info const*) ;
 int FUNC_6 (struct adapter*,int ) ;
 int FUNC_7 (struct adapter*,int ,int) ;
 int FUNC_8 (struct adapter*) ;

__attribute__((used)) static void FUNC_9(struct adapter *VAR_9,
     const struct adapter_info *VAR_10)
{
 u32 VAR_11 = FUNC_2(FUNC_4(VAR_9) ? 3 : 2);

 FUNC_5(VAR_9, VAR_10);
 FUNC_7(VAR_9, VAR_0,
       FUNC_1(VAR_9->params.vpd.cclk / 80 - 1));
 FUNC_7(VAR_9, VAR_3,
       VAR_10->gpio_out | VAR_7 | VAR_8);
 FUNC_7(VAR_9, VAR_1, 0);
 FUNC_7(VAR_9, VAR_2, FUNC_0(0xfff));

 if (VAR_9->params.rev == 0 || !FUNC_8(VAR_9))
  VAR_11 |= VAR_6;


 FUNC_7(VAR_9, VAR_4, VAR_11);
 FUNC_6(VAR_9, VAR_4);

 VAR_11 |= VAR_5;
 FUNC_7(VAR_9, VAR_4, VAR_11);
 FUNC_6(VAR_9, VAR_4);
 FUNC_7(VAR_9, FUNC_3(VAR_4, 1), VAR_11);
 FUNC_6(VAR_9, VAR_4);
}
