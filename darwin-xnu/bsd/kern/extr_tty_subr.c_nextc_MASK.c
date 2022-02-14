
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct clist {int* c_cf; scalar_t__ c_cc; int* c_ce; int* c_cs; scalar_t__* c_cq; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__*,int) ;

u_char *
FUNC_1(struct clist *VAR_2, u_char *VAR_3, int *VAR_4)
{
 if (VAR_2->c_cf == VAR_3) {



  VAR_1 = VAR_2->c_cc;
 }
 if (VAR_1 == 0 || VAR_3 == ((void*)0))
  return ((void*)0);
 if (--VAR_1 == 0)
  return ((void*)0);
 if (++VAR_3 == VAR_2->c_ce)
  VAR_3 = VAR_2->c_cs;
 *VAR_4 = *VAR_3 & 0xff;
 if (VAR_2->c_cq) {




  if (*(VAR_2->c_cf - VAR_2->c_cs + VAR_2->c_cq))
   *VAR_4 |= VAR_0;

 }
 return VAR_3;
}
