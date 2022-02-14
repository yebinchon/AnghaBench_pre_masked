
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct sleep_params {int sp_error; int sp_offset; int sp_stabletime; int sp_reserved; int sp_extsleepclk; int sp_calcontrol; } ;
struct lbs_private {int dummy; } ;
struct TYPE_2__ {void* size; } ;
struct cmd_ds_802_11_sleep_params {void* reserved; int externalsleepclk; int calcontrol; void* stabletime; void* offset; void* error; void* action; TYPE_1__ hdr; } ;
typedef int cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (struct lbs_private*,int ,struct cmd_ds_802_11_sleep_params*) ;
 int FUNC_2 (char*,void*,void*,void*,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,int) ;
 void* FUNC_5 (void*) ;
 int FUNC_6 (struct cmd_ds_802_11_sleep_params*,int ,int) ;

int FUNC_7(struct lbs_private *VAR_3, uint16_t VAR_4,
    struct sleep_params *VAR_5)
{
 struct cmd_ds_802_11_sleep_params VAR_6;
 int VAR_7;

 FUNC_3(VAR_2);

 if (VAR_4 == VAR_1) {
  FUNC_6(&VAR_6, 0, sizeof(VAR_6));
 } else {
  VAR_6.error = FUNC_0(VAR_5->sp_error);
  VAR_6.offset = FUNC_0(VAR_5->sp_offset);
  VAR_6.stabletime = FUNC_0(VAR_5->sp_stabletime);
  VAR_6.calcontrol = VAR_5->sp_calcontrol;
  VAR_6.externalsleepclk = VAR_5->sp_extsleepclk;
  VAR_6.reserved = FUNC_0(VAR_5->sp_reserved);
 }
 VAR_6.hdr.size = FUNC_0(sizeof(VAR_6));
 VAR_6.action = FUNC_0(VAR_4);

 VAR_7 = FUNC_1(VAR_3, VAR_0, &VAR_6);

 if (!VAR_7) {
  FUNC_2("error 0x%x, offset 0x%x, stabletime 0x%x, "
       "calcontrol 0x%x extsleepclk 0x%x\n",
       FUNC_5(VAR_6.error), FUNC_5(VAR_6.offset),
       FUNC_5(VAR_6.stabletime), VAR_6.calcontrol,
       VAR_6.externalsleepclk);

  VAR_5->sp_error = FUNC_5(VAR_6.error);
  VAR_5->sp_offset = FUNC_5(VAR_6.offset);
  VAR_5->sp_stabletime = FUNC_5(VAR_6.stabletime);
  VAR_5->sp_calcontrol = VAR_6.calcontrol;
  VAR_5->sp_extsleepclk = VAR_6.externalsleepclk;
  VAR_5->sp_reserved = FUNC_5(VAR_6.reserved);
 }

 FUNC_4(VAR_2, "ret %d", VAR_7);
 return 0;
}
