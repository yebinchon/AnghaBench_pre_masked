
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct inode {int i_ino; TYPE_2__* i_sb; } ;
struct ext4_dir_entry_2 {int name_len; int inode; int rec_len; } ;
struct buffer_head {char* b_data; unsigned int b_size; scalar_t__ b_blocknr; } ;
struct TYPE_7__ {TYPE_1__* s_es; } ;
struct TYPE_6__ {int s_blocksize; } ;
struct TYPE_5__ {int s_inodes_count; } ;


 int const FUNC_0 (int) ;
 TYPE_3__* FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,char const*,char*,int ,char const*,unsigned long long,unsigned int,unsigned int,scalar_t__,int const,int) ;
 int FUNC_3 (int ,int) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int) ;

int FUNC_6(const char *VAR_0, struct inode *VAR_1,
    struct ext4_dir_entry_2 *VAR_2,
    struct buffer_head *VAR_3,
    unsigned int VAR_4)
{
 const char *VAR_5 = ((void*)0);
 const int VAR_6 = FUNC_3(VAR_2->rec_len,
      VAR_1->i_sb->s_blocksize);

 if (FUNC_5(VAR_6 < FUNC_0(1)))
  VAR_5 = "rec_len is smaller than minimal";
 else if (FUNC_5(VAR_6 % 4 != 0))
  VAR_5 = "rec_len % 4 != 0";
 else if (FUNC_5(VAR_6 < FUNC_0(VAR_2->name_len)))
  VAR_5 = "rec_len is too small for name_len";
 else if (FUNC_5(((char *) VAR_2 - VAR_3->b_data) + VAR_6 > VAR_1->i_sb->s_blocksize))
  VAR_5 = "directory entry across blocks";
 else if (FUNC_5(FUNC_4(VAR_2->inode) >
   FUNC_4(FUNC_1(VAR_1->i_sb)->s_es->s_inodes_count)))
  VAR_5 = "inode out of bounds";
 else
  return 1;

 FUNC_2(VAR_1->i_sb, VAR_0,
  "bad entry in directory #%lu: %s - block=%llu"
  "offset=%u(%u), inode=%u, rec_len=%d, name_len=%d",
  VAR_1->i_ino, VAR_5,
  (unsigned long long) VAR_3->b_blocknr,
  (unsigned) (VAR_4%VAR_3->b_size), VAR_4,
  FUNC_4(VAR_2->inode),
  VAR_6, VAR_2->name_len);
 return 0;
}
