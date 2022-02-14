
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct net_device {struct lbs_private* ml_priv; } ;
struct lbs_private {int lock; } ;
struct iw_request_info {int dummy; } ;
struct assoc_request {int flags; scalar_t__ mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct lbs_private*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (char*,scalar_t__) ;
 struct assoc_request* FUNC_4 (struct lbs_private*) ;
 int FUNC_5 (struct lbs_private*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int *) ;

__attribute__((used)) static int FUNC_9(struct net_device *VAR_7,
    struct iw_request_info *VAR_8, u32 * VAR_9, char *VAR_10)
{
 int VAR_11 = 0;
 struct lbs_private *VAR_12 = VAR_7->ml_priv;
 struct assoc_request * VAR_13;

 FUNC_1(VAR_6);

 if ( (*VAR_9 != VAR_3)
     && (*VAR_9 != VAR_5)
     && (*VAR_9 != VAR_4)) {
  FUNC_3("Invalid mode: 0x%x\n", *VAR_9);
  VAR_11 = -VAR_1;
  goto out;
 }

 FUNC_6(&VAR_12->lock);
 VAR_13 = FUNC_4(VAR_12);
 if (!VAR_13) {
  VAR_11 = -VAR_2;
  FUNC_0(VAR_12);
 } else {
  VAR_13->mode = *VAR_9;
  FUNC_8(VAR_0, &VAR_13->flags);
  FUNC_5(VAR_12);
  FUNC_3("Switching to mode: 0x%x\n", *VAR_9);
 }
 FUNC_7(&VAR_12->lock);

out:
 FUNC_2(VAR_6, "ret %d", VAR_11);
 return VAR_11;
}
