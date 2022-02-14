
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {TYPE_1__* i_sb; } ;
struct block_device_operations {int (* direct_access ) (struct block_device*,int,void**,unsigned long*) ;} ;
struct block_device {TYPE_2__* bd_disk; } ;
typedef int sector_t ;
struct TYPE_4__ {struct block_device_operations* fops; } ;
struct TYPE_3__ {struct block_device* s_bdev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct block_device*,int,void**,unsigned long*) ;

__attribute__((used)) static inline int
FUNC_2(struct inode *VAR_1, sector_t VAR_2,
        void **VAR_3, unsigned long *VAR_4)
{
 struct block_device *VAR_5 = VAR_1->i_sb->s_bdev;
 const struct block_device_operations *VAR_6 = VAR_5->bd_disk->fops;
 sector_t VAR_7;

 VAR_7 = VAR_2 * (VAR_0 / 512);

 FUNC_0(!VAR_6->direct_access);
 return VAR_6->direct_access(VAR_5, VAR_7, VAR_3, VAR_4);
}
