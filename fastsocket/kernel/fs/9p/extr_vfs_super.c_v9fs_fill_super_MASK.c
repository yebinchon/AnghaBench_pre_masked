
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v9fs_session_info {scalar_t__ maxdata; } ;
struct super_block {int s_blocksize_bits; int s_blocksize; int s_flags; int * s_op; int s_magic; int s_maxbytes; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct super_block*,void*) ;
 int VAR_6 ;

__attribute__((used)) static void
FUNC_2(struct super_block *VAR_7, struct v9fs_session_info *VAR_8,
  int VAR_9, void *VAR_10)
{
 VAR_7->s_maxbytes = VAR_0;
 VAR_7->s_blocksize_bits = FUNC_0(VAR_8->maxdata - 1);
 VAR_7->s_blocksize = 1 << VAR_7->s_blocksize_bits;
 VAR_7->s_magic = VAR_5;
 VAR_7->s_op = &VAR_6;

 VAR_7->s_flags = VAR_9 | VAR_1 | VAR_4 | VAR_2 |
     VAR_3;

 FUNC_1(VAR_7, VAR_10);
}
