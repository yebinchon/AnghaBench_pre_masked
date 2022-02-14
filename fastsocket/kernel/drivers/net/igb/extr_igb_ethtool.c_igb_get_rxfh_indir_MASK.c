
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct igb_adapter {int * rss_indir_tbl; } ;


 int VAR_0 ;
 struct igb_adapter* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_1, u32 *VAR_2)
{
 struct igb_adapter *VAR_3 = FUNC_0(VAR_1);
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  VAR_2[VAR_4] = VAR_3->rss_indir_tbl[VAR_4];

 return 0;
}
