
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kiocb {int dummy; } ;
struct iovec {int dummy; } ;
struct inode {int dummy; } ;
struct block_device {TYPE_1__* bd_disk; } ;
typedef int ssize_t ;
typedef int loff_t ;
typedef int get_block_t ;
typedef int dio_submit_t ;
typedef int dio_iodone_t ;
struct TYPE_2__ {char part_tbl; char* queue; } ;


 int VAR_0 ;
 int FUNC_0 (int,struct kiocb*,struct inode*,struct block_device*,struct iovec const*,int ,unsigned long,int ,int ,int ,int) ;
 int FUNC_1 (char*) ;

ssize_t
FUNC_2(int VAR_1, struct kiocb *VAR_2, struct inode *VAR_3,
 struct block_device *VAR_4, const struct iovec *VAR_5, loff_t VAR_6,
 unsigned long VAR_7, get_block_t VAR_8, dio_iodone_t VAR_9,
 dio_submit_t VAR_10, int VAR_11)
{
 FUNC_1(&VAR_4->bd_disk->part_tbl);
 FUNC_1(VAR_4->bd_disk->queue);
 FUNC_1((char *)VAR_4->bd_disk->queue + VAR_0);

 return FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6,
         VAR_7, VAR_8, VAR_9,
         VAR_10, VAR_11);
}
