
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {TYPE_1__* extif; } ;
struct TYPE_3__ {int (* write_data ) (int *,int) ;int (* write_command ) (int *,int) ;int (* set_bits_per_cycle ) (int) ;} ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;

__attribute__((used)) static void FUNC_3(u8 VAR_1, u8 VAR_2)
{
 VAR_0.extif->set_bits_per_cycle(8);
 VAR_0.extif->write_command(&VAR_1, 1);
 VAR_0.extif->write_data(&VAR_2, 1);
}
