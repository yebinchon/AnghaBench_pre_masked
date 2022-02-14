
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct power_supply {scalar_t__ type; int (* set_charged ) (struct power_supply*) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct power_supply*) ;

int FUNC_1(struct power_supply *VAR_2)
{
 if (VAR_2->type == VAR_1 && VAR_2->set_charged) {
  VAR_2->set_charged(VAR_2);
  return 0;
 }

 return -VAR_0;
}
