
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long u64 ;
typedef unsigned int u32 ;
struct ipz_queue {unsigned long qe_size; } ;
struct ehca_queue_map {unsigned int tail; unsigned int next_wqe_idx; int entries; int left_to_poll; TYPE_1__* map; } ;
struct TYPE_2__ {scalar_t__ cqe_req; } ;


 int VAR_0 ;
 void* FUNC_0 (unsigned long) ;
 int FUNC_1 (char*,unsigned long,void*) ;
 scalar_t__ FUNC_2 (struct ipz_queue*,unsigned long,unsigned long*) ;
 unsigned int FUNC_3 (unsigned int,int ) ;

__attribute__((used)) static int FUNC_4(u64 VAR_1, struct ipz_queue *VAR_2,
     struct ehca_queue_map *VAR_3)
{
 void *VAR_4;
 u64 VAR_5;
 u32 VAR_6;
 unsigned int VAR_7;


 VAR_1 = VAR_1 & (~(1UL << 63));

 VAR_4 = FUNC_0(VAR_1);

 if (FUNC_2(VAR_2, VAR_1, &VAR_5)) {
  FUNC_1("Invalid offset for calculating left cqes "
    "wqe_p=%#llx wqe_v=%p\n", VAR_1, VAR_4);
  return -VAR_0;
 }

 VAR_7 = FUNC_3(VAR_3->tail, VAR_3->entries);
 VAR_6 = VAR_5 / VAR_2->qe_size;


 while (VAR_7 != VAR_6) {
  if (VAR_3->map[VAR_7].cqe_req)
   VAR_3->left_to_poll++;
  VAR_7 = FUNC_3(VAR_7, VAR_3->entries);
 }

 VAR_3->next_wqe_idx = VAR_6;
 return 0;
}
