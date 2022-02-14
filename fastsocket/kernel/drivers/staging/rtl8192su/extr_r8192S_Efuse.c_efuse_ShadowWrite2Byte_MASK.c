
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct r8192_priv {size_t** EfuseMap; } ;
struct net_device {int dummy; } ;


 size_t VAR_0 ;
 struct r8192_priv* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void
FUNC_1(struct net_device* VAR_1, u16 VAR_2, u16 VAR_3)
{
 struct r8192_priv *VAR_4 = FUNC_0(VAR_1);

 VAR_4->EfuseMap[VAR_0][VAR_2] = VAR_3&0x00FF;
 VAR_4->EfuseMap[VAR_0][VAR_2+1] = VAR_3>>8;

}
