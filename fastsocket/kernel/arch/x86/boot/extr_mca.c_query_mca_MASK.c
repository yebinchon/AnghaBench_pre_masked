
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct biosregs {int ah; int eflags; int bx; int es; } ;
struct TYPE_2__ {int sys_desc_table; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (struct biosregs*) ;
 int FUNC_2 (int,struct biosregs*,struct biosregs*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

int FUNC_5(void)
{
 struct biosregs VAR_2, VAR_3;
 u16 VAR_4;

 FUNC_1(&VAR_2);
 VAR_2.ah = 0xc0;
 FUNC_2(0x15, &VAR_2, &VAR_3);

 if (VAR_3.eflags & VAR_0)
  return -1;

 FUNC_4(VAR_3.es);
 VAR_4 = FUNC_3(VAR_3.bx);

 if (VAR_4 > sizeof(VAR_1.sys_desc_table))
  VAR_4 = sizeof(VAR_1.sys_desc_table);

 FUNC_0(&VAR_1.sys_desc_table, VAR_3.bx, VAR_4);
 return 0;
}
