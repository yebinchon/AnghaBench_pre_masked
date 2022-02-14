
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {TYPE_1__* extif; } ;
struct TYPE_3__ {int (* write_data ) (int*,int) ;int (* write_command ) (int*,int) ;int (* set_bits_per_cycle ) (int) ;} ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int*,int) ;
 int FUNC_2 (int*,int) ;

__attribute__((used)) static void FUNC_3(int VAR_2, int VAR_3, int VAR_4, int VAR_5)
{
 u8 VAR_6[8];
 u8 VAR_7;

 VAR_4--;
 VAR_5--;
 VAR_6[0] = VAR_2;
 VAR_6[1] = VAR_2 >> 8;
 VAR_6[2] = VAR_3;
 VAR_6[3] = VAR_3 >> 8;
 VAR_6[4] = VAR_4;
 VAR_6[5] = VAR_4 >> 8;
 VAR_6[6] = VAR_5;
 VAR_6[7] = VAR_5 >> 8;

 VAR_1->set_bits_per_cycle(8);
 VAR_7 = VAR_0;

 VAR_1->write_command(&VAR_7, 1);

 VAR_1->write_data(VAR_6, 8);
}
