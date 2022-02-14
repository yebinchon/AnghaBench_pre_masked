
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct lbs_private {int dummy; } ;
struct TYPE_2__ {void* size; void* command; } ;
struct cmd_ds_802_11_inactivity_timeout {void* timeout; void* action; TYPE_1__ hdr; } ;
typedef int cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (struct lbs_private*,int,struct cmd_ds_802_11_inactivity_timeout*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (void*) ;

int FUNC_5(struct lbs_private *VAR_3,
          uint16_t VAR_4, uint16_t *VAR_5)
{
 struct cmd_ds_802_11_inactivity_timeout VAR_6;
 int VAR_7;

 FUNC_2(VAR_2);

 VAR_6.hdr.command = FUNC_0(VAR_0);
 VAR_6.hdr.size = FUNC_0(sizeof(VAR_6));

 VAR_6.action = FUNC_0(VAR_4);

 if (VAR_4 == VAR_1)
  VAR_6.timeout = FUNC_0(*VAR_5);
 else
  VAR_6.timeout = 0;

 VAR_7 = FUNC_1(VAR_3, VAR_0, &VAR_6);

 if (!VAR_7)
  *VAR_5 = FUNC_4(VAR_6.timeout);

 FUNC_3(VAR_2, "ret %d", VAR_7);
 return 0;
}
