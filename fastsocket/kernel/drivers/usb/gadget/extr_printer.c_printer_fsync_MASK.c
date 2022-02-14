
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct printer_dev {int tx_reqs_active; int tx_flush_wait; int lock; int tx_reqs; } ;
struct file {struct printer_dev* private_data; } ;
struct dentry {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static int
FUNC_5(struct file *VAR_0, struct dentry *VAR_1, int VAR_2)
{
 struct printer_dev *VAR_3 = VAR_0->private_data;
 unsigned long VAR_4;
 int VAR_5;

 FUNC_2(&VAR_3->lock, VAR_4);
 VAR_5 = (FUNC_0(FUNC_1(&VAR_3->tx_reqs)));
 FUNC_3(&VAR_3->lock, VAR_4);

 if (!VAR_5) {

  FUNC_4(VAR_3->tx_flush_wait,
    (FUNC_0(FUNC_1(&VAR_3->tx_reqs_active))));
 }

 return 0;
}
