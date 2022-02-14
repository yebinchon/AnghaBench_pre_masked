
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct op_system_config {scalar_t__ enable_user; scalar_t__ enable_kernel; } ;
struct op_counter_config {int event; scalar_t__ count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__* VAR_7 ;

__attribute__((used)) static int FUNC_6(struct op_counter_config *VAR_8,
        struct op_system_config *VAR_9,
        int VAR_10)
{
 int VAR_11;

 VAR_6 = VAR_10;





 for (VAR_11 = 0; VAR_11 < VAR_10; ++VAR_11)
  VAR_7[VAR_11] = 0x80000000UL - VAR_8[VAR_11].count;


 VAR_3 = VAR_2 | FUNC_0(VAR_8[0].event)
  | FUNC_1(VAR_8[1].event);


 if (VAR_9->enable_kernel)
  VAR_3 &= ~(VAR_1);

 if (VAR_9->enable_user)
  VAR_3 &= ~(VAR_0);


 VAR_4 = FUNC_2(VAR_8[2].event)
  | FUNC_3(VAR_8[3].event);
 if (VAR_10 > 4)
  VAR_4 |= FUNC_4(VAR_8[4].event)
   | FUNC_5(VAR_8[5].event);

 VAR_5 = 0;

 return 0;
}
