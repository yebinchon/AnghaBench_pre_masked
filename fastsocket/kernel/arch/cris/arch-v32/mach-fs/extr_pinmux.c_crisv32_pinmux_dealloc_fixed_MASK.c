
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
 int FUNC_2 (int ,int,int) ;
 int FUNC_3 () ;
 int FUNC_4 (char*,char*,int) ;
 int VAR_5 ;






 int VAR_6 ;






 char* VAR_7 ;
 int VAR_8 ;
 void* VAR_9 ;
 int VAR_10 ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

int FUNC_7(enum fixed_function VAR_11)
{
 int VAR_12 = -VAR_0;
 char VAR_13[sizeof VAR_7];
 unsigned long VAR_14;

 FUNC_5(&VAR_6, VAR_14);


 FUNC_4(VAR_13, VAR_7, sizeof VAR_7);

 FUNC_3();

 reg_pinmux_rw_hwprot VAR_15 = FUNC_0(VAR_5, VAR_8, VAR_10);

 switch (VAR_11) {
 case 133:
  VAR_12 = FUNC_2(VAR_2, 4, 7);
  VAR_15.ser1 = VAR_9;
  break;
 case 132:
  VAR_12 = FUNC_2(VAR_2, 8, 11);
  VAR_15.ser2 = VAR_9;
  break;
 case 131:
  VAR_12 = FUNC_2(VAR_2, 12, 15);
  VAR_15.ser3 = VAR_9;
  break;
 case 130:
  VAR_12 = FUNC_2(VAR_2, 0, 3);
  VAR_12 |= FUNC_2(VAR_2, 16, 16);
  VAR_15.sser0 = VAR_9;
  break;
 case 129:
  VAR_12 = FUNC_2(VAR_3, 0, 4);
  VAR_15.sser1 = VAR_9;
  break;
 case 138:
  VAR_12 = FUNC_2(VAR_3, 5, 7);
  VAR_12 |= FUNC_2(VAR_3, 15, 17);
  VAR_15.ata0 = VAR_9;
  break;
 case 137:
  VAR_12 = FUNC_2(VAR_3, 0, 4);
  VAR_12 |= FUNC_2(VAR_4, 17, 17);
  VAR_15.ata1 = VAR_9;
  break;
 case 136:
  VAR_12 = FUNC_2(VAR_2, 11, 15);
  VAR_12 |= FUNC_2(VAR_4, 3, 3);
  VAR_15.ata2 = VAR_9;
  break;
 case 135:
  VAR_12 = FUNC_2(VAR_2, 8, 10);
  VAR_12 |= FUNC_2(VAR_2, 0, 2);
  VAR_15.ata2 = VAR_9;
  break;
 case 139:
  VAR_12 = FUNC_2(VAR_1, 0, 15);
  VAR_12 |= FUNC_2(VAR_3, 8, 15);
  VAR_15.ata = VAR_9;
  break;
 case 134:
  VAR_12 = FUNC_2(VAR_4, 0, 17);
  VAR_15.eth1 = VAR_9;
  VAR_15.eth1_mgm = VAR_9;
  break;
 case 128:
  VAR_12 = FUNC_2(VAR_2, 16, 16);
  VAR_15.timer = VAR_9;
  FUNC_6(&VAR_6, VAR_14);
  return VAR_12;
 }

 if (!VAR_12)
  FUNC_1(VAR_5, VAR_8, VAR_10, VAR_15);
 else
  FUNC_4(VAR_7, VAR_13, sizeof VAR_7);

 FUNC_6(&VAR_6, VAR_14);

 return VAR_12;
}
