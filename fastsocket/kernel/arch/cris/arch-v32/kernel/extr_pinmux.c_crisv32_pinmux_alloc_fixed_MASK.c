
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* timer; void* eth1_mgm; void* eth1; void* ata; void* ata2; void* ata1; void* ata0; void* sser1; void* sser0; void* ser3; void* ser2; void* ser1; } ;
typedef TYPE_1__ reg_pinmux_rw_hwprot ;
typedef enum fixed_function { ____Placeholder_fixed_function } fixed_function ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__ FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,TYPE_1__) ;
 int FUNC_2 (int ,int,int,int ) ;
 int FUNC_3 (char*,char*,int) ;
 int VAR_5 ;






 int VAR_6 ;
 int VAR_7 ;






 char* VAR_8 ;
 int VAR_9 ;
 void* VAR_10 ;
 int VAR_11 ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

int
FUNC_6(enum fixed_function VAR_12)
{
 int VAR_13 = -VAR_0;
 char VAR_14[sizeof VAR_8];
 unsigned long VAR_15;

 FUNC_4(&VAR_7, VAR_15);


 FUNC_3(VAR_14, VAR_8, sizeof VAR_8);

 reg_pinmux_rw_hwprot VAR_16 = FUNC_0(VAR_5, VAR_9, VAR_11);

 switch(VAR_12)
 {
 case 133:
  VAR_13 = FUNC_2(VAR_2, 4, 7, VAR_6);
  VAR_16.ser1 = VAR_10;
  break;
 case 132:
  VAR_13 = FUNC_2(VAR_2, 8, 11, VAR_6);
  VAR_16.ser2 = VAR_10;
  break;
 case 131:
  VAR_13 = FUNC_2(VAR_2, 12, 15, VAR_6);
  VAR_16.ser3 = VAR_10;
  break;
 case 130:
  VAR_13 = FUNC_2(VAR_2, 0, 3, VAR_6);
  VAR_13 |= FUNC_2(VAR_2, 16, 16, VAR_6);
  VAR_16.sser0 = VAR_10;
  break;
 case 129:
  VAR_13 = FUNC_2(VAR_3, 0, 4, VAR_6);
  VAR_16.sser1 = VAR_10;
  break;
 case 138:
  VAR_13 = FUNC_2(VAR_3, 5, 7, VAR_6);
  VAR_13 |= FUNC_2(VAR_3, 15, 17, VAR_6);
  VAR_16.ata0 = VAR_10;
  break;
 case 137:
  VAR_13 = FUNC_2(VAR_3, 0, 4, VAR_6);
  VAR_13 |= FUNC_2(VAR_4, 17, 17, VAR_6);
  VAR_16.ata1 = VAR_10;
  break;
 case 136:
  VAR_13 = FUNC_2(VAR_2, 11, 15, VAR_6);
  VAR_13 |= FUNC_2(VAR_4, 3, 3, VAR_6);
  VAR_16.ata2 = VAR_10;
  break;
 case 135:
  VAR_13 = FUNC_2(VAR_2, 8, 10, VAR_6);
  VAR_13 |= FUNC_2(VAR_2, 0, 2, VAR_6);
  VAR_16.ata2 = VAR_10;
  break;
 case 139:
  VAR_13 = FUNC_2(VAR_1, 0, 15, VAR_6);
  VAR_13 |= FUNC_2(VAR_3, 8, 15, VAR_6);
  VAR_16.ata = VAR_10;
  break;
 case 134:
  VAR_13 = FUNC_2(VAR_4, 0, 17, VAR_6);
  VAR_16.eth1 = VAR_10;
  VAR_16.eth1_mgm = VAR_10;
  break;
 case 128:
  VAR_13 = FUNC_2(VAR_2, 16, 16, VAR_6);
  VAR_16.timer = VAR_10;
  FUNC_5(&VAR_7, VAR_15);
  return VAR_13;
 }

 if (!VAR_13)
  FUNC_1(VAR_5, VAR_9, VAR_11, VAR_16);
 else
  FUNC_3(VAR_8, VAR_14, sizeof VAR_8);

  FUNC_5(&VAR_7, VAR_15);

  return VAR_13;
}
