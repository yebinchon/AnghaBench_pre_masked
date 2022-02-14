
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct binder_thread {scalar_t__ return_error; int looper; int todo; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(struct binder_thread *VAR_2)
{
 return !FUNC_0(&VAR_2->todo) || VAR_2->return_error != VAR_1 ||
  (VAR_2->looper & VAR_0);
}
