
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct net_device {int dummy; } ;
struct ethoc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ethoc*,int ,int) ;
 struct ethoc* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_2, void *VAR_3)
{
 struct ethoc *VAR_4 = FUNC_1(VAR_2);
 u8 *VAR_5 = (u8 *)VAR_3;

 FUNC_0(VAR_4, VAR_0, (VAR_5[2] << 24) | (VAR_5[3] << 16) |
         (VAR_5[4] << 8) | (VAR_5[5] << 0));
 FUNC_0(VAR_4, VAR_1, (VAR_5[0] << 8) | (VAR_5[1] << 0));

 return 0;
}
