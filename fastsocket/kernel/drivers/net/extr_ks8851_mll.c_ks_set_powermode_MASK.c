
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ks_net {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (struct ks_net*,char*,unsigned int) ;
 unsigned int FUNC_1 (struct ks_net*,int ) ;
 int FUNC_2 (struct ks_net*,int ,unsigned int) ;
 scalar_t__ FUNC_3 (struct ks_net*) ;

__attribute__((used)) static void FUNC_4(struct ks_net *VAR_3, unsigned VAR_4)
{
 unsigned VAR_5;

 if (FUNC_3(VAR_3))
  FUNC_0(VAR_3, "setting power mode %d\n", VAR_4);

 FUNC_1(VAR_3, VAR_0);
 VAR_5 = FUNC_1(VAR_3, VAR_1);
 VAR_5 &= ~VAR_2;
 VAR_5 |= VAR_4;

 FUNC_2(VAR_3, VAR_1, VAR_5);
}
