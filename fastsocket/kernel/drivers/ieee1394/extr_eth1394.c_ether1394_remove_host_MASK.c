
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hpsb_host {int dummy; } ;
struct eth1394_priv {scalar_t__ iso; int local_fifo; } ;
struct eth1394_host_info {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct hpsb_host*) ;
 struct eth1394_host_info* FUNC_2 (int *,struct hpsb_host*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *,struct hpsb_host*,int ) ;
 struct eth1394_priv* FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct hpsb_host *VAR_1)
{
 struct eth1394_host_info *VAR_2;
 struct eth1394_priv *VAR_3;

 VAR_2 = FUNC_2(&VAR_0, VAR_1);
 if (!VAR_2)
  return;
 VAR_3 = FUNC_5(VAR_2->dev);
 FUNC_4(&VAR_0, VAR_1, VAR_3->local_fifo);
 FUNC_1(VAR_1);
 if (VAR_3->iso)
  FUNC_3(VAR_3->iso);
 FUNC_6(VAR_2->dev);
 FUNC_0(VAR_2->dev);
}
