
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ecryptfs_crypt_stat {int num_header_bytes_at_front; int extent_size; } ;
typedef int loff_t ;



__attribute__((used)) static void FUNC_0(loff_t *VAR_0, loff_t VAR_1,
          struct ecryptfs_crypt_stat *VAR_2)
{
 (*VAR_0) = (VAR_2->num_header_bytes_at_front
       + (VAR_2->extent_size * VAR_1));
}
