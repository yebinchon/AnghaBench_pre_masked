
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct w1_master {TYPE_1__* bus_master; } ;
struct TYPE_2__ {int (* read_bit ) (int ) ;int data; int (* write_bit ) (int ,int) ;} ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;

__attribute__((used)) static u8 FUNC_4(struct w1_master *VAR_0)
{
 int VAR_1;

 VAR_0->bus_master->write_bit(VAR_0->bus_master->data, 0);
 FUNC_3(6);
 VAR_0->bus_master->write_bit(VAR_0->bus_master->data, 1);
 FUNC_3(9);

 VAR_1 = VAR_0->bus_master->read_bit(VAR_0->bus_master->data);
 FUNC_3(55);

 return VAR_1 & 0x1;
}
