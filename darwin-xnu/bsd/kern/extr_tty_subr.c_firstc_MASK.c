
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct clist {scalar_t__ c_cc; int* c_cf; int* c_cs; scalar_t__* c_cq; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__*,int) ;

u_char *
FUNC_1(struct clist *VAR_2, int *VAR_3)
{
 u_char *VAR_4;

 VAR_1 = VAR_2->c_cc;
 if (VAR_1 == 0)
  return ((void*)0);
 VAR_4 = VAR_2->c_cf;
 *VAR_3 = *VAR_4 & 0xff;
 if(VAR_2->c_cq) {




  if (*(VAR_4 - VAR_2->c_cs + VAR_2->c_cq))
   *VAR_3 |= VAR_0;

 }
 return VAR_2->c_cf;
}
