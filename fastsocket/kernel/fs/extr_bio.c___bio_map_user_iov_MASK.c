
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sg_iovec {unsigned long iov_len; scalar_t__ iov_base; } ;
struct request_queue {int dummy; } ;
struct page {int dummy; } ;
struct block_device {int dummy; } ;
struct bio {int bi_rw; int bi_flags; struct block_device* bi_bdev; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct bio* FUNC_0 (int) ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 unsigned int FUNC_1 (struct request_queue*,struct bio*,struct page*,unsigned int,int) ;
 struct bio* FUNC_2 (int ,int) ;
 int FUNC_3 (struct bio*) ;
 int FUNC_4 (unsigned long,int const,int,struct page**) ;
 struct page** FUNC_5 (int,int,int ) ;
 int FUNC_6 (struct page**) ;
 int FUNC_7 (struct page*) ;
 unsigned long FUNC_8 (struct request_queue*) ;

__attribute__((used)) static struct bio *FUNC_9(struct request_queue *VAR_8,
          struct block_device *VAR_9,
          struct sg_iovec *VAR_10, int VAR_11,
          int VAR_12, gfp_t VAR_13)
{
 int VAR_14, VAR_15;
 int VAR_16 = 0;
 struct page **VAR_17;
 struct bio *VAR_18;
 int VAR_19 = 0;
 int VAR_20, VAR_21;

 for (VAR_14 = 0; VAR_14 < VAR_11; VAR_14++) {
  unsigned long VAR_22 = (unsigned long)VAR_10[VAR_14].iov_base;
  unsigned long VAR_23 = VAR_10[VAR_14].iov_len;
  unsigned long VAR_24 = (VAR_22 + VAR_23 + VAR_7 - 1) >> VAR_6;
  unsigned long VAR_25 = VAR_22 >> VAR_6;




  if (VAR_24 < VAR_25)
   return FUNC_0(-VAR_3);

  VAR_16 += VAR_24 - VAR_25;



  if (VAR_22 & FUNC_8(VAR_8))
   return FUNC_0(-VAR_3);
 }

 if (!VAR_16)
  return FUNC_0(-VAR_3);

 VAR_18 = FUNC_2(VAR_13, VAR_16);
 if (!VAR_18)
  return FUNC_0(-VAR_4);

 VAR_20 = -VAR_4;
 VAR_17 = FUNC_5(VAR_16, sizeof(struct page *), VAR_13);
 if (!VAR_17)
  goto out;

 for (VAR_14 = 0; VAR_14 < VAR_11; VAR_14++) {
  unsigned long VAR_26 = (unsigned long)VAR_10[VAR_14].iov_base;
  unsigned long VAR_27 = VAR_10[VAR_14].iov_len;
  unsigned long VAR_28 = (VAR_26 + VAR_27 + VAR_7 - 1) >> VAR_6;
  unsigned long VAR_29 = VAR_26 >> VAR_6;
  const int VAR_30 = VAR_28 - VAR_29;
  const int VAR_31 = VAR_19 + VAR_30;

  VAR_20 = FUNC_4(VAR_26, VAR_30,
    VAR_12, &VAR_17[VAR_19]);
  if (VAR_20 < VAR_30) {
   VAR_20 = -VAR_2;
   goto out_unmap;
  }

  VAR_21 = VAR_26 & ~VAR_5;
  for (VAR_15 = VAR_19; VAR_15 < VAR_31; VAR_15++) {
   unsigned int VAR_32 = VAR_7 - VAR_21;

   if (VAR_27 <= 0)
    break;

   if (VAR_32 > VAR_27)
    VAR_32 = VAR_27;




   if (FUNC_1(VAR_8, VAR_18, VAR_17[VAR_15], VAR_32, VAR_21) <
         VAR_32)
    break;

   VAR_27 -= VAR_32;
   VAR_21 = 0;
  }

  VAR_19 = VAR_15;



  while (VAR_15 < VAR_31)
   FUNC_7(VAR_17[VAR_15++]);
 }

 FUNC_6(VAR_17);




 if (!VAR_12)
  VAR_18->bi_rw |= (1 << VAR_0);

 VAR_18->bi_bdev = VAR_9;
 VAR_18->bi_flags |= (1 << VAR_1);
 return VAR_18;

 out_unmap:
 for (VAR_14 = 0; VAR_14 < VAR_16; VAR_14++) {
  if(!VAR_17[VAR_14])
   break;
  FUNC_7(VAR_17[VAR_14]);
 }
 out:
 FUNC_6(VAR_17);
 FUNC_3(VAR_18);
 return FUNC_0(VAR_20);
}
