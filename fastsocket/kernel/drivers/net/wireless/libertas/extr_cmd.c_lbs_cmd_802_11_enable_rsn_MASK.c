
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct lbs_private {int dummy; } ;
struct TYPE_2__ {void* size; } ;
struct cmd_ds_802_11_enable_rsn {void* enable; void* action; TYPE_1__ hdr; } ;
typedef int cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (struct lbs_private*,int ,struct cmd_ds_802_11_enable_rsn*) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (void*) ;

int FUNC_6(struct lbs_private *VAR_5, uint16_t VAR_6,
         uint16_t *VAR_7)
{
 struct cmd_ds_802_11_enable_rsn VAR_8;
 int VAR_9;

 FUNC_3(VAR_4);

 VAR_8.hdr.size = FUNC_0(sizeof(VAR_8));
 VAR_8.action = FUNC_0(VAR_6);

 if (VAR_6 == VAR_1)
  VAR_8.enable = 0;
 else {
  if (*VAR_7)
   VAR_8.enable = FUNC_0(VAR_3);
  else
   VAR_8.enable = FUNC_0(VAR_2);
  FUNC_2("ENABLE_RSN: %d\n", *VAR_7);
 }

 VAR_9 = FUNC_1(VAR_5, VAR_0, &VAR_8);
 if (!VAR_9 && VAR_6 == VAR_1)
  *VAR_7 = FUNC_5(VAR_8.enable);

 FUNC_4(VAR_4, "ret %d", VAR_9);
 return VAR_9;
}
