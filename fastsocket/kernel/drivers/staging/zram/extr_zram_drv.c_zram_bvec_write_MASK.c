
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_4__ {int failed_writes; int good_compress; int pages_stored; int compr_size; int pages_expand; int pages_zero; } ;
struct zram {unsigned char* compress_buffer; TYPE_2__ stats; TYPE_1__* table; int mem_pool; int compress_workmem; } ;
struct zobj_header {size_t table_idx; } ;
struct page {int dummy; } ;
struct bio_vec {int bv_offset; size_t bv_len; struct page* bv_page; } ;
struct TYPE_3__ {size_t offset; struct page* page; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct page* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct bio_vec*) ;
 int FUNC_2 (unsigned char*) ;
 unsigned char* FUNC_3 (int,int ) ;
 unsigned char* FUNC_4 (struct page*,int ) ;
 int FUNC_5 (unsigned char*,int ) ;
 int FUNC_6 (unsigned char*,int,unsigned char*,size_t*,int ) ;
 size_t VAR_10 ;
 int FUNC_7 (unsigned char*,unsigned char*,size_t) ;
 scalar_t__ FUNC_8 (unsigned char*) ;
 int FUNC_9 (char*,int) ;
 int FUNC_10 (char*,...) ;
 scalar_t__ FUNC_11 (int) ;
 scalar_t__ FUNC_12 (int ,size_t,struct page**,size_t*,int) ;
 int FUNC_13 (struct zram*,size_t) ;
 int FUNC_14 (struct zram*,unsigned char*,size_t) ;
 int FUNC_15 (struct zram*,size_t,int ) ;
 int FUNC_16 (struct zram*,int *,size_t) ;
 int FUNC_17 (struct zram*,int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (struct zram*,size_t,int ) ;

__attribute__((used)) static int FUNC_20(struct zram *VAR_11, struct bio_vec *VAR_12, u32 VAR_13,
      int VAR_14)
{
 int VAR_15;
 u32 VAR_16;
 size_t VAR_17;
 struct zobj_header *VAR_18;
 struct page *VAR_19, *VAR_20;
 unsigned char *VAR_21, *VAR_22, *VAR_23, *VAR_24 = ((void*)0);

 VAR_19 = VAR_12->bv_page;
 VAR_23 = VAR_11->compress_buffer;

 if (FUNC_1(VAR_12)) {




  VAR_24 = FUNC_3(VAR_6, VAR_1);
  if (!VAR_24) {
   FUNC_10("Error allocating temp memory!\n");
   VAR_15 = -VAR_0;
   goto out;
  }
  VAR_15 = FUNC_14(VAR_11, VAR_24, VAR_13);
  if (VAR_15) {
   FUNC_2(VAR_24);
   goto out;
  }
 }





 if (VAR_11->table[VAR_13].page ||
     FUNC_19(VAR_11, VAR_13, VAR_8))
  FUNC_13(VAR_11, VAR_13);

 VAR_21 = FUNC_4(VAR_19, VAR_3);

 if (FUNC_1(VAR_12))
  FUNC_7(VAR_24 + VAR_14, VAR_21 + VAR_12->bv_offset,
         VAR_12->bv_len);
 else
  VAR_24 = VAR_21;

 if (FUNC_8(VAR_24)) {
  FUNC_5(VAR_21, VAR_3);
  if (FUNC_1(VAR_12))
   FUNC_2(VAR_24);
  FUNC_18(&VAR_11->stats.pages_zero);
  FUNC_15(VAR_11, VAR_13, VAR_8);
  VAR_15 = 0;
  goto out;
 }

 VAR_15 = FUNC_6(VAR_24, VAR_6, VAR_23, &VAR_17,
          VAR_11->compress_workmem);

 FUNC_5(VAR_21, VAR_3);
 if (FUNC_1(VAR_12))
   FUNC_2(VAR_24);

 if (FUNC_11(VAR_15 != VAR_5)) {
  FUNC_9("Compression failed! err=%d\n", VAR_15);
  goto out;
 }






 if (FUNC_11(VAR_17 > VAR_10)) {
  VAR_17 = VAR_6;
  VAR_20 = FUNC_0(VAR_2 | VAR_9);
  if (FUNC_11(!VAR_20)) {
   FUNC_10("Error allocating memory for "
    "incompressible page: %u\n", VAR_13);
   VAR_15 = -VAR_0;
   goto out;
  }

  VAR_16 = 0;
  FUNC_15(VAR_11, VAR_13, VAR_7);
  FUNC_18(&VAR_11->stats.pages_expand);
  VAR_11->table[VAR_13].page = VAR_20;
  VAR_23 = FUNC_4(VAR_19, VAR_3);
  goto memstore;
 }

 if (FUNC_12(VAR_11->mem_pool, VAR_17 + sizeof(*VAR_18),
        &VAR_11->table[VAR_13].page, &VAR_16,
        VAR_2 | VAR_9)) {
  FUNC_10("Error allocating memory for compressed "
   "page: %u, size=%zu\n", VAR_13, VAR_17);
  VAR_15 = -VAR_0;
  goto out;
 }

memstore:
 VAR_11->table[VAR_13].offset = VAR_16;

 VAR_22 = FUNC_4(VAR_11->table[VAR_13].page, VAR_4) +
  VAR_11->table[VAR_13].offset;
 FUNC_7(VAR_22, VAR_23, VAR_17);

 FUNC_5(VAR_22, VAR_4);
 if (FUNC_11(FUNC_19(VAR_11, VAR_13, VAR_7)))
  FUNC_5(VAR_23, VAR_3);


 FUNC_16(VAR_11, &VAR_11->stats.compr_size, VAR_17);
 FUNC_18(&VAR_11->stats.pages_stored);
 if (VAR_17 <= VAR_6 / 2)
  FUNC_18(&VAR_11->stats.good_compress);

 return 0;

out:
 if (VAR_15)
  FUNC_17(VAR_11, &VAR_11->stats.failed_writes);
 return VAR_15;
}
