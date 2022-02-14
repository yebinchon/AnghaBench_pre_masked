
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct Layer2 {int sap; int tei; int flag; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int *) ;

__attribute__((used)) static int
FUNC_1(struct Layer2 *VAR_2, u_char * VAR_3, int VAR_4)
{
 u_char *VAR_5 = VAR_3;
 int VAR_6 = VAR_4;

 if (FUNC_0(VAR_0, &VAR_2->flag)) {
  *VAR_5++ = (VAR_2->sap << 2) | (VAR_4 ? 2 : 0);
  *VAR_5++ = (VAR_2->tei << 1) | 1;
  return (2);
 } else {
  if (FUNC_0(VAR_1, &VAR_2->flag))
   VAR_6 = !VAR_6;
  if (VAR_6)
   *VAR_5++ = 1;
  else
   *VAR_5++ = 3;
  return (1);
 }
}
