
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct brd_device {int dummy; } ;
struct block_device {int bd_openers; int bd_mutex; TYPE_2__* bd_inode; TYPE_1__* bd_disk; } ;
typedef int fmode_t ;
struct TYPE_4__ {int i_mapping; } ;
struct TYPE_3__ {struct brd_device* private_data; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct brd_device*) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(struct block_device *VAR_3, fmode_t VAR_4,
   unsigned int VAR_5, unsigned long VAR_6)
{
 int VAR_7;
 struct brd_device *VAR_8 = VAR_3->bd_disk->private_data;

 if (VAR_5 != VAR_0)
  return -VAR_2;





 FUNC_2(&VAR_3->bd_mutex);
 VAR_7 = -VAR_1;
 if (VAR_3->bd_openers <= 1) {







  FUNC_1();
  FUNC_4(VAR_3->bd_inode->i_mapping, 0);
  FUNC_0(VAR_8);
  VAR_7 = 0;
 }
 FUNC_3(&VAR_3->bd_mutex);

 return VAR_7;
}
