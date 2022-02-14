
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct sk_buff {int * data; } ;
struct lbs_private {int card; TYPE_2__* dev; } ;
struct TYPE_3__ {int rx_dropped; } ;
struct TYPE_4__ {TYPE_1__ stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct sk_buff* FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int *,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,char*,struct sk_buff*) ;
 int FUNC_7 (char*,int) ;
 int FUNC_8 (struct sk_buff*,int) ;
 int FUNC_9 (struct sk_buff*,int) ;

__attribute__((used)) static struct sk_buff *FUNC_10(struct lbs_private *VAR_7)
{
 struct sk_buff *VAR_8 = ((void*)0);
 u16 VAR_9;
 u8 *VAR_10;

 FUNC_5(VAR_5);

 VAR_9 = FUNC_1(VAR_7->card, VAR_4);
 if (VAR_9 == 0 || VAR_9 > VAR_6) {
  FUNC_7("card data buffer has invalid # of bytes (%d)\n", VAR_9);
  VAR_7->dev->stats.rx_dropped++;
  goto dat_err;
 }

 VAR_8 = FUNC_0(VAR_6 + 2);
 if (!VAR_8)
  goto out;
 FUNC_8(VAR_8, VAR_9);
 FUNC_9(VAR_8, 2);
 VAR_10 = VAR_8->data;


 FUNC_2(VAR_7->card, VAR_3, VAR_10, VAR_9/sizeof(u16));
 if (VAR_9 & 1)
  VAR_10[VAR_9-1] = FUNC_3(VAR_7->card, VAR_3);

dat_err:
 FUNC_4(VAR_7->card, VAR_2, VAR_0);
 FUNC_4(VAR_7->card, VAR_1, VAR_0);

out:
 FUNC_6(VAR_5, "ret %p", VAR_8);
 return VAR_8;
}
