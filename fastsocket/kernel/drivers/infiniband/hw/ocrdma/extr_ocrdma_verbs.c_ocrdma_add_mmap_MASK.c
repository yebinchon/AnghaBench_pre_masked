
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct ocrdma_ucontext {int mm_list_lock; int mm_head; } ;
struct TYPE_2__ {unsigned long len; int phy_addr; } ;
struct ocrdma_mm {int entry; TYPE_1__ key; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 struct ocrdma_mm* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct ocrdma_ucontext *VAR_2, u64 VAR_3,
      unsigned long VAR_4)
{
 struct ocrdma_mm *VAR_5;

 VAR_5 = FUNC_1(sizeof(*VAR_5), VAR_1);
 if (VAR_5 == ((void*)0))
  return -VAR_0;
 VAR_5->key.phy_addr = VAR_3;
 VAR_5->key.len = VAR_4;
 FUNC_0(&VAR_5->entry);

 FUNC_3(&VAR_2->mm_list_lock);
 FUNC_2(&VAR_5->entry, &VAR_2->mm_head);
 FUNC_4(&VAR_2->mm_list_lock);
 return 0;
}
