
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qeth_card {int dummy; } ;


 int FUNC_0 (int ,int,struct qeth_card**,int) ;
 int FUNC_1 (int ,int,char*) ;
 int VAR_0 ;
 int FUNC_2 (struct qeth_card*) ;
 int FUNC_3 (struct qeth_card*) ;

__attribute__((used)) static int FUNC_4(struct qeth_card *VAR_1, int VAR_2)
{
 int VAR_3 = 0;

 FUNC_1(VAR_0, 3, "clhacrd");
 FUNC_0(VAR_0, 3, &VAR_1, sizeof(void *));

 if (VAR_2)
  VAR_3 = FUNC_3(VAR_1);
 if (VAR_3)
  return VAR_3;
 return FUNC_2(VAR_1);
}
