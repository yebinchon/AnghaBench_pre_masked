
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct op_counter_config {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned long VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (int ) ;
 unsigned int VAR_10 ;
 unsigned long VAR_11 ;
 scalar_t__ FUNC_2 () ;
 unsigned long VAR_12 ;
 int FUNC_3 (int ,unsigned long) ;
 int FUNC_4 () ;
 int FUNC_5 () ;

__attribute__((used)) static int FUNC_6(struct op_counter_config *VAR_13)
{
 unsigned int VAR_14 = VAR_10;
 unsigned long VAR_15 = VAR_12;

 FUNC_4();


 VAR_14 |= VAR_0;
 FUNC_3(VAR_7, VAR_14);

 VAR_14 |= VAR_2|VAR_5|VAR_1;
 VAR_14 |= VAR_3|VAR_4;
 FUNC_3(VAR_7, VAR_14);

 FUNC_3(VAR_8, VAR_11);

 if (FUNC_2())
  VAR_15 |= VAR_6;
 FUNC_3(VAR_9, VAR_15);

 FUNC_0("setup on cpu %d, mmcr0 %lx\n", FUNC_5(),
     FUNC_1(VAR_7));
 FUNC_0("setup on cpu %d, mmcr1 %lx\n", FUNC_5(),
     FUNC_1(VAR_8));
 FUNC_0("setup on cpu %d, mmcra %lx\n", FUNC_5(),
     FUNC_1(VAR_9));

 return 0;
}
