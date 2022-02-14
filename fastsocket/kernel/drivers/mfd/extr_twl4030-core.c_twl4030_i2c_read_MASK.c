
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
struct twl4030_client {int xfer_lock; struct i2c_msg* xfer_msg; TYPE_1__* client; int address; } ;
struct i2c_msg {int len; size_t* buf; scalar_t__ flags; int addr; } ;
struct TYPE_4__ {int sid; size_t base; } ;
struct TYPE_3__ {int adapter; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (int ,struct i2c_msg*,int) ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int ,int) ;
 TYPE_2__* VAR_5 ;
 struct twl4030_client* VAR_6 ;
 scalar_t__ FUNC_4 (int) ;

int FUNC_5(u8 VAR_7, u8 *VAR_8, u8 VAR_9, unsigned VAR_10)
{
 int VAR_11;
 u8 VAR_12;
 int VAR_13;
 struct twl4030_client *VAR_14;
 struct i2c_msg *VAR_15;

 if (FUNC_4(VAR_7 > VAR_3)) {
  FUNC_3("%s: invalid module number %d\n", VAR_0, VAR_7);
  return -VAR_1;
 }
 VAR_13 = VAR_5[VAR_7].sid;
 VAR_14 = &VAR_6[VAR_13];

 if (FUNC_4(!VAR_4)) {
  FUNC_3("%s: client %d is not initialized\n", VAR_0, VAR_13);
  return -VAR_1;
 }
 FUNC_1(&VAR_14->xfer_lock);

 VAR_15 = &VAR_14->xfer_msg[0];
 VAR_15->addr = VAR_14->address;
 VAR_15->len = 1;
 VAR_15->flags = 0;
 VAR_12 = VAR_5[VAR_7].base + VAR_9;
 VAR_15->buf = &VAR_12;

 VAR_15 = &VAR_14->xfer_msg[1];
 VAR_15->addr = VAR_14->address;
 VAR_15->flags = VAR_2;
 VAR_15->len = VAR_10;
 VAR_15->buf = VAR_8;
 VAR_11 = FUNC_0(VAR_14->client->adapter, VAR_14->xfer_msg, 2);
 FUNC_2(&VAR_14->xfer_lock);


 if (VAR_11 >= 0)
  VAR_11 = 0;
 return VAR_11;
}
