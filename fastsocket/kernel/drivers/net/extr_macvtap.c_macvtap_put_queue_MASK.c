
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct macvtap_queue {int sk; int vlan; } ;
struct macvlan_dev {int tap; } ;


 int FUNC_0 (int ,int *) ;
 struct macvlan_dev* FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 () ;

__attribute__((used)) static void FUNC_6(struct macvtap_queue *VAR_0)
{
 struct macvlan_dev *VAR_1;

 FUNC_2();
 VAR_1 = FUNC_1(VAR_0->vlan);
 if (VAR_1) {
  FUNC_0(VAR_1->tap, ((void*)0));
  FUNC_0(VAR_0->vlan, ((void*)0));
  FUNC_4(&VAR_0->sk);
 }

 FUNC_3();

 FUNC_5();
 FUNC_4(&VAR_0->sk);
}
