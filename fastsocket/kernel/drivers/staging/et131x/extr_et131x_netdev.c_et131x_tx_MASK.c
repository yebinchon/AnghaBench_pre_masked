
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct net_device {int trans_start; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sk_buff*,struct net_device*) ;
 int VAR_3 ;
 int FUNC_1 (struct net_device*) ;

int FUNC_2(struct sk_buff *VAR_4, struct net_device *VAR_5)
{
 int VAR_6 = 0;


 VAR_5->trans_start = VAR_3;


 VAR_6 = FUNC_0(VAR_4, VAR_5);


 if (VAR_6 != 0) {
  if (VAR_6 == -VAR_0) {



   FUNC_1(VAR_5);
   VAR_6 = VAR_1;
  } else {
   VAR_6 = VAR_2;
  }
 }
 return VAR_6;
}
