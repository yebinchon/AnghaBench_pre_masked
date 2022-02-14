
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


union i2c_smbus_data {int byte; int* block; int word; } ;
typedef int u8 ;
typedef int u16 ;
struct i2c_adapter {struct bfin_twi_iface* algo_data; } ;
struct TYPE_3__ {scalar_t__ expires; } ;
struct bfin_twi_iface {int writeNum; int readNum; int* transPtr; int cur_mode; scalar_t__ result; int manual_stop; char read_write; int command; int timeout_count; int complete; TYPE_1__ timeout_timer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;






 char VAR_4 ;

 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_0 () ;
 int VAR_11 ;

 void* VAR_12 ;

 int VAR_13 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *) ;
 scalar_t__ VAR_14 ;
 int FUNC_4 (struct bfin_twi_iface*) ;
 int FUNC_5 (struct bfin_twi_iface*) ;
 int FUNC_6 (struct bfin_twi_iface*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct bfin_twi_iface*,int) ;
 int FUNC_9 (struct bfin_twi_iface*,int) ;
 int FUNC_10 (struct bfin_twi_iface*,int) ;
 int FUNC_11 (struct bfin_twi_iface*,int ) ;
 int FUNC_12 (struct bfin_twi_iface*,int) ;
 int FUNC_13 (struct bfin_twi_iface*,int) ;
 int FUNC_14 () ;

int FUNC_15(struct i2c_adapter *VAR_15, u16 VAR_16,
   unsigned short VAR_17, char VAR_18,
   u8 VAR_19, int VAR_20, union i2c_smbus_data *VAR_21)
{
 struct bfin_twi_iface *VAR_22 = VAR_15->algo_data;
 int VAR_23 = 0;

 if (!(FUNC_4(VAR_22) & VAR_11))
  return -VAR_2;

 while (FUNC_6(VAR_22) & VAR_0)
  FUNC_14();

 VAR_22->writeNum = 0;
 VAR_22->readNum = 0;


 switch (VAR_20) {
 case 131:
  VAR_22->transPtr = ((void*)0);
  VAR_22->cur_mode = VAR_12;
  break;
 case 135:
  if (VAR_21 == ((void*)0))
   VAR_22->transPtr = ((void*)0);
  else {
   if (VAR_18 == VAR_4)
    VAR_22->readNum = 1;
   else
    VAR_22->writeNum = 1;
   VAR_22->transPtr = &VAR_21->byte;
  }
  VAR_22->cur_mode = VAR_12;
  break;
 case 134:
  if (VAR_18 == VAR_4) {
   VAR_22->readNum = 1;
   VAR_22->cur_mode = 129;
  } else {
   VAR_22->writeNum = 1;
   VAR_22->cur_mode = 128;
  }
  VAR_22->transPtr = &VAR_21->byte;
  break;
 case 130:
  if (VAR_18 == VAR_4) {
   VAR_22->readNum = 2;
   VAR_22->cur_mode = 129;
  } else {
   VAR_22->writeNum = 2;
   VAR_22->cur_mode = 128;
  }
  VAR_22->transPtr = (u8 *)&VAR_21->word;
  break;
 case 132:
  VAR_22->writeNum = 2;
  VAR_22->readNum = 2;
  VAR_22->cur_mode = 129;
  VAR_22->transPtr = (u8 *)&VAR_21->word;
  break;
 case 136:
  if (VAR_18 == VAR_4) {
   VAR_22->readNum = 0;
   VAR_22->cur_mode = 129;
  } else {
   VAR_22->writeNum = VAR_21->block[0] + 1;
   VAR_22->cur_mode = 128;
  }
  VAR_22->transPtr = VAR_21->block;
  break;
 case 133:
  if (VAR_18 == VAR_4) {
   VAR_22->readNum = VAR_21->block[0];
   VAR_22->cur_mode = 129;
  } else {
   VAR_22->writeNum = VAR_21->block[0];
   VAR_22->cur_mode = 128;
  }
  VAR_22->transPtr = (u8 *)&VAR_21->block[1];
  break;
 default:
  return -1;
 }

 VAR_22->result = 0;
 VAR_22->manual_stop = 0;
 VAR_22->read_write = VAR_18;
 VAR_22->command = VAR_19;
 VAR_22->timeout_count = 10;
 FUNC_3(&(VAR_22->complete));




 FUNC_8(VAR_22, 0x3);
 FUNC_0();
 FUNC_8(VAR_22, 0);


 FUNC_10(VAR_22, VAR_8 | VAR_5 | VAR_13 | VAR_10);


 FUNC_11(VAR_22, VAR_16);
 FUNC_0();

 VAR_22->timeout_timer.expires = VAR_14 + VAR_9;
 FUNC_1(&VAR_22->timeout_timer);

 switch (VAR_22->cur_mode) {
 case 128:
  FUNC_13(VAR_22, VAR_22->command);
  FUNC_9(VAR_22, VAR_5 | VAR_8 |
   ((VAR_22->read_write == VAR_4) ?
   VAR_10 : VAR_13));
  FUNC_0();

  if (VAR_22->writeNum + 1 <= 255)
   FUNC_12(VAR_22, (VAR_22->writeNum + 1) << 6);
  else {
   FUNC_12(VAR_22, 0xff << 6);
   VAR_22->manual_stop = 1;
  }

  FUNC_12(VAR_22, FUNC_5(VAR_22) | VAR_7 |
   ((VAR_1>100) ? VAR_3 : 0));
  break;
 case 129:
  FUNC_13(VAR_22, VAR_22->command);
  FUNC_9(VAR_22, VAR_5 | VAR_8 | VAR_10 | VAR_13);
  FUNC_0();

  if (VAR_22->writeNum > 0)
   FUNC_12(VAR_22, (VAR_22->writeNum + 1) << 6);
  else
   FUNC_12(VAR_22, 0x1 << 6);

  FUNC_12(VAR_22, FUNC_5(VAR_22) | VAR_7 |
   ((VAR_1>100) ? VAR_3 : 0));
  break;
 default:
  FUNC_12(VAR_22, 0);
  if (VAR_20 != 131) {



   if (VAR_22->read_write != VAR_4) {
    if (VAR_22->writeNum > 0) {
     FUNC_13(VAR_22,
      *(VAR_22->transPtr++));
     if (VAR_22->writeNum <= 255)
      FUNC_12(VAR_22,
       VAR_22->writeNum << 6);
     else {
      FUNC_12(VAR_22,
       0xff << 6);
      VAR_22->manual_stop = 1;
     }
     VAR_22->writeNum--;
    } else {
     FUNC_13(VAR_22, VAR_22->command);
     FUNC_12(VAR_22, 1 << 6);
    }
   } else {
    if (VAR_22->readNum > 0 && VAR_22->readNum <= 255)
     FUNC_12(VAR_22,
      VAR_22->readNum << 6);
    else if (VAR_22->readNum > 255) {
     FUNC_12(VAR_22, 0xff << 6);
     VAR_22->manual_stop = 1;
    } else {
     FUNC_2(&VAR_22->timeout_timer);
     break;
    }
   }
  }
  FUNC_9(VAR_22, VAR_5 | VAR_8 |
   ((VAR_22->read_write == VAR_4) ?
   VAR_10 : VAR_13));
  FUNC_0();


  FUNC_12(VAR_22, FUNC_5(VAR_22) | VAR_7 |
   ((VAR_22->read_write == VAR_4) ? VAR_6 : 0) |
   ((VAR_1 > 100) ? VAR_3 : 0));
  break;
 }
 FUNC_0();

 FUNC_7(&VAR_22->complete);

 VAR_23 = (VAR_22->result >= 0) ? 0 : -1;

 return VAR_23;
}
