
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct net_device {int trans_start; } ;
struct cas {int min_frame_size; } ;
typedef int netdev_tx_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct cas*,int,struct sk_buff*) ;
 int VAR_3 ;
 struct cas* FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct sk_buff*,int ) ;

__attribute__((used)) static netdev_tx_t FUNC_3(struct sk_buff *VAR_4, struct net_device *VAR_5)
{
 struct cas *VAR_6 = FUNC_1(VAR_5);




 static int VAR_7;

 if (FUNC_2(VAR_4, VAR_6->min_frame_size))
  return VAR_1;




 if (FUNC_0(VAR_6, VAR_7++ & VAR_2, VAR_4))
  return VAR_0;
 VAR_5->trans_start = VAR_3;
 return VAR_1;
}
