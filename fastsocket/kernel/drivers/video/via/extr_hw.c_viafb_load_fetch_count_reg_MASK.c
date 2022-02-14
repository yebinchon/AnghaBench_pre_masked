
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct io_register {int dummy; } ;
struct TYPE_4__ {int reg_num; struct io_register* reg; } ;
struct TYPE_5__ {int reg_num; struct io_register* reg; } ;
struct TYPE_6__ {TYPE_1__ iga2_fetch_count_reg; TYPE_2__ iga1_fetch_count_reg; } ;



 int FUNC_0 (int,int) ;


 int FUNC_1 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__ VAR_2 ;
 int FUNC_2 (int,int,struct io_register*,int ) ;

void FUNC_3(int VAR_3, int VAR_4, int VAR_5)
{
 int VAR_6;
 int VAR_7;
 struct io_register *VAR_8 = ((void*)0);

 switch (VAR_5) {
 case 129:
 case 130:
  VAR_6 = FUNC_0(VAR_3, VAR_4);
  VAR_7 = VAR_2.
   iga1_fetch_count_reg.reg_num;
  VAR_8 = VAR_2.iga1_fetch_count_reg.reg;
  FUNC_2(VAR_6, VAR_7, VAR_8, VAR_1);
  if (VAR_5 == 130)
   break;
 case 128:
  VAR_6 = FUNC_1(VAR_3, VAR_4);
  VAR_7 = VAR_2.
   iga2_fetch_count_reg.reg_num;
  VAR_8 = VAR_2.iga2_fetch_count_reg.reg;
  FUNC_2(VAR_6, VAR_7, VAR_8, VAR_0);
  break;
 }

}
