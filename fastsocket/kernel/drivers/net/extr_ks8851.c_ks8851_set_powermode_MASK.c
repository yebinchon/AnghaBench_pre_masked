
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ks8851_net {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_0 (struct ks8851_net*,int ) ;
 int FUNC_1 (struct ks8851_net*,int ,unsigned int) ;
 int FUNC_2 (struct ks8851_net*,char*,unsigned int) ;
 scalar_t__ FUNC_3 (struct ks8851_net*) ;

__attribute__((used)) static void FUNC_4(struct ks8851_net *VAR_2, unsigned VAR_3)
{
 unsigned VAR_4;

 if (FUNC_3(VAR_2))
  FUNC_2(VAR_2, "setting power mode %d\n", VAR_3);

 VAR_4 = FUNC_0(VAR_2, VAR_0);
 VAR_4 &= ~VAR_1;
 VAR_4 |= VAR_3;

 FUNC_1(VAR_2, VAR_0, VAR_4);
}
