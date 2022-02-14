
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_2, u16 VAR_3)
{
 int VAR_4 = VAR_0;
 int VAR_5 = FUNC_0(VAR_3) & VAR_1;

 while (VAR_5 && VAR_4 > 0) {
  VAR_4--;
  FUNC_1(1);
  VAR_5 = FUNC_0(VAR_3) & VAR_1;
 }
 return VAR_5;
}
