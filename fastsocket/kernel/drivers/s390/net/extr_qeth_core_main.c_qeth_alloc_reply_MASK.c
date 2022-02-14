
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qeth_reply {struct qeth_card* card; int received; int refcnt; } ;
struct qeth_card {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 struct qeth_reply* FUNC_1 (int,int ) ;

__attribute__((used)) static struct qeth_reply *FUNC_2(struct qeth_card *VAR_1)
{
 struct qeth_reply *VAR_2;

 VAR_2 = FUNC_1(sizeof(struct qeth_reply), VAR_0);
 if (VAR_2) {
  FUNC_0(&VAR_2->refcnt, 1);
  FUNC_0(&VAR_2->received, 0);
  VAR_2->card = VAR_1;
 };
 return VAR_2;
}
