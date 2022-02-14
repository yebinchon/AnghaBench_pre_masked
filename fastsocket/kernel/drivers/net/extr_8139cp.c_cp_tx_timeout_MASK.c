
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int name; } ;
struct cp_private {int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct cp_private*) ;
 int FUNC_1 (struct cp_private*) ;
 int FUNC_2 (struct cp_private*) ;
 int FUNC_3 (struct cp_private*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 struct cp_private* FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (char*,int ,int ,int ,int ,int ) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_11(struct net_device *VAR_4)
{
 struct cp_private *VAR_5 = FUNC_6(VAR_4);
 unsigned long VAR_6;
 int VAR_7;

 FUNC_8("%s: Transmit timeout, status %2x %4x %4x %4x\n",
        VAR_4->name, FUNC_5(VAR_0), FUNC_4(VAR_1),
        FUNC_4(VAR_3), FUNC_4(VAR_2));

 FUNC_9(&VAR_5->lock, VAR_6);

 FUNC_3(VAR_5);
 FUNC_0(VAR_5);
 VAR_7 = FUNC_1(VAR_5);
 FUNC_2(VAR_5);

 FUNC_7(VAR_4);

 FUNC_10(&VAR_5->lock, VAR_6);

 return;
}
