
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clist {int * c_cl; int c_cf; scalar_t__ c_cc; } ;
struct tty {int t_state; struct clist t_rawq; int t_lflag; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int FUNC_2 (struct tty*) ;
 int FUNC_3 (struct clist*) ;
 int FUNC_4 (int,struct tty*) ;

__attribute__((used)) static void
FUNC_5(struct tty *VAR_2)
{
 struct clist VAR_3;
 int VAR_4;

 FUNC_2(VAR_2);

 FUNC_0(VAR_2->t_lflag, VAR_0);
 FUNC_1(VAR_2->t_state, VAR_1);
 VAR_3 = VAR_2->t_rawq;
 VAR_2->t_rawq.c_cc = 0;
 VAR_2->t_rawq.c_cf = *(VAR_2->t_rawq.c_cl = ((void*)0));
 while ((VAR_4 = FUNC_3(&VAR_3)) >= 0)
  FUNC_4(VAR_4, VAR_2);
 FUNC_0(VAR_2->t_state, VAR_1);
}
