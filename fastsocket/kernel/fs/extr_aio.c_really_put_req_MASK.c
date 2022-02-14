
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kioctx {int wait; scalar_t__ dead; int reqs_active; int ctx_lock; } ;
struct kiocb {int * ki_iovec; int ki_inline_vec; int (* ki_dtor ) (struct kiocb*) ;int * ki_eventfd; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int FUNC_3 (int ,struct kiocb*) ;
 int FUNC_4 (struct kiocb*) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static inline void FUNC_7(struct kioctx *VAR_1, struct kiocb *VAR_2)
{
 FUNC_0(&VAR_1->ctx_lock);

 if (VAR_2->ki_eventfd != ((void*)0))
  FUNC_1(VAR_2->ki_eventfd);
 if (VAR_2->ki_dtor)
  VAR_2->ki_dtor(VAR_2);
 if (VAR_2->ki_iovec != &VAR_2->ki_inline_vec)
  FUNC_2(VAR_2->ki_iovec);
 FUNC_3(VAR_0, VAR_2);
 VAR_1->reqs_active--;

 if (FUNC_5(!VAR_1->reqs_active && VAR_1->dead))
  FUNC_6(&VAR_1->wait);
}
