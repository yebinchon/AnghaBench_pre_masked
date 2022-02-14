
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct clist {scalar_t__ c_cc; int* c_cl; int* c_cs; int* c_ce; int* c_cf; scalar_t__* c_cq; } ;


 unsigned int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__*,int) ;

int
FUNC_1(struct clist *VAR_1)
{
 unsigned int VAR_2 = -1;

 if (VAR_1->c_cc == 0)
  goto out;

 if (VAR_1->c_cl == VAR_1->c_cs)
  VAR_1->c_cl = VAR_1->c_ce - 1;
 else
  --VAR_1->c_cl;
 VAR_1->c_cc--;

 VAR_2 = *VAR_1->c_cl & 0xff;
 if (VAR_1->c_cq) {




  if (*(VAR_1->c_cf - VAR_1->c_cs + VAR_1->c_cq))
   VAR_2 |= VAR_0;

 }
 if (VAR_1->c_cc == 0)
  VAR_1->c_cf = VAR_1->c_cl = (u_char *)0;
out:
 return VAR_2;
}
