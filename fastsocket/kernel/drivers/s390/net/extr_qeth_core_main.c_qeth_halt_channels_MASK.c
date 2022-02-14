
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qeth_card {int data; int write; int read; } ;


 int FUNC_0 (int ,int,char*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct qeth_card *VAR_1)
{
 int VAR_2 = 0, VAR_3 = 0, VAR_4 = 0;

 FUNC_0(VAR_0, 3, "haltchs");
 VAR_2 = FUNC_1(&VAR_1->read);
 VAR_3 = FUNC_1(&VAR_1->write);
 VAR_4 = FUNC_1(&VAR_1->data);
 if (VAR_2)
  return VAR_2;
 if (VAR_3)
  return VAR_3;
 return VAR_4;
}
