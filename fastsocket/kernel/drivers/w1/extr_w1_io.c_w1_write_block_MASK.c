
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct w1_master {TYPE_1__* bus_master; } ;
struct TYPE_2__ {int data; int (* write_block ) (int ,int const*,int) ;} ;


 int FUNC_0 (int ,int const*,int) ;
 int FUNC_1 (struct w1_master*) ;
 int FUNC_2 (struct w1_master*) ;
 int FUNC_3 (struct w1_master*,int const) ;

void FUNC_4(struct w1_master *VAR_0, const u8 *VAR_1, int VAR_2)
{
 int VAR_3;

 if (VAR_0->bus_master->write_block) {
  FUNC_2(VAR_0);
  VAR_0->bus_master->write_block(VAR_0->bus_master->data, VAR_1, VAR_2);
 }
 else
  for (VAR_3 = 0; VAR_3 < VAR_2; ++VAR_3)
   FUNC_3(VAR_0, VAR_1[VAR_3]);
 FUNC_1(VAR_0);
}
