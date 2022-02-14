
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct w1_master {TYPE_1__* bus_master; } ;
struct TYPE_2__ {int data; int (* write_bit ) (int ,int) ;} ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct w1_master *VAR_0, int VAR_1)
{
 if (VAR_1) {
  VAR_0->bus_master->write_bit(VAR_0->bus_master->data, 0);
  FUNC_4(6);
  VAR_0->bus_master->write_bit(VAR_0->bus_master->data, 1);
  FUNC_4(64);
 } else {
  VAR_0->bus_master->write_bit(VAR_0->bus_master->data, 0);
  FUNC_4(60);
  VAR_0->bus_master->write_bit(VAR_0->bus_master->data, 1);
  FUNC_4(10);
 }
}
