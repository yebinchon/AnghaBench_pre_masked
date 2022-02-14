
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ks_net {int enabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ks_net*,int ) ;
 int FUNC_1 (struct ks_net*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct ks_net *VAR_4)
{
 u16 VAR_5;

 VAR_5 = FUNC_0(VAR_4, VAR_1);


 VAR_5 &= ~VAR_3;
 FUNC_1(VAR_4, VAR_1, VAR_5);


 VAR_5 = FUNC_0(VAR_4, VAR_0);
 VAR_5 &= ~VAR_2 ;
 FUNC_1(VAR_4, VAR_0, VAR_5);

 VAR_4->enabled = 0;

}
