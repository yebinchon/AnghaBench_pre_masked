
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct clist {scalar_t__ c_cc; scalar_t__ c_cs; scalar_t__ c_cf; scalar_t__ c_cl; scalar_t__ c_cn; int c_ce; int c_cq; } ;


 int FUNC_0 (int const*,int,int) ;
 int FUNC_1 (int,int) ;
 scalar_t__ FUNC_2 (struct clist*,int,int) ;
 int FUNC_3 (int,int,int) ;
 int FUNC_4 (char*) ;

int
FUNC_5(const u_char *VAR_0, int VAR_1, struct clist *VAR_2)
{
 int VAR_3;
 const u_char *VAR_4 = VAR_0;

 if (VAR_1 <= 0)
  return 0;


 if (VAR_2->c_cc == 0) {
  if (!VAR_2->c_cs) {



   if(FUNC_2(VAR_2, 1024, 1))
    goto out;
  }
  VAR_2->c_cf = VAR_2->c_cl = VAR_2->c_cs;
 }

 if (VAR_2->c_cc == VAR_2->c_cn)
  goto out;


 while (VAR_1 > 0 && VAR_2->c_cc < VAR_2->c_cn) {
  VAR_3 = VAR_2->c_ce - VAR_2->c_cl;
  if (VAR_2->c_cf > VAR_2->c_cl)
   VAR_3 = VAR_2->c_cf - VAR_2->c_cl;
  if (VAR_3 > VAR_1)
   VAR_3 = VAR_1;
  FUNC_0(VAR_4, VAR_2->c_cl, VAR_3);
  if (VAR_2->c_cq) {



   FUNC_1(VAR_2->c_cl - VAR_2->c_cs + VAR_2->c_cq, VAR_3);

  }
  VAR_4 += VAR_3;
  VAR_1 -= VAR_3;
  VAR_2->c_cc += VAR_3;
  VAR_2->c_cl += VAR_3;
  if (VAR_2->c_cl == VAR_2->c_ce)
   VAR_2->c_cl = VAR_2->c_cs;
 }
out:
 return VAR_1;
}
