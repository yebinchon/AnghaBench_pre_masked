
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int trans_start; } ;
struct lance_regs {int rdp; int rap; } ;
struct lance_private {struct lance_regs* ll; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct lance_private*) ;
 int VAR_2 ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct lance_private*) ;
 struct lance_private* FUNC_3 (struct net_device*) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static inline int FUNC_5(struct net_device *VAR_3)
{
 struct lance_private *VAR_4 = FUNC_3(VAR_3);
 volatile struct lance_regs *VAR_5 = VAR_4->ll;
 int VAR_6;


 FUNC_4(&VAR_5->rap, VAR_1);
 FUNC_4(&VAR_5->rdp, VAR_0);

 FUNC_1(VAR_3);
 FUNC_2(VAR_4);
 VAR_3->trans_start = VAR_2;
 VAR_6 = FUNC_0(VAR_4);
 return VAR_6;
}
