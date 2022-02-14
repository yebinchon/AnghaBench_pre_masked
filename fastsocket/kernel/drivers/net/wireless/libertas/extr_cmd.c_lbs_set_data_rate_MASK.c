
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct lbs_private {scalar_t__ cur_rate; } ;
struct TYPE_2__ {void* size; } ;
struct cmd_ds_802_11_data_rate {scalar_t__* rates; void* action; TYPE_1__ hdr; } ;
typedef int cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (struct lbs_private*,int ,struct cmd_ds_802_11_data_rate*) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,scalar_t__*,int) ;
 int FUNC_6 (int ,char*,int) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 int FUNC_8 (struct cmd_ds_802_11_data_rate*,int ,int) ;

int FUNC_9(struct lbs_private *VAR_4, u8 VAR_5)
{
 struct cmd_ds_802_11_data_rate VAR_6;
 int VAR_7 = 0;

 FUNC_4(VAR_3);

 FUNC_8(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.hdr.size = FUNC_0(sizeof(VAR_6));

 if (VAR_5 > 0) {
  VAR_6.action = FUNC_0(VAR_2);
  VAR_6.rates[0] = FUNC_2(VAR_5);
  if (VAR_6.rates[0] == 0) {
   FUNC_3("DATA_RATE: invalid requested rate of"
               " 0x%02X\n", VAR_5);
   VAR_7 = 0;
   goto out;
  }
  FUNC_3("DATA_RATE: set fixed 0x%02X\n", VAR_6.rates[0]);
 } else {
  VAR_6.action = FUNC_0(VAR_1);
  FUNC_3("DATA_RATE: setting auto\n");
 }

 VAR_7 = FUNC_1(VAR_4, VAR_0, &VAR_6);
 if (VAR_7)
  goto out;

 FUNC_5(VAR_3, "DATA_RATE_RESP", (u8 *) &VAR_6, sizeof (VAR_6));




 VAR_4->cur_rate = FUNC_7(VAR_6.rates[0]);
 FUNC_3("DATA_RATE: current rate is 0x%02x\n", VAR_4->cur_rate);

out:
 FUNC_6(VAR_3, "ret %d", VAR_7);
 return VAR_7;
}
