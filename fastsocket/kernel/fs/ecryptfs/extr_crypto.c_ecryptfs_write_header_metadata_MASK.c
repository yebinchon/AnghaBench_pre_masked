
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct ecryptfs_crypt_stat {int extent_size; int num_header_bytes_at_front; } ;


 int FUNC_0 (scalar_t__,char*) ;
 int FUNC_1 (scalar_t__,char*) ;

void
FUNC_2(char *VAR_0,
          struct ecryptfs_crypt_stat *VAR_1,
          size_t *VAR_2)
{
 u32 VAR_3;
 u16 VAR_4;

 VAR_3 = (u32)VAR_1->extent_size;
 VAR_4 =
  (u16)(VAR_1->num_header_bytes_at_front
        / VAR_1->extent_size);
 FUNC_1(VAR_3, VAR_0);
 VAR_0 += 4;
 FUNC_0(VAR_4, VAR_0);
 (*VAR_2) = 6;
}
