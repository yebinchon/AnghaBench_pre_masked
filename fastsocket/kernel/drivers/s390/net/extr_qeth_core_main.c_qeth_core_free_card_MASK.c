
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qeth_card {int qeth_service_level; struct qeth_card* ip_tbd_list; scalar_t__ dev; int write; int read; } ;


 int FUNC_0 (int ,int,struct qeth_card**,int) ;
 int FUNC_1 (int ,int,char*) ;
 int VAR_0 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct qeth_card*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct qeth_card*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct qeth_card *VAR_1)
{

 FUNC_1(VAR_0, 2, "freecrd");
 FUNC_0(VAR_0, 2, &VAR_1, sizeof(void *));
 FUNC_4(&VAR_1->read);
 FUNC_4(&VAR_1->write);
 if (VAR_1->dev)
  FUNC_2(VAR_1->dev);
 FUNC_3(VAR_1->ip_tbd_list);
 FUNC_5(VAR_1);
 FUNC_6(&VAR_1->qeth_service_level);
 FUNC_3(VAR_1);
}
