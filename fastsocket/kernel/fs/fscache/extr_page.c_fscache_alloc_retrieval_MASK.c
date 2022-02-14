
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned long flags; int fast_work; } ;
struct fscache_retrieval {TYPE_1__ op; int to_do; int start_time; void* context; int end_io_func; struct address_space* mapping; } ;
struct fscache_cookie {int n_active; } ;
struct address_space {int dummy; } ;
typedef int fscache_rw_complete_t ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int VAR_4 ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (TYPE_1__*,char*) ;
 int FUNC_5 (int *) ;
 int VAR_7 ;
 struct fscache_retrieval* FUNC_6 (int,int ) ;

__attribute__((used)) static struct fscache_retrieval *FUNC_7(
 struct fscache_cookie *VAR_8,
 struct address_space *VAR_9,
 fscache_rw_complete_t VAR_10,
 void *VAR_11)
{
 struct fscache_retrieval *VAR_12;


 VAR_12 = FUNC_6(sizeof(*VAR_12), VAR_3);
 if (!VAR_12) {
  FUNC_5(&VAR_4);
  return ((void*)0);
 }

 FUNC_3(&VAR_12->op, VAR_5);
 FUNC_2(&VAR_8->n_active);
 VAR_12->op.flags = VAR_0 |
  (1UL << VAR_2) |
  (1UL << VAR_1);
 VAR_12->mapping = VAR_9;
 VAR_12->end_io_func = VAR_10;
 VAR_12->context = VAR_11;
 VAR_12->start_time = VAR_7;
 FUNC_1(&VAR_12->op.fast_work, VAR_6);
 FUNC_0(&VAR_12->to_do);
 FUNC_4(&VAR_12->op, "Retr");
 return VAR_12;
}
