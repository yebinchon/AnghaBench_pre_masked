
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aio_timeout {int p; scalar_t__ timed_out; int timer; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,unsigned long) ;
 int VAR_1 ;

__attribute__((used)) static inline void FUNC_1(struct aio_timeout *VAR_2)
{
 FUNC_0(&VAR_2->timer, VAR_1, (unsigned long) VAR_2);
 VAR_2->timed_out = 0;
 VAR_2->p = VAR_0;
}
