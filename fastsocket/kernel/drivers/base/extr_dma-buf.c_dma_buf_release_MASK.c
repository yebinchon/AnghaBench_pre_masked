
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct file {struct dma_buf* private_data; } ;
struct dma_buf {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* release ) (struct dma_buf*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct file*) ;
 int FUNC_1 (struct dma_buf*) ;
 int FUNC_2 (struct dma_buf*) ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_1, struct file *VAR_2)
{
 struct dma_buf *VAR_3;

 if (!FUNC_0(VAR_2))
  return -VAR_0;

 VAR_3 = VAR_2->private_data;

 VAR_3->ops->release(VAR_3);
 FUNC_1(VAR_3);
 return 0;
}
