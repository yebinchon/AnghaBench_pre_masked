
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int index; } ;
struct inode {int i_mapping; TYPE_1__* i_sb; } ;
struct ext4_ext_cache {int ec_block; int ec_len; scalar_t__ ec_start; } ;
struct buffer_head {struct buffer_head* b_this_page; } ;
typedef int pgoff_t ;
typedef int ext4_lblk_t ;
typedef unsigned char __u64 ;
typedef int __u32 ;
struct TYPE_2__ {unsigned char s_blocksize_bits; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned char VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (struct buffer_head*) ;
 scalar_t__ FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (int ,int*,int ,unsigned int,struct page**) ;
 int FUNC_3 (struct page**) ;
 struct page** FUNC_4 (int,int ) ;
 unsigned int FUNC_5 (int,int) ;
 struct buffer_head* FUNC_6 (struct page*) ;
 int FUNC_7 (struct page*) ;
 int FUNC_8 (struct page*) ;

__attribute__((used)) static int FUNC_9(struct inode *VAR_8,
        struct ext4_ext_cache *VAR_9)
{
 __u32 VAR_10 = 0;
 int VAR_11 = 0;
 ext4_lblk_t VAR_12 = VAR_2;
 unsigned int VAR_13;
 unsigned char VAR_14 = VAR_8->i_sb->s_blocksize_bits;
 ext4_lblk_t VAR_15 = 0;
 pgoff_t VAR_16;
 pgoff_t VAR_17;
 pgoff_t VAR_18;
 struct page **VAR_19 = ((void*)0);
 struct buffer_head *VAR_20 = ((void*)0);
 struct buffer_head *VAR_21 = ((void*)0);
 unsigned int VAR_22 = VAR_7 / sizeof(struct page *);

 VAR_19 = FUNC_4(VAR_7, VAR_4);
 if (VAR_19 == ((void*)0))
  return -VAR_0;

 VAR_17 = ((__u64)VAR_9->ec_block << VAR_14) >>
   VAR_6;

repeat:
 VAR_16 = VAR_17;
 VAR_21 = ((void*)0);
 VAR_11 = FUNC_2(VAR_8->i_mapping, &VAR_17,
    VAR_5, VAR_22, VAR_19);

 if (!(VAR_10 & VAR_3)) {

  if (VAR_11 == 0) {
out:
   for (VAR_18 = 0; VAR_18 < VAR_11; VAR_18++)
    FUNC_7(VAR_19[VAR_18]);

   FUNC_3(VAR_19);
   return VAR_2;
  }


  VAR_15 = ((__u64)VAR_19[0]->index << VAR_6) >>
     VAR_14;
  if (!FUNC_8(VAR_19[0]))
   goto out;
  VAR_21 = FUNC_6(VAR_19[0]);
  if (!VAR_21)
   goto out;

  VAR_20 = VAR_21;
  do {
   if (FUNC_1(VAR_20) &&
       (VAR_15 >= VAR_9->ec_block)) {

    if (VAR_15 > VAR_9->ec_block +
     VAR_9->ec_len)



     goto out;
    goto found_mapped_buffer;
   }
   VAR_20 = VAR_20->b_this_page;
   VAR_15++;
  } while (VAR_20 != VAR_21);


  goto out;
 } else {

  if (VAR_11 > 0 && VAR_19[0]->index == VAR_16)
   VAR_21 = FUNC_6(VAR_19[0]);
  VAR_20 = VAR_21;
 }

found_mapped_buffer:
 if (VAR_20 != ((void*)0) && FUNC_0(VAR_20)) {

  if (!(VAR_10 & VAR_3)) {




   VAR_10 |= VAR_3;
   VAR_12 = VAR_15;
  }

  do {
   if (!FUNC_0(VAR_20))
    goto found_delayed_extent;
   VAR_20 = VAR_20->b_this_page;
   VAR_15++;
  } while (VAR_20 != VAR_21);

  for (VAR_18 = 1; VAR_18 < VAR_11; VAR_18++) {
   if (!FUNC_8(VAR_19[VAR_18])) {
    VAR_20 = ((void*)0);
    break;
   }
   VAR_21 = FUNC_6(VAR_19[VAR_18]);
   if (!VAR_21) {
    VAR_20 = ((void*)0);
    break;
   }
   if (VAR_19[VAR_18]->index !=
    VAR_19[0]->index + VAR_18) {

    VAR_20 = ((void*)0);
    break;
   }
   VAR_20 = VAR_21;
   do {
    if (!FUNC_0(VAR_20))

     goto found_delayed_extent;
    VAR_20 = VAR_20->b_this_page;
    VAR_15++;
   } while (VAR_20 != VAR_21);
  }
 } else if (!(VAR_10 & VAR_3))

  goto out;

found_delayed_extent:
 VAR_13 = FUNC_5(VAR_15 - VAR_12,
         (ext4_lblk_t)VAR_1);
 if (VAR_11 == VAR_22 && VAR_20 != ((void*)0) &&
  VAR_13 < VAR_1 &&
  FUNC_0(VAR_20)) {

  for (VAR_18 = 0; VAR_18 < VAR_11; VAR_18++)
   FUNC_7(VAR_19[VAR_18]);
  goto repeat;
 }

 for (VAR_18 = 0; VAR_18 < VAR_11; VAR_18++)
  FUNC_7(VAR_19[VAR_18]);
 FUNC_3(VAR_19);


 if (VAR_9->ec_start == 0) {
  VAR_9->ec_block = VAR_12;
  VAR_9->ec_len = VAR_13;
 }

 return VAR_12;
}
