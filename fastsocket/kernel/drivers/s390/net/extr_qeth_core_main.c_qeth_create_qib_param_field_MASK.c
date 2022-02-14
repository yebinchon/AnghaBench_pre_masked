
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qeth_card {int dummy; } ;


 unsigned int FUNC_0 (struct qeth_card*) ;
 unsigned int FUNC_1 (struct qeth_card*) ;
 unsigned int FUNC_2 (struct qeth_card*) ;
 char* VAR_0 ;

__attribute__((used)) static void FUNC_3(struct qeth_card *VAR_1,
  char *VAR_2)
{

 VAR_2[0] = VAR_0['P'];
 VAR_2[1] = VAR_0['C'];
 VAR_2[2] = VAR_0['I'];
 VAR_2[3] = VAR_0['T'];
 *((unsigned int *) (&VAR_2[4])) = FUNC_0(VAR_1);
 *((unsigned int *) (&VAR_2[8])) = FUNC_1(VAR_1);
 *((unsigned int *) (&VAR_2[12])) = FUNC_2(VAR_1);
}
