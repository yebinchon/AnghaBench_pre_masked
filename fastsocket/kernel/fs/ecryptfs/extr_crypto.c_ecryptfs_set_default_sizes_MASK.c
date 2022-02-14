
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ecryptfs_crypt_stat {int flags; scalar_t__ num_header_bytes_at_front; int iv_bytes; int extent_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct ecryptfs_crypt_stat*) ;

void FUNC_1(struct ecryptfs_crypt_stat *VAR_5)
{


 VAR_5->extent_size = VAR_0;
 FUNC_0(VAR_5);
 VAR_5->iv_bytes = VAR_1;
 if (VAR_5->flags & VAR_2)
  VAR_5->num_header_bytes_at_front = 0;
 else {
  if (VAR_4 <= VAR_3)
   VAR_5->num_header_bytes_at_front =
    VAR_3;
  else
   VAR_5->num_header_bytes_at_front = VAR_4;
 }
}
