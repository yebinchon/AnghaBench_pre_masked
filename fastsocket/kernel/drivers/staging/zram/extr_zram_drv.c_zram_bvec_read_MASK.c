
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int ulong ;
typedef size_t u32 ;
struct TYPE_4__ {int failed_reads; } ;
struct zram {TYPE_2__ stats; TYPE_1__* table; } ;
struct zobj_header {int dummy; } ;
struct page {int dummy; } ;
struct bio_vec {int bv_offset; int bv_len; struct page* bv_page; } ;
struct bio {int bi_size; scalar_t__ bi_sector; } ;
struct TYPE_3__ {int offset; struct page* page; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct zram*,struct bio_vec*,size_t,int) ;
 int FUNC_2 (struct bio_vec*) ;
 scalar_t__ FUNC_3 (struct bio_vec*) ;
 int FUNC_4 (unsigned char*) ;
 unsigned char* FUNC_5 (size_t,int ) ;
 unsigned char* FUNC_6 (struct page*,int ) ;
 int FUNC_7 (unsigned char*,int ) ;
 int FUNC_8 (unsigned char*,scalar_t__,unsigned char*,size_t*) ;
 int FUNC_9 (unsigned char*,unsigned char*,int ) ;
 int FUNC_10 (char*,int ,int ) ;
 int FUNC_11 (char*,int,size_t) ;
 int FUNC_12 (char*) ;
 scalar_t__ FUNC_13 (int) ;
 scalar_t__ FUNC_14 (unsigned char*) ;
 int FUNC_15 (struct zram*,int *) ;
 int FUNC_16 (struct zram*,size_t,int ) ;

__attribute__((used)) static int FUNC_17(struct zram *VAR_8, struct bio_vec *VAR_9,
     u32 VAR_10, int VAR_11, struct bio *VAR_12)
{
 int VAR_13;
 size_t VAR_14;
 struct page *VAR_15;
 struct zobj_header *VAR_16;
 unsigned char *VAR_17, *VAR_18, *VAR_19 = ((void*)0);

 VAR_15 = VAR_9->bv_page;

 if (FUNC_16(VAR_8, VAR_10, VAR_7)) {
  FUNC_2(VAR_9);
  return 0;
 }


 if (FUNC_13(!VAR_8->table[VAR_10].page)) {
  FUNC_10("Read before write: sector=%lu, size=%u",
    (ulong)(VAR_12->bi_sector), VAR_12->bi_size);
  FUNC_2(VAR_9);
  return 0;
 }


 if (FUNC_13(FUNC_16(VAR_8, VAR_10, VAR_6))) {
  FUNC_1(VAR_8, VAR_9, VAR_10, VAR_11);
  return 0;
 }

 if (FUNC_3(VAR_9)) {

  VAR_19 = FUNC_5(VAR_5, VAR_1);
  if (!VAR_19) {
   FUNC_12("Error allocating temp memory!\n");
   return -VAR_0;
  }
 }

 VAR_17 = FUNC_6(VAR_15, VAR_2);
 if (!FUNC_3(VAR_9))
  VAR_19 = VAR_17;
 VAR_14 = VAR_5;

 VAR_18 = FUNC_6(VAR_8->table[VAR_10].page, VAR_3) +
  VAR_8->table[VAR_10].offset;

 VAR_13 = FUNC_8(VAR_18 + sizeof(*VAR_16),
        FUNC_14(VAR_18) - sizeof(*VAR_16),
        VAR_19, &VAR_14);

 if (FUNC_3(VAR_9)) {
  FUNC_9(VAR_17 + VAR_9->bv_offset, VAR_19 + VAR_11,
         VAR_9->bv_len);
  FUNC_4(VAR_19);
 }

 FUNC_7(VAR_18, VAR_3);
 FUNC_7(VAR_17, VAR_2);


 if (FUNC_13(VAR_13 != VAR_4)) {
  FUNC_11("Decompression failed! err=%d, page=%u\n", VAR_13, VAR_10);
  FUNC_15(VAR_8, &VAR_8->stats.failed_reads);
  return VAR_13;
 }

 FUNC_0(VAR_15);

 return 0;
}
