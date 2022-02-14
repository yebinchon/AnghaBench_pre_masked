
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct qib_mmap_info {scalar_t__ offset; scalar_t__ size; int ref; void* obj; struct ib_ucontext* context; int pending_mmaps; } ;
struct qib_ibdev {scalar_t__ mmap_offset; int mmap_offset_lock; } ;
struct ib_ucontext {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 struct qib_mmap_info* FUNC_2 (int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

struct qib_mmap_info *FUNC_6(struct qib_ibdev *VAR_2,
        u32 VAR_3,
        struct ib_ucontext *VAR_4,
        void *VAR_5) {
 struct qib_mmap_info *VAR_6;

 VAR_6 = FUNC_2(sizeof *VAR_6, VAR_0);
 if (!VAR_6)
  goto bail;

 VAR_3 = FUNC_1(VAR_3);

 FUNC_4(&VAR_2->mmap_offset_lock);
 if (VAR_2->mmap_offset == 0)
  VAR_2->mmap_offset = VAR_1;
 VAR_6->offset = VAR_2->mmap_offset;
 VAR_2->mmap_offset += VAR_3;
 FUNC_5(&VAR_2->mmap_offset_lock);

 FUNC_0(&VAR_6->pending_mmaps);
 VAR_6->size = VAR_3;
 VAR_6->context = VAR_4;
 VAR_6->obj = VAR_5;
 FUNC_3(&VAR_6->ref);

bail:
 return VAR_6;
}
