
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct net_device {struct lbs_private* ml_priv; } ;
struct lbs_private {int enablehwauto; int cur_rate; int fwrelease; } ;
struct iw_request_info {int dummy; } ;
struct iw_param {int value; int fixed; } ;
typedef int rates ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct lbs_private*,int*) ;
 int FUNC_1 (struct lbs_private*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (struct lbs_private*,int) ;
 int FUNC_7 (struct lbs_private*,int ,int ,int ,int ) ;
 int FUNC_8 (struct lbs_private*,int ,int ,int ,int ,int) ;
 int FUNC_9 (int*,int,int) ;
 int FUNC_10 (int*,int ,int) ;

__attribute__((used)) static int FUNC_11(struct net_device *VAR_10, struct iw_request_info *VAR_11,
    struct iw_param *VAR_12, char *VAR_13)
{
 struct lbs_private *VAR_14 = VAR_10->ml_priv;
 u8 VAR_15 = 0;
 int VAR_16 = -VAR_1;
 u8 VAR_17[VAR_3 + 1];

 FUNC_2(VAR_2);
 FUNC_4("vwrq->value %d\n", VAR_12->value);
 FUNC_4("vwrq->fixed %d\n", VAR_12->fixed);

 if (VAR_12->fixed && VAR_12->value == -1)
  goto out;


 VAR_14->enablehwauto = !VAR_12->fixed;

 if (VAR_12->value == -1)
  VAR_14->cur_rate = 0;
 else {
  if (VAR_12->value % 100000)
   goto out;

  VAR_15 = VAR_12->value / 500000;
  VAR_14->cur_rate = VAR_15;

  FUNC_10(VAR_17, 0, sizeof(VAR_17));
  FUNC_0(VAR_14, VAR_17);
  if (!FUNC_9(VAR_17, VAR_15, sizeof(VAR_17))) {
   FUNC_5("fixed data rate 0x%X out of range\n",
    VAR_15);
   goto out;
  }
  if (VAR_14->fwrelease < 0x09000000) {
   VAR_16 = FUNC_7(VAR_14, 0,
     VAR_4,
     VAR_5,
     VAR_6);
   if (VAR_16)
    goto out;
  }
  VAR_16 = FUNC_8(VAR_14, 0, VAR_7, VAR_8,
    VAR_9, 1);
  if (VAR_16)
   goto out;
 }


 VAR_16 = FUNC_1(VAR_14, VAR_0);


 if (VAR_16)
  VAR_16 = FUNC_6(VAR_14, VAR_15);

out:
 FUNC_3(VAR_2, "ret %d", VAR_16);
 return VAR_16;
}
