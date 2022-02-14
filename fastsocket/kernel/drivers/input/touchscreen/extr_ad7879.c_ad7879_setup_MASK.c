
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ad7879 {int cmd_crtl3; int cmd_crtl2; int gpio_init; int cmd_crtl1; int bus; int pen_down_acc_interval; int acquisition_time; int first_conversion_delay; int median; int averaging; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_5 (int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_6 (int ,int ,int) ;

__attribute__((used)) static void FUNC_7(struct ad7879 *VAR_14)
{
 VAR_14->cmd_crtl3 = VAR_11 |
   VAR_10 |
   VAR_13 |
   VAR_12 |
   VAR_9 |
   VAR_0 |
   VAR_2;

 VAR_14->cmd_crtl2 = FUNC_4(VAR_5) | VAR_1 |
   FUNC_1(VAR_14->averaging) |
   FUNC_3(VAR_14->median) |
   FUNC_2(VAR_14->first_conversion_delay) |
   VAR_14->gpio_init;

 VAR_14->cmd_crtl1 = VAR_3 | VAR_4 |
   FUNC_0(VAR_14->acquisition_time) |
   FUNC_5(VAR_14->pen_down_acc_interval);

 FUNC_6(VAR_14->bus, VAR_7, VAR_14->cmd_crtl2);
 FUNC_6(VAR_14->bus, VAR_8, VAR_14->cmd_crtl3);
 FUNC_6(VAR_14->bus, VAR_6, VAR_14->cmd_crtl1);
}
