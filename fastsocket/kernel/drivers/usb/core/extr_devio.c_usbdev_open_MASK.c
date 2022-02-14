
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct usb_device {scalar_t__ state; int dev; int filelist; TYPE_1__* usbfs_dentry; } ;
struct inode {struct usb_device* i_private; int i_rdev; } ;
struct file {struct dev_state* private_data; } ;
struct dev_state {int list; int secid; scalar_t__ ifclaimed; int * disccontext; int disc_euid; int disc_uid; int disc_pid; scalar_t__ discsignr; int wait; int async_completed; int async_pending; int lock; struct file* file; struct usb_device* dev; } ;
struct cred {int euid; int uid; } ;
struct TYPE_7__ {int comm; } ;
struct TYPE_6__ {struct inode* d_inode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_2__* VAR_5 ;
 struct cred* FUNC_1 () ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct inode*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct dev_state*) ;
 struct dev_state* FUNC_6 (int,int ) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 () ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (TYPE_2__*,int *) ;
 int FUNC_12 () ;
 int FUNC_13 (int *,char*,int ,int ) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (TYPE_2__*) ;
 int FUNC_16 (TYPE_2__*) ;
 int FUNC_17 () ;
 int FUNC_18 (struct usb_device*) ;
 int FUNC_19 (struct usb_device*) ;
 int FUNC_20 (struct usb_device*) ;
 struct usb_device* FUNC_21 (int ) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_22(struct inode *VAR_7, struct file *VAR_8)
{
 struct usb_device *VAR_9 = ((void*)0);
 struct dev_state *VAR_10;
 const struct cred *VAR_11 = FUNC_1();
 int VAR_12;

 FUNC_8();

 FUNC_9(&VAR_6);

 VAR_12 = -VAR_1;
 VAR_10 = FUNC_6(sizeof(struct dev_state), VAR_2);
 if (!VAR_10)
  goto out;

 VAR_12 = -VAR_0;


 if (FUNC_3(VAR_7) == VAR_3)
  VAR_9 = FUNC_21(VAR_7->i_rdev);
 if (!VAR_9 || VAR_9->state == VAR_4)
  goto out;
 VAR_12 = FUNC_18(VAR_9);
 if (VAR_12)
  goto out;

 VAR_12 = 0;
 VAR_10->dev = VAR_9;
 VAR_10->file = VAR_8;
 FUNC_14(&VAR_10->lock);
 FUNC_0(&VAR_10->list);
 FUNC_0(&VAR_10->async_pending);
 FUNC_0(&VAR_10->async_completed);
 FUNC_4(&VAR_10->wait);
 VAR_10->discsignr = 0;
 VAR_10->disc_pid = FUNC_2(FUNC_15(VAR_5));
 VAR_10->disc_uid = VAR_11->uid;
 VAR_10->disc_euid = VAR_11->euid;
 VAR_10->disccontext = ((void*)0);
 VAR_10->ifclaimed = 0;
 FUNC_11(VAR_5, &VAR_10->secid);
 FUNC_12();
 FUNC_7(&VAR_10->list, &VAR_9->filelist);
 VAR_8->private_data = VAR_10;
 FUNC_13(&VAR_9->dev, "opened by process %d: %s\n", FUNC_16(VAR_5),
   VAR_5->comm);
 out:
 if (VAR_12) {
  FUNC_5(VAR_10);
  FUNC_20(VAR_9);
 }
 FUNC_10(&VAR_6);
 FUNC_17();
 return VAR_12;
}
