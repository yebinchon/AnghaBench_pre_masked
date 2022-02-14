
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
struct TYPE_2__ {scalar_t__ tx; scalar_t__ rx; } ;
struct rt2x00_dev {int cap_flags; int led_qual; int led_radio; TYPE_1__ default_ant; } ;


 void* VAR_0 ;
 scalar_t__ VAR_1 ;
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
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct rt2x00_dev*,int *,int ) ;
 int FUNC_2 (struct rt2x00_dev*,int ,scalar_t__*) ;
 int FUNC_3 (struct rt2x00_dev*,char*) ;
 scalar_t__ FUNC_4 (scalar_t__,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (struct rt2x00_dev*,int ) ;
 int FUNC_7 (struct rt2x00_dev*,int ,scalar_t__,int ) ;
 int FUNC_8 (struct rt2x00_dev*,int ,int *) ;

__attribute__((used)) static int FUNC_9(struct rt2x00_dev *VAR_22)
{
 u32 VAR_23;
 u16 VAR_24;
 u16 VAR_25;




 FUNC_2(VAR_22, VAR_6, &VAR_25);




 VAR_24 = FUNC_4(VAR_25, VAR_9);
 FUNC_8(VAR_22, VAR_4, &VAR_23);
 FUNC_7(VAR_22, VAR_21, VAR_24,
   FUNC_5(VAR_23, VAR_5));

 if (!FUNC_6(VAR_22, VAR_19) && !FUNC_6(VAR_22, VAR_20)) {
  FUNC_3(VAR_22, "Invalid RF chipset detected\n");
  return -VAR_13;
 }




 VAR_22->default_ant.tx =
     FUNC_4(VAR_25, VAR_12);
 VAR_22->default_ant.rx =
     FUNC_4(VAR_25, VAR_11);







 if (VAR_22->default_ant.tx == VAR_1)
  VAR_22->default_ant.tx = VAR_0;
 if (VAR_22->default_ant.rx == VAR_1)
  VAR_22->default_ant.rx = VAR_0;
 if (FUNC_4(VAR_25, VAR_7))
  FUNC_0(VAR_2, &VAR_22->cap_flags);




 if (FUNC_4(VAR_25, VAR_10))
  FUNC_0(VAR_3, &VAR_22->cap_flags);

 return 0;
}
