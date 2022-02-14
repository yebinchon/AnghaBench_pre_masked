
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_2__ {int A; int B; } ;
struct layer2 {int sapi; int tei; TYPE_1__ addr; int flag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int *) ;

__attribute__((used)) static int
FUNC_1(struct layer2 *VAR_3, u_char *VAR_4, int VAR_5)
{
 u_char *VAR_6 = VAR_4;
 int VAR_7 = VAR_5;

 if (FUNC_0(VAR_0, &VAR_3->flag)) {
  if (FUNC_0(VAR_1, &VAR_3->flag))
   VAR_7 = !VAR_7;
  *VAR_6++ = (VAR_3->sapi << 2) | (VAR_7 ? 2 : 0);
  *VAR_6++ = (VAR_3->tei << 1) | 1;
  return 2;
 } else {
  if (FUNC_0(VAR_2, &VAR_3->flag))
   VAR_7 = !VAR_7;
  if (VAR_7)
   *VAR_6++ = VAR_3->addr.B;
  else
   *VAR_6++ = VAR_3->addr.A;
  return 1;
 }
}
