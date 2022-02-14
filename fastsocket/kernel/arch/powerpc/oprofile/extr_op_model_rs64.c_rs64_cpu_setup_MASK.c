
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct op_counter_config {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,unsigned int) ;
 int FUNC_4 () ;

__attribute__((used)) static int FUNC_5(struct op_counter_config *VAR_10)
{
 unsigned int VAR_11;


 VAR_11 = VAR_1;
 FUNC_3(VAR_7, VAR_11);


 FUNC_3(VAR_8, 0);

 if (FUNC_0(VAR_0))
  FUNC_3(VAR_9, 0);

 VAR_11 |= VAR_3|VAR_6|VAR_2;

 VAR_11 |= VAR_4|VAR_5;
 FUNC_3(VAR_7, VAR_11);

 FUNC_1("setup on cpu %d, mmcr0 %lx\n", FUNC_4(),
     FUNC_2(VAR_7));
 FUNC_1("setup on cpu %d, mmcr1 %lx\n", FUNC_4(),
     FUNC_2(VAR_8));

 return 0;
}
