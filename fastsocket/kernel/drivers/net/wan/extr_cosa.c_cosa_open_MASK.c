
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int dummy; } ;
struct TYPE_4__ {TYPE_1__* dentry; } ;
struct file {struct channel_data* private_data; TYPE_2__ f_path; } ;
struct cosa_data {int nchannels; int lock; int usage; struct channel_data* chan; } ;
struct channel_data {scalar_t__ usage; int rx_done; int setup_rx; int tx_done; } ;
struct TYPE_3__ {int d_inode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct cosa_data* VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int VAR_7 ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 () ;

__attribute__((used)) static int FUNC_5(struct inode *VAR_8, struct file *VAR_9)
{
 struct cosa_data *VAR_10;
 struct channel_data *VAR_11;
 unsigned long VAR_12;
 int VAR_13;
 int VAR_14 = 0;

 FUNC_1();
 if ((VAR_13=FUNC_0(VAR_9->f_path.dentry->d_inode)>>VAR_0)
  >= VAR_7) {
  VAR_14 = -VAR_2;
  goto out;
 }
 VAR_10 = VAR_6+VAR_13;

 if ((VAR_13=FUNC_0(VAR_9->f_path.dentry->d_inode)
  & ((1<<VAR_0)-1)) >= VAR_10->nchannels) {
  VAR_14 = -VAR_2;
  goto out;
 }
 VAR_11 = VAR_10->chan + VAR_13;

 VAR_9->private_data = VAR_11;

 FUNC_2(&VAR_10->lock, VAR_12);

 if (VAR_11->usage < 0) {
  FUNC_3(&VAR_10->lock, VAR_12);
  VAR_14 = -VAR_1;
  goto out;
 }
 VAR_10->usage++;
 VAR_11->usage++;

 VAR_11->tx_done = VAR_5;
 VAR_11->setup_rx = VAR_4;
 VAR_11->rx_done = VAR_3;
 FUNC_3(&VAR_10->lock, VAR_12);
out:
 FUNC_4();
 return VAR_14;
}
