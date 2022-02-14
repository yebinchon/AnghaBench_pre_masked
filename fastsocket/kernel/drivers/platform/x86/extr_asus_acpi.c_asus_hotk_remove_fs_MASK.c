
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct acpi_device {int dummy; } ;
struct TYPE_4__ {TYPE_1__* methods; } ;
struct TYPE_3__ {scalar_t__ display_set; scalar_t__ brightness_set; scalar_t__ brightness_get; scalar_t__ brightness_down; scalar_t__ brightness_up; scalar_t__ lcd_status; scalar_t__ mt_lcd_switch; scalar_t__ mt_bt_switch; scalar_t__ mt_ledd; scalar_t__ mt_tled; scalar_t__ mt_mled; scalar_t__ mt_wled; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (struct acpi_device*) ;
 TYPE_2__* VAR_9 ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct acpi_device *VAR_10)
{
 if (FUNC_0(VAR_10)) {
  FUNC_1(VAR_3, FUNC_0(VAR_10));
  if (VAR_9->methods->mt_wled)
   FUNC_1(VAR_8, FUNC_0(VAR_10));
  if (VAR_9->methods->mt_mled)
   FUNC_1(VAR_6, FUNC_0(VAR_10));
  if (VAR_9->methods->mt_tled)
   FUNC_1(VAR_7, FUNC_0(VAR_10));
  if (VAR_9->methods->mt_ledd)
   FUNC_1(VAR_5, FUNC_0(VAR_10));
  if (VAR_9->methods->mt_bt_switch)
   FUNC_1(VAR_1, FUNC_0(VAR_10));
  if (VAR_9->methods->mt_lcd_switch && VAR_9->methods->lcd_status)
   FUNC_1(VAR_4, FUNC_0(VAR_10));
  if ((VAR_9->methods->brightness_up
       && VAR_9->methods->brightness_down)
      || (VAR_9->methods->brightness_get
   && VAR_9->methods->brightness_set))
   FUNC_1(VAR_0, FUNC_0(VAR_10));
  if (VAR_9->methods->display_set)
   FUNC_1(VAR_2, FUNC_0(VAR_10));
 }
 return 0;
}
