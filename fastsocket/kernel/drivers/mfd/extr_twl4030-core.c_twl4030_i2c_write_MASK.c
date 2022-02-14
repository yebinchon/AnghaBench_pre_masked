
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
struct twl4030_client {int xfer_lock; struct i2c_msg* xfer_msg; TYPE_1__* client; int address; } ;
struct i2c_msg {unsigned int len; size_t* buf; scalar_t__ flags; int addr; } ;
struct TYPE_4__ {int sid; size_t base; } ;
struct TYPE_3__ {int adapter; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int ,struct i2c_msg*,int) ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int ,int) ;
 TYPE_2__* VAR_4 ;
 struct twl4030_client* VAR_5 ;
 scalar_t__ FUNC_4 (int) ;

int FUNC_5(u8 VAR_6, u8 *VAR_7, u8 VAR_8, unsigned VAR_9)
{
 int VAR_10;
 int VAR_11;
 struct twl4030_client *VAR_12;
 struct i2c_msg *VAR_13;

 if (FUNC_4(VAR_6 > VAR_2)) {
  FUNC_3("%s: invalid module number %d\n", VAR_0, VAR_6);
  return -VAR_1;
 }
 VAR_11 = VAR_4[VAR_6].sid;
 VAR_12 = &VAR_5[VAR_11];

 if (FUNC_4(!VAR_3)) {
  FUNC_3("%s: client %d is not initialized\n", VAR_0, VAR_11);
  return -VAR_1;
 }
 FUNC_1(&VAR_12->xfer_lock);




 VAR_13 = &VAR_12->xfer_msg[0];
 VAR_13->addr = VAR_12->address;
 VAR_13->len = VAR_9 + 1;
 VAR_13->flags = 0;
 VAR_13->buf = VAR_7;

 *VAR_7 = VAR_4[VAR_6].base + VAR_8;
 VAR_10 = FUNC_0(VAR_12->client->adapter, VAR_12->xfer_msg, 1);
 FUNC_2(&VAR_12->xfer_lock);


 if (VAR_10 >= 0)
  VAR_10 = 0;
 return VAR_10;
}
