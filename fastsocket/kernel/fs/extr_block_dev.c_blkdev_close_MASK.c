
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct file {int f_mode; TYPE_1__* f_mapping; } ;
struct block_device {struct file* bd_holder; } ;
struct TYPE_2__ {int host; } ;


 struct block_device* FUNC_0 (int ) ;
 int FUNC_1 (struct block_device*) ;
 int FUNC_2 (struct block_device*,int ) ;

__attribute__((used)) static int FUNC_3(struct inode * VAR_0, struct file * VAR_1)
{
 struct block_device *VAR_2 = FUNC_0(VAR_1->f_mapping->host);
 if (VAR_2->bd_holder == VAR_1)
  FUNC_1(VAR_2);
 return FUNC_2(VAR_2, VAR_1->f_mode);
}
