
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {int truesize; } ;
struct TYPE_4__ {int length; } ;
struct atmtcp_control {int type; int vcc; TYPE_1__ hdr; } ;
struct atm_vcc {int dev; int flags; int (* push ) (struct atm_vcc*,struct sk_buff*) ;} ;
typedef int atm_kptr_t ;
struct TYPE_6__ {struct atm_vcc* vcc; } ;
struct TYPE_5__ {int sk_sleep; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_3__* FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,int *) ;
 struct sk_buff* FUNC_3 (int,int ) ;
 int FUNC_4 (struct atm_vcc*,int ) ;
 int VAR_6 ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 () ;
 int FUNC_7 (int *,int ,int) ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 () ;
 int FUNC_10 (int ) ;
 TYPE_2__* FUNC_11 (struct atm_vcc*) ;
 scalar_t__ FUNC_12 (struct sk_buff*,int) ;
 int FUNC_13 (struct atm_vcc*,struct sk_buff*) ;
 int FUNC_14 (int,int *) ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_15(struct atm_vcc *VAR_8,int VAR_9,
    const struct atmtcp_control *VAR_10,int VAR_11)
{
 FUNC_0(VAR_7,VAR_6);
 struct atm_vcc *VAR_12;
 struct sk_buff *VAR_13;
 struct atmtcp_control *VAR_14;
 int VAR_15;
 int VAR_16 = 0;

 VAR_12 = FUNC_1(VAR_8->dev) ? FUNC_1(VAR_8->dev)->vcc : ((void*)0);
 if (!VAR_12) return -VAR_2;
 VAR_13 = FUNC_3(sizeof(*VAR_10),VAR_3);
 if (!VAR_13) return -VAR_1;
 FUNC_6();
 VAR_12 = FUNC_1(VAR_8->dev) ? FUNC_1(VAR_8->dev)->vcc : ((void*)0);
 if (!VAR_12) {
  FUNC_5(VAR_13);
  return -VAR_2;
 }
 FUNC_4(VAR_12,VAR_13->truesize);
 VAR_14 = (struct atmtcp_control *) FUNC_12(VAR_13,sizeof(*VAR_14));
 *VAR_14 = *VAR_10;
 VAR_14->hdr.length = VAR_0;
 VAR_14->type = VAR_9;
 FUNC_7(&VAR_14->vcc,0,sizeof(atm_kptr_t));
 *(struct atm_vcc **) &VAR_14->vcc = VAR_8;
 VAR_15 = FUNC_14(VAR_11,&VAR_8->flags);
 VAR_12->push(VAR_12,VAR_13);
 FUNC_2(FUNC_11(VAR_8)->sk_sleep, &VAR_7);
 while (FUNC_14(VAR_11,&VAR_8->flags) == VAR_15) {
  FUNC_6();
  VAR_12 = FUNC_1(VAR_8->dev) ? FUNC_1(VAR_8->dev)->vcc : ((void*)0);
  if (!VAR_12) {
   VAR_16 = -VAR_2;
   break;
  }
  FUNC_10(VAR_5);
  FUNC_9();
 }
 FUNC_10(VAR_4);
 FUNC_8(FUNC_11(VAR_8)->sk_sleep, &VAR_7);
 return VAR_16;
}
