
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;


 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*,int,int) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_0, int VAR_1, int VAR_2)
{
 u32 VAR_3;
 int VAR_4;
 u32 VAR_5 = 0;


 FUNC_1 (VAR_0, 0xffffffff, 32);


 VAR_3 = (0x06 << 10) | (VAR_1 << 5) | VAR_2;
 FUNC_1 (VAR_0, VAR_3, 14);

 if (FUNC_0 (VAR_0))
  return 0;

 for (VAR_4 = 0; VAR_4 < 16; VAR_4++) {
  VAR_5 <<= 1;
  VAR_5 |= FUNC_0 (VAR_0);
 }

 FUNC_0 (VAR_0);
 return VAR_5;
}
