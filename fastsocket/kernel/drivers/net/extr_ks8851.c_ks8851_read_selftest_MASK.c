
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ks8851_net {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int FUNC_0 (struct ks8851_net*,int ) ;
 int FUNC_1 (struct ks8851_net*,char*) ;
 int FUNC_2 (struct ks8851_net*,char*) ;

__attribute__((used)) static int FUNC_3(struct ks8851_net *VAR_5)
{
 unsigned VAR_6 = VAR_3 | VAR_1;
 int VAR_7 = 0;
 unsigned VAR_8;

 VAR_8 = FUNC_0(VAR_5, VAR_0);

 if ((VAR_8 & VAR_6) != VAR_6) {
  FUNC_2(VAR_5, "Memory selftest not finished\n");
  return 0;
 }

 if (VAR_8 & VAR_4) {
  FUNC_1(VAR_5, "TX memory selftest fail\n");
  VAR_7 |= 1;
 }

 if (VAR_8 & VAR_2) {
  FUNC_1(VAR_5, "RX memory selftest fail\n");
  VAR_7 |= 2;
 }

 return 0;
}
