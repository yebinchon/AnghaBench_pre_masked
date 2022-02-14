
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * backing_dev_info; int * a_ops; } ;
struct inode {int i_state; int i_blkbits; TYPE_1__ i_data; struct block_device* i_bdev; int i_rdev; int i_mode; } ;
struct block_device {int bd_block_size; int bd_list; scalar_t__ bd_part_count; struct inode* bd_inode; int * bd_super; int * bd_contains; } ;
typedef int dev_t ;
struct TYPE_4__ {struct block_device bdev; } ;


 TYPE_2__* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int ) ;
 struct inode* FUNC_2 (int ,int ,int ,int ,int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct inode*) ;

struct block_device *FUNC_8(dev_t VAR_10)
{
 struct block_device *VAR_11;
 struct inode *VAR_12;

 VAR_12 = FUNC_2(VAR_7, FUNC_1(VAR_10),
   VAR_6, VAR_5, &VAR_10);

 if (!VAR_12)
  return ((void*)0);

 VAR_11 = &FUNC_0(VAR_12)->bdev;

 if (VAR_12->i_state & VAR_1) {
  VAR_11->bd_contains = ((void*)0);
  VAR_11->bd_super = ((void*)0);
  VAR_11->bd_inode = VAR_12;
  VAR_11->bd_block_size = (1 << VAR_12->i_blkbits);
  VAR_11->bd_part_count = 0;
  VAR_12->i_mode = VAR_2;
  VAR_12->i_rdev = VAR_10;
  VAR_12->i_bdev = VAR_11;
  VAR_12->i_data.a_ops = &VAR_8;
  FUNC_4(&VAR_12->i_data, VAR_0);
  VAR_12->i_data.backing_dev_info = &VAR_9;
  FUNC_5(&VAR_4);
  FUNC_3(&VAR_11->bd_list, &VAR_3);
  FUNC_6(&VAR_4);
  FUNC_7(VAR_12);
 }
 return VAR_11;
}
