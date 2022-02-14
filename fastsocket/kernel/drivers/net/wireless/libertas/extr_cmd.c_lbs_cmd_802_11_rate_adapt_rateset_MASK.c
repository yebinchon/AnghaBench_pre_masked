
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct lbs_private {int enablehwauto; void* ratebitmap; int cur_rate; } ;
struct TYPE_2__ {void* size; } ;
struct cmd_ds_802_11_rate_adapt_rateset {void* enablehwauto; void* bitmap; void* action; TYPE_1__ hdr; } ;
typedef int cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (struct lbs_private*,int ,struct cmd_ds_802_11_rate_adapt_rateset*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int) ;
 void* FUNC_4 (int ,int) ;
 void* FUNC_5 (void*) ;

int FUNC_6(struct lbs_private *VAR_4,
          uint16_t VAR_5)
{
 struct cmd_ds_802_11_rate_adapt_rateset VAR_6;
 int VAR_7;

 FUNC_2(VAR_3);

 if (!VAR_4->cur_rate && !VAR_4->enablehwauto)
  return -VAR_2;

 VAR_6.hdr.size = FUNC_0(sizeof(VAR_6));

 VAR_6.action = FUNC_0(VAR_5);
 VAR_6.enablehwauto = FUNC_0(VAR_4->enablehwauto);
 VAR_6.bitmap = FUNC_4(VAR_4->cur_rate, VAR_4->enablehwauto);
 VAR_7 = FUNC_1(VAR_4, VAR_0, &VAR_6);
 if (!VAR_7 && VAR_5 == VAR_1) {
  VAR_4->ratebitmap = FUNC_5(VAR_6.bitmap);
  VAR_4->enablehwauto = FUNC_5(VAR_6.enablehwauto);
 }

 FUNC_3(VAR_3, "ret %d", VAR_7);
 return VAR_7;
}
