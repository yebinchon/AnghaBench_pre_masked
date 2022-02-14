
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct clist {int * c_cq; int * c_cs; int c_cn; } ;


 int FUNC_0 (int *,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;

void
FUNC_2(struct clist *VAR_1)
{
 if(VAR_1->c_cs)
  FUNC_0(VAR_1->c_cs, VAR_1->c_cn, VAR_0);
 if(VAR_1->c_cq)
  FUNC_0(VAR_1->c_cq, FUNC_1(VAR_1->c_cn), VAR_0);
 VAR_1->c_cs = VAR_1->c_cq = (u_char *)0;
}
