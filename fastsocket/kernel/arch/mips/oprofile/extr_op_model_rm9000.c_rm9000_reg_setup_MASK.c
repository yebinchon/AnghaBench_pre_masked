
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct op_counter_config {scalar_t__ count; int event; scalar_t__ enabled; } ;
struct TYPE_2__ {unsigned int control; scalar_t__ reset_counter2; scalar_t__ reset_counter1; } ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (int ) ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int FUNC_1 (int ) ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 TYPE_1__ VAR_6 ;

__attribute__((used)) static void FUNC_2(struct op_counter_config *VAR_7)
{
 unsigned int VAR_8 = 0;



 if (VAR_7[0].enabled)
  VAR_8 |= FUNC_0(VAR_7[0].event) |
             VAR_1 |
             VAR_2 |
             VAR_0;
 if (VAR_7[1].enabled)
  VAR_8 |= FUNC_1(VAR_7[1].event) |
             VAR_4 |
             VAR_5 |
             VAR_3;
 VAR_6.control = VAR_8;

 VAR_6.reset_counter1 = 0x80000000 - VAR_7[0].count;
 VAR_6.reset_counter2 = 0x80000000 - VAR_7[1].count;
}
