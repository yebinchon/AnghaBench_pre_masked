
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct sky2_port {int dummy; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 struct sky2_port* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct sky2_port*,int ) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_4, u32 VAR_5)
{
 struct sky2_port *VAR_6 = FUNC_1(VAR_4);
 unsigned int VAR_7;

 if (VAR_5 == 0)
  VAR_5 = VAR_3;

 for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
  FUNC_2(VAR_6, VAR_2);
  if (FUNC_0(500))
   break;
  FUNC_2(VAR_6, VAR_1);
  if (FUNC_0(500))
   break;
 }
 FUNC_2(VAR_6, VAR_0);

 return 0;
}
