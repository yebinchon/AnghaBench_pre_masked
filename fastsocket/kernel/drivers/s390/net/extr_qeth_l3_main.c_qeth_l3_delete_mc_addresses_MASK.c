
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qeth_ipaddr {int type; } ;
struct qeth_card {int ip_lock; } ;


 int FUNC_0 (int ,int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct qeth_card*,struct qeth_ipaddr*,int ) ;
 int FUNC_2 (struct qeth_ipaddr*) ;
 struct qeth_ipaddr* FUNC_3 (int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct qeth_card *VAR_3)
{
 struct qeth_ipaddr *VAR_4;
 unsigned long VAR_5;

 FUNC_0(VAR_2, 4, "delmc");
 VAR_4 = FUNC_3(VAR_1);
 if (!VAR_4) {
  FUNC_0(VAR_2, 2, "dmcnomem");
  return;
 }
 VAR_4->type = VAR_0;
 FUNC_4(&VAR_3->ip_lock, VAR_5);
 if (!FUNC_1(VAR_3, VAR_4, 0))
  FUNC_2(VAR_4);
 FUNC_5(&VAR_3->ip_lock, VAR_5);
}
