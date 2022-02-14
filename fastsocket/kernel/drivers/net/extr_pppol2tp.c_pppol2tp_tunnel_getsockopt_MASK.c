
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct pppol2tp_tunnel {int debug; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int FUNC_0 (int,int ,int ,char*,int ,int) ;

__attribute__((used)) static int FUNC_1(struct sock *VAR_3,
          struct pppol2tp_tunnel *VAR_4,
          int VAR_5, int *VAR_6)
{
 int VAR_7 = 0;

 switch (VAR_5) {
 case 128:
  *VAR_6 = VAR_4->debug;
  FUNC_0(VAR_4->debug, VAR_2, VAR_1,
         "%s: get debug=%x\n", VAR_4->name, VAR_4->debug);
  break;

 default:
  VAR_7 = -VAR_0;
  break;
 }

 return VAR_7;
}
