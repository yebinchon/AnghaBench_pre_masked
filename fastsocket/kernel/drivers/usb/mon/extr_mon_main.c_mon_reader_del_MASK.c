
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mon_reader {int r_link; } ;
struct mon_bus {scalar_t__ nreaders; int ref; int lock; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (struct mon_bus*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

void FUNC_5(struct mon_bus *VAR_1, struct mon_reader *VAR_2)
{
 unsigned long VAR_3;

 FUNC_3(&VAR_1->lock, VAR_3);
 FUNC_1(&VAR_2->r_link);
 --VAR_1->nreaders;
 if (VAR_1->nreaders == 0)
  FUNC_2(VAR_1);
 FUNC_4(&VAR_1->lock, VAR_3);

 FUNC_0(&VAR_1->ref, VAR_0);
}
