
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct list_head {int dummy; } ;
struct ipoib_dev_priv {int list; } ;
struct ib_device {scalar_t__ node_type; int phys_port_cnt; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct list_head*) ;
 int FUNC_1 (struct net_device*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (struct ib_device*,int *,struct list_head*) ;
 struct net_device* FUNC_3 (char*,struct ib_device*,int) ;
 int VAR_4 ;
 struct list_head* FUNC_4 (int,int ) ;
 int FUNC_5 (int *,struct list_head*) ;
 struct ipoib_dev_priv* FUNC_6 (struct net_device*) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (struct ib_device*,int) ;

__attribute__((used)) static void FUNC_9(struct ib_device *VAR_5)
{
 struct list_head *VAR_6;
 struct net_device *VAR_7;
 struct ipoib_dev_priv *VAR_8;
 int VAR_9, VAR_10, VAR_11;

 if (FUNC_7(VAR_5->node_type) != VAR_3)
  return;

 VAR_6 = FUNC_4(sizeof *VAR_6, VAR_0);
 if (!VAR_6)
  return;

 FUNC_0(VAR_6);

 if (VAR_5->node_type == VAR_2) {
  VAR_9 = 0;
  VAR_10 = 0;
 } else {
  VAR_9 = 1;
  VAR_10 = VAR_5->phys_port_cnt;
 }

 for (VAR_11 = VAR_9; VAR_11 <= VAR_10; ++VAR_11) {
  if (FUNC_8(VAR_5, VAR_11) != VAR_1)
   continue;
  VAR_7 = FUNC_3("ib%d", VAR_5, VAR_11);
  if (!FUNC_1(VAR_7)) {
   VAR_8 = FUNC_6(VAR_7);
   FUNC_5(&VAR_8->list, VAR_6);
  }
 }

 FUNC_2(VAR_5, &VAR_4, VAR_6);
}
