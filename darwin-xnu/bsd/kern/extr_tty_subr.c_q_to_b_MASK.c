
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct clist {scalar_t__ c_cc; int c_cl; int c_cf; int c_ce; scalar_t__ c_cs; } ;


 int FUNC_0 (int,int *,int) ;

int
FUNC_1(struct clist *VAR_0, u_char *VAR_1, int VAR_2)
{
 int VAR_3;
 u_char *VAR_4 = VAR_1;


 while (VAR_2 > 0 && VAR_0->c_cc > 0) {
  VAR_3 = VAR_0->c_cl - VAR_0->c_cf;
  if (VAR_0->c_cf >= VAR_0->c_cl)
   VAR_3 = VAR_0->c_ce - VAR_0->c_cf;
  if (VAR_3 > VAR_2)
   VAR_3 = VAR_2;
  FUNC_0(VAR_0->c_cf, VAR_4, VAR_3);
  VAR_2 -= VAR_3;
  VAR_4 += VAR_3;
  VAR_0->c_cc -= VAR_3;
  VAR_0->c_cf += VAR_3;
  if (VAR_0->c_cf == VAR_0->c_ce)
   VAR_0->c_cf = VAR_0->c_cs;
 }
 if (VAR_0->c_cc == 0)
  VAR_0->c_cf = VAR_0->c_cl = (u_char *)0;
 return VAR_4 - VAR_1;
}
