
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * backing_dev_info; } ;
struct inode {TYPE_1__* i_mapping; TYPE_1__ i_data; } ;
struct file {int f_mode; } ;
struct block_device {int dummy; } ;
struct TYPE_4__ {scalar_t__ inuse; struct block_device* binding; } ;


 int FUNC_0 (struct block_device*) ;
 int FUNC_1 (struct block_device*,int ) ;
 int VAR_0 ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 TYPE_2__* VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_5(struct inode *VAR_3, struct file *VAR_4)
{
 const int VAR_5= FUNC_2(VAR_3);
 struct block_device *VAR_6;

 FUNC_3(&VAR_2);
 VAR_6 = VAR_1[VAR_5].binding;
 if (--VAR_1[VAR_5].inuse == 0) {

  VAR_3->i_mapping = &VAR_3->i_data;
  VAR_3->i_mapping->backing_dev_info = &VAR_0;
 }
 FUNC_4(&VAR_2);

 FUNC_0(VAR_6);
 FUNC_1(VAR_6, VAR_4->f_mode);
 return 0;
}
