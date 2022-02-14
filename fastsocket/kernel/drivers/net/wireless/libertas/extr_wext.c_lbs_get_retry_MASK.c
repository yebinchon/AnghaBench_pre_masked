
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u16 ;
struct net_device {struct lbs_private* ml_priv; } ;
struct lbs_private {void* txretrycount; } ;
struct iw_request_info {int dummy; } ;
struct iw_param {int flags; void* value; scalar_t__ disabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct lbs_private*,int ,void**) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_6, struct iw_request_info *VAR_7,
     struct iw_param *VAR_8, char *VAR_9)
{
 struct lbs_private *VAR_10 = VAR_6->ml_priv;
 int VAR_11 = 0;
 u16 VAR_12 = 0;

 FUNC_0(VAR_3);

 VAR_8->disabled = 0;

 if (VAR_8->flags & VAR_1) {
  VAR_11 = FUNC_2(VAR_10, VAR_4, &VAR_12);
  if (VAR_11)
   goto out;


  VAR_8->value = VAR_12 - 1;
  VAR_8->flags = VAR_0 | VAR_1;
 } else {
  VAR_11 = FUNC_2(VAR_10, VAR_5, &VAR_12);
  if (VAR_11)
   goto out;


  VAR_10->txretrycount = VAR_12;

  VAR_8->value = VAR_12 - 1;
  VAR_8->flags = VAR_0 | VAR_2;
 }

out:
 FUNC_1(VAR_3, "ret %d", VAR_11);
 return VAR_11;
}
