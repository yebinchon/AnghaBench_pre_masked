
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct b44 {int dummy; } ;


 int FUNC_0 (struct b44*,int,int,int*) ;
 struct b44* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_0, int VAR_1, int VAR_2)
{
 u32 VAR_3;
 struct b44 *VAR_4 = FUNC_1(VAR_0);
 int VAR_5 = FUNC_0(VAR_4, VAR_1, VAR_2, &VAR_3);
 if (VAR_5)
  return 0xffffffff;
 return VAR_3;
}
