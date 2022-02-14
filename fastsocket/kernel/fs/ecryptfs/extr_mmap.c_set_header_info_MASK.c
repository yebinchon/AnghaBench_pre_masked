
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ecryptfs_crypt_stat {size_t num_header_bytes_at_front; } ;


 size_t VAR_0 ;
 int FUNC_0 (char*,struct ecryptfs_crypt_stat*,size_t*) ;

__attribute__((used)) static void FUNC_1(char *VAR_1,
       struct ecryptfs_crypt_stat *VAR_2)
{
 size_t VAR_3;
 size_t VAR_4 =
  VAR_2->num_header_bytes_at_front;

 VAR_2->num_header_bytes_at_front =
  VAR_0;
 FUNC_0(VAR_1 + 20, VAR_2, &VAR_3);
 VAR_2->num_header_bytes_at_front =
  VAR_4;
}
