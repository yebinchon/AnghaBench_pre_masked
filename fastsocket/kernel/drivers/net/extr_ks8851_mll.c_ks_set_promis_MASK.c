
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ks_net {int promiscuous; scalar_t__ enabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ks_net*,int ) ;
 int FUNC_1 (struct ks_net*) ;
 int FUNC_2 (struct ks_net*) ;
 int FUNC_3 (struct ks_net*,int ,int) ;

__attribute__((used)) static void FUNC_4(struct ks_net *VAR_5, u16 VAR_6)
{
 u16 VAR_7;
 VAR_5->promiscuous = VAR_6;
 FUNC_2(VAR_5);
 VAR_7 = FUNC_0(VAR_5, VAR_0);

 VAR_7 &= ~VAR_1;
 if (VAR_6)

  VAR_7 |= VAR_2 | VAR_3;
 else

  VAR_7 |= VAR_4;

 FUNC_3(VAR_5, VAR_0, VAR_7);

 if (VAR_5->enabled)
  FUNC_1(VAR_5);

}
