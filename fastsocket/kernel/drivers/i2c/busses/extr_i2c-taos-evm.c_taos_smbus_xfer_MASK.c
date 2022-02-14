
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union i2c_smbus_data {int byte; } ;
typedef int u8 ;
typedef scalar_t__ u16 ;
struct taos_data {char* buffer; scalar_t__ addr; int pos; scalar_t__ state; } ;
struct serio {int dummy; } ;
struct i2c_adapter {int dev; struct serio* algo_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 char VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int *,char*,char*) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int) ;
 struct taos_data* FUNC_4 (struct serio*) ;
 int FUNC_5 (struct serio*,char) ;
 int FUNC_6 (char*,int *,int) ;
 int FUNC_7 (char*,char*,...) ;
 int FUNC_8 (char*,char*) ;
 int FUNC_9 (int ,int,int ) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_10(struct i2c_adapter *VAR_7, u16 VAR_8,
      unsigned short VAR_9, char VAR_10, u8 VAR_11,
      int VAR_12, union i2c_smbus_data *VAR_13)
{
 struct serio *VAR_14 = VAR_7->algo_data;
 struct taos_data *VAR_15 = FUNC_4(VAR_14);
 char *VAR_16;



 VAR_16 = VAR_15->buffer;



 if (VAR_8 != VAR_15->addr)
  VAR_16 += FUNC_7(VAR_16, "@%02X", VAR_8);

 switch (VAR_12) {
 case 129:
  if (VAR_10 == VAR_3)
   FUNC_7(VAR_16, "$#%02X", VAR_11);
  else
   FUNC_7(VAR_16, "$");
  break;
 case 128:
  if (VAR_10 == VAR_3)
   FUNC_7(VAR_16, "$%02X#%02X", VAR_11, VAR_13->byte);
  else
   FUNC_7(VAR_16, "$%02X", VAR_11);
  break;
 default:
  FUNC_2(&VAR_7->dev, "Unsupported transaction %d\n", VAR_12);
  return -VAR_2;
 }


 FUNC_0(&VAR_7->dev, "Command buffer: %s\n", VAR_15->buffer);
 for (VAR_16 = VAR_15->buffer; *VAR_16; VAR_16++)
  FUNC_5(VAR_14, *VAR_16);

 VAR_15->addr = VAR_8;


 VAR_15->pos = 0;
 VAR_15->state = VAR_5;
 FUNC_5(VAR_14, VAR_10 == VAR_3 ? '>' : '<');
 FUNC_9(VAR_6, VAR_15->state == VAR_4,
      FUNC_3(150));
 if (VAR_15->state != VAR_4
  || VAR_15->pos != 5) {
  FUNC_1(&VAR_7->dev, "Transaction timeout (pos=%d)\n",
   VAR_15->pos);
  return -VAR_0;
 }
 FUNC_0(&VAR_7->dev, "Answer buffer: %s\n", VAR_15->buffer);


 VAR_16 = VAR_15->buffer + 1;
 VAR_16[3] = '\0';
 if (!FUNC_8(VAR_16, "NAK"))
  return -VAR_1;

 if (VAR_10 == VAR_3) {
  if (!FUNC_8(VAR_16, "ACK"))
   return 0;
 } else {
  if (VAR_16[0] == 'x') {
   VAR_13->byte = FUNC_6(VAR_16 + 1, ((void*)0), 16);
   return 0;
  }
 }

 return -VAR_0;
}
