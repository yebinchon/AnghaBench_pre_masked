
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lcs_card {int read; int write; } ;


 int FUNC_0 (int,int ,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_3(struct lcs_card *VAR_1)
{
 int VAR_2;

 FUNC_0(2, VAR_0, "chstart");

 VAR_2 = FUNC_1(&VAR_1->read);
 if (VAR_2)
  return VAR_2;

 VAR_2 = FUNC_1(&VAR_1->write);
 if (VAR_2)
  FUNC_2(&VAR_1->read);
 return VAR_2;
}
