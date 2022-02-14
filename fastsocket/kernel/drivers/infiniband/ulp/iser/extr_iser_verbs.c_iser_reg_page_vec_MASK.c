
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct iser_page_vec {int length; int data_size; scalar_t__* pages; scalar_t__ offset; } ;
struct iser_mem_reg {int len; int is_fmr; scalar_t__ va; void* mem_h; scalar_t__ lkey; int rkey; } ;
struct iser_conn {int fmr_pool; } ;
struct ib_pool_fmr {TYPE_1__* fmr; } ;
struct TYPE_2__ {int rkey; scalar_t__ lkey; } ;


 scalar_t__ FUNC_0 (struct ib_pool_fmr*) ;
 scalar_t__ FUNC_1 (struct ib_pool_fmr*) ;
 int VAR_0 ;
 struct ib_pool_fmr* FUNC_2 (int ,scalar_t__*,int,scalar_t__) ;
 int FUNC_3 (char*,struct iser_page_vec*,int,unsigned long,unsigned long,unsigned int,void*,unsigned long,unsigned long) ;
 int FUNC_4 (char*,int) ;

int FUNC_5(struct iser_conn *VAR_1,
        struct iser_page_vec *VAR_2,
        struct iser_mem_reg *VAR_3)
{
 struct ib_pool_fmr *VAR_4;
 u64 VAR_5;
 u64 *VAR_6;
 int VAR_7;

 VAR_6 = VAR_2->pages;
 VAR_5 = VAR_6[0];

 VAR_4 = FUNC_2(VAR_1->fmr_pool,
        VAR_6,
        VAR_2->length,
        VAR_5);

 if (FUNC_0(VAR_4)) {
  VAR_7 = (int)FUNC_1(VAR_4);
  FUNC_4("ib_fmr_pool_map_phys failed: %d\n", VAR_7);
  return VAR_7;
 }

 VAR_3->lkey = VAR_4->fmr->lkey;
 VAR_3->rkey = VAR_4->fmr->rkey;
 VAR_3->len = VAR_2->length * VAR_0;
 VAR_3->va = VAR_5;
 VAR_3->is_fmr = 1;
 VAR_3->mem_h = (void *)VAR_4;

 VAR_3->va += VAR_2->offset;
 VAR_3->len = VAR_2->data_size;

 FUNC_3("PHYSICAL Mem.register, [PHYS p_array: 0x%p, sz: %d, "
   "entry[0]: (0x%08lx,%ld)] -> "
   "[lkey: 0x%08X mem_h: 0x%p va: 0x%08lX sz: %ld]\n",
   VAR_2, VAR_2->length,
   (unsigned long)VAR_2->pages[0],
   (unsigned long)VAR_2->data_size,
   (unsigned int)VAR_3->lkey, VAR_3->mem_h,
   (unsigned long)VAR_3->va, (unsigned long)VAR_3->len);
 return 0;
}
