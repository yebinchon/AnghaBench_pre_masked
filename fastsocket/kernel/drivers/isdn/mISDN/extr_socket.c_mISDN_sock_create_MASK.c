
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int dummy; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct net*,struct socket*,int) ;
 int FUNC_1 (struct net*,struct socket*,int) ;

__attribute__((used)) static int
FUNC_2(struct net *VAR_1, struct socket *VAR_2, int VAR_3, int VAR_4)
{
 int VAR_5 = -VAR_0;

 switch (VAR_3) {
 case 140:
  VAR_5 = FUNC_0(VAR_1, VAR_2, VAR_3);
  break;
 case 128:
 case 130:
 case 129:
 case 131:
 case 132:
 case 133:
 case 135:
 case 139:
 case 134:
 case 136:
 case 138:
 case 137:
  VAR_5 = FUNC_1(VAR_1, VAR_2, VAR_3);
  break;
 default:
  return VAR_5;
 }

 return VAR_5;
}
