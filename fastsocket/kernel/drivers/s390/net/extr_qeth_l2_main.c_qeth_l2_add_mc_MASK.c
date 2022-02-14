
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qeth_mc_mac {int is_vmac; int list; int mc_addrlen; int mc_addr; } ;
struct qeth_card {int mc_list; } ;
typedef int __u8 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct qeth_mc_mac*) ;
 struct qeth_mc_mac* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int ,int *,int ) ;
 int FUNC_4 (struct qeth_card*,int *,int ,int *) ;
 int FUNC_5 (struct qeth_card*,int *) ;

__attribute__((used)) static void FUNC_6(struct qeth_card *VAR_3, __u8 *VAR_4, int VAR_5)
{
 struct qeth_mc_mac *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_1(sizeof(struct qeth_mc_mac), VAR_0);

 if (!VAR_6)
  return;

 FUNC_3(VAR_6->mc_addr, VAR_4, VAR_2);
 VAR_6->mc_addrlen = VAR_2;
 VAR_6->is_vmac = VAR_5;

 if (VAR_5) {
  VAR_7 = FUNC_4(VAR_3, VAR_4, VAR_1,
     ((void*)0));
 } else {
  VAR_7 = FUNC_5(VAR_3, VAR_4);
 }

 if (!VAR_7)
  FUNC_2(&VAR_6->list, &VAR_3->mc_list);
 else
  FUNC_0(VAR_6);
}
