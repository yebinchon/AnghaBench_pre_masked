
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct blizzard_request {int flags; int entry; } ;
struct TYPE_2__ {int req_lock; int req_sema; int free_req_list; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static inline void FUNC_5(struct blizzard_request *VAR_2)
{
 unsigned long VAR_3;

 FUNC_2(&VAR_1.req_lock, VAR_3);

 FUNC_1(&VAR_2->entry);
 FUNC_0(&VAR_2->entry, &VAR_1.free_req_list);
 if (!(VAR_2->flags & VAR_0))
  FUNC_4(&VAR_1.req_sema);

 FUNC_3(&VAR_1.req_lock, VAR_3);
}
