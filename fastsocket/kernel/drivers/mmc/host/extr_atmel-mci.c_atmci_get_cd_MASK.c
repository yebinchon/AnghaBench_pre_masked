
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_host {int class_dev; } ;
struct atmel_mci_slot {int detect_is_active_high; int detect_pin; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,char*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 struct atmel_mci_slot* FUNC_3 (struct mmc_host*) ;

__attribute__((used)) static int FUNC_4(struct mmc_host *VAR_1)
{
 int VAR_2 = -VAR_0;
 struct atmel_mci_slot *VAR_3 = FUNC_3(VAR_1);

 if (FUNC_2(VAR_3->detect_pin)) {
  VAR_2 = !(FUNC_1(VAR_3->detect_pin) ^
       VAR_3->detect_is_active_high);
  FUNC_0(&VAR_1->class_dev, "card is %spresent\n",
    VAR_2 ? "" : "not ");
 }

 return VAR_2;
}
