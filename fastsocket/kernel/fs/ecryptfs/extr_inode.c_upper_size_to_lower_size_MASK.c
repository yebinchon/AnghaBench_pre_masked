
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ecryptfs_crypt_stat {int num_header_bytes_at_front; int extent_shift; int extent_mask; int extent_size; } ;
typedef int loff_t ;



__attribute__((used)) static loff_t
FUNC_0(struct ecryptfs_crypt_stat *VAR_0,
    loff_t VAR_1)
{
 loff_t VAR_2;

 VAR_2 = VAR_0->num_header_bytes_at_front;
 if (VAR_1 != 0) {
  loff_t VAR_3;

  VAR_3 = VAR_1 >> VAR_0->extent_shift;
  if (VAR_1 & ~VAR_0->extent_mask)
   VAR_3++;
  VAR_2 += (VAR_3 * VAR_0->extent_size);
 }
 return VAR_2;
}
