
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mv643xx_eth_private {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (struct mv643xx_eth_private*,int ) ;

__attribute__((used)) static void FUNC_1(struct mv643xx_eth_private *VAR_2, unsigned char *VAR_3)
{
 unsigned int VAR_4 = FUNC_0(VAR_2, VAR_0);
 unsigned int VAR_5 = FUNC_0(VAR_2, VAR_1);

 VAR_3[0] = (VAR_4 >> 24) & 0xff;
 VAR_3[1] = (VAR_4 >> 16) & 0xff;
 VAR_3[2] = (VAR_4 >> 8) & 0xff;
 VAR_3[3] = VAR_4 & 0xff;
 VAR_3[4] = (VAR_5 >> 8) & 0xff;
 VAR_3[5] = VAR_5 & 0xff;
}
