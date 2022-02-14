
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct w1_master {TYPE_1__* bus_master; } ;
struct TYPE_2__ {int data; int (* touch_bit ) (int ,int) ;} ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct w1_master*) ;
 int FUNC_2 (struct w1_master*,int ) ;

__attribute__((used)) static u8 FUNC_3(struct w1_master *VAR_0, int VAR_1)
{
 if (VAR_0->bus_master->touch_bit)
  return VAR_0->bus_master->touch_bit(VAR_0->bus_master->data, VAR_1);
 else if (VAR_1)
  return FUNC_1(VAR_0);
 else {
  FUNC_2(VAR_0, 0);
  return 0;
 }
}
