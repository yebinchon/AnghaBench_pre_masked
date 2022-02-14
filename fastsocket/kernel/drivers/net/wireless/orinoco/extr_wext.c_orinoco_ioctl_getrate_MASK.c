
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct orinoco_private {int bitratemode; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct iw_param {int value; int fixed; scalar_t__ disabled; } ;


 int VAR_0 ;
 struct orinoco_private* FUNC_0 (struct net_device*) ;
 scalar_t__ FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ,int*,int*) ;
 int FUNC_3 (struct orinoco_private*,int*) ;
 scalar_t__ FUNC_4 (struct orinoco_private*,unsigned long*) ;
 int FUNC_5 (struct orinoco_private*,unsigned long*) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_1,
     struct iw_request_info *VAR_2,
     struct iw_param *VAR_3,
     char *VAR_4)
{
 struct orinoco_private *VAR_5 = FUNC_0(VAR_1);
 int VAR_6 = 0;
 int VAR_7, VAR_8;
 unsigned long VAR_9;

 if (FUNC_4(VAR_5, &VAR_9) != 0)
  return -VAR_0;

 FUNC_2(VAR_5->bitratemode, &VAR_7, &VAR_8);



 if (FUNC_1(VAR_1)) {
  int VAR_10;
  int VAR_11;


  VAR_11 = FUNC_3(VAR_5, &VAR_10);
  if (!VAR_11)
   VAR_7 = VAR_10;
 }

 FUNC_5(VAR_5, &VAR_9);

 VAR_3->value = VAR_7;
 VAR_3->fixed = !VAR_8;
 VAR_3->disabled = 0;

 return VAR_6;
}
