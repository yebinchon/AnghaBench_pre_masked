
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct myri10ge_priv {scalar_t__ csum_flag; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*,int) ;
 struct myri10ge_priv* FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_2, u32 VAR_3)
{
 struct myri10ge_priv *VAR_4 = FUNC_2(VAR_2);
 int VAR_5 = 0;

 if (VAR_3)
  VAR_4->csum_flag = VAR_1;
 else {
  u32 VAR_6 = FUNC_0(VAR_2);
  VAR_5 = FUNC_1(VAR_2, (VAR_6 & ~VAR_0));
  VAR_4->csum_flag = 0;

 }
 return VAR_5;
}
