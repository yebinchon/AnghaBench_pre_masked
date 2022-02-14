
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct binder_thread {int looper; } ;
struct binder_proc {int todo; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(struct binder_proc *VAR_1,
    struct binder_thread *VAR_2)
{
 return !FUNC_0(&VAR_1->todo) ||
  (VAR_2->looper & VAR_0);
}
