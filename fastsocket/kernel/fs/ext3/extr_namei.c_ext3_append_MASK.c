
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct inode {int i_size; TYPE_1__* i_sb; } ;
struct buffer_head {int dummy; } ;
typedef int handle_t ;
struct TYPE_4__ {int i_disksize; } ;
struct TYPE_3__ {int s_blocksize_bits; scalar_t__ s_blocksize; } ;


 TYPE_2__* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct buffer_head*) ;
 struct buffer_head* FUNC_2 (int *,struct inode*,int,int,int*) ;
 int FUNC_3 (int *,struct buffer_head*) ;

__attribute__((used)) static struct buffer_head *FUNC_4(handle_t *VAR_0,
     struct inode *VAR_1,
     u32 *VAR_2, int *VAR_3)
{
 struct buffer_head *VAR_4;

 *VAR_2 = VAR_1->i_size >> VAR_1->i_sb->s_blocksize_bits;

 VAR_4 = FUNC_2(VAR_0, VAR_1, *VAR_2, 1, VAR_3);
 if (VAR_4) {
  VAR_1->i_size += VAR_1->i_sb->s_blocksize;
  FUNC_0(VAR_1)->i_disksize = VAR_1->i_size;
  *VAR_3 = FUNC_3(VAR_0, VAR_4);
  if (*VAR_3) {
   FUNC_1(VAR_4);
   VAR_4 = ((void*)0);
  }
 }
 return VAR_4;
}
