
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int name; } ;
struct lance_regs {int rdp; int rap; } ;
struct lance_private {struct lance_regs* ll; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct lance_private*) ;
 int FUNC_1 (struct net_device*) ;
 int VAR_4 ;
 int FUNC_2 (struct lance_private*) ;
 struct lance_private* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (int ,int ,int ,int ,struct net_device*) ;

__attribute__((used)) static int FUNC_6 (struct net_device *VAR_5)
{
 struct lance_private *VAR_6 = FUNC_3(VAR_5);
 volatile struct lance_regs *VAR_7 = VAR_6->ll;
 int VAR_8;


 VAR_7->rap = VAR_3;
 VAR_7->rdp = VAR_2;


 VAR_8 = FUNC_5(VAR_1, VAR_4, VAR_0,
     VAR_5->name, VAR_5);
 if (VAR_8) return VAR_8;

 FUNC_2 (VAR_6);
 FUNC_1 (VAR_5);

 FUNC_4(VAR_5);

 return FUNC_0 (VAR_6);
}
