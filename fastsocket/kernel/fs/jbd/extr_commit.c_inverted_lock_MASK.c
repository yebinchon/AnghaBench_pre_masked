
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct buffer_head {int dummy; } ;
struct TYPE_3__ {int j_list_lock; } ;
typedef TYPE_1__ journal_t ;


 int FUNC_0 (struct buffer_head*) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(journal_t *VAR_0, struct buffer_head *VAR_1)
{
 if (!FUNC_0(VAR_1)) {
  FUNC_2(&VAR_0->j_list_lock);
  FUNC_1();
  return 0;
 }
 return 1;
}
