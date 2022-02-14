
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct file {TYPE_1__* f_dentry; } ;
struct comedi_subdevice {TYPE_2__* async; int busy; } ;
struct comedi_device_file_info {struct comedi_device* device; } ;
struct comedi_device {int mutex; int minor; int attached; } ;
typedef int poll_table ;
struct TYPE_6__ {int subdevice; int prealloc_bufsz; int wait_head; } ;
struct TYPE_5__ {int d_inode; } ;


 int FUNC_0 (char*,int ) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 struct comedi_device_file_info* FUNC_5 (unsigned int const) ;
 struct comedi_subdevice* FUNC_6 (struct comedi_device_file_info*) ;
 int FUNC_7 (struct comedi_subdevice*) ;
 struct comedi_subdevice* FUNC_8 (struct comedi_device_file_info*) ;
 unsigned int FUNC_9 (int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct file*,int *,int *) ;

__attribute__((used)) static unsigned int FUNC_13(struct file *VAR_5, poll_table * VAR_6)
{
 unsigned int VAR_7 = 0;
 const unsigned VAR_8 = FUNC_9(VAR_5->f_dentry->d_inode);
 struct comedi_device_file_info *VAR_9 =
     FUNC_5(VAR_8);
 struct comedi_device *VAR_10 = VAR_9->device;
 struct comedi_subdevice *VAR_11;
 struct comedi_subdevice *VAR_12;

 FUNC_10(&VAR_10->mutex);
 if (!VAR_10->attached) {
  FUNC_0("no driver configured on comedi%i\n", VAR_10->minor);
  FUNC_11(&VAR_10->mutex);
  return 0;
 }

 VAR_7 = 0;
 VAR_11 = FUNC_6(VAR_9);
 if (VAR_11) {
  FUNC_12(VAR_5, &VAR_11->async->wait_head, VAR_6);
  if (!VAR_11->busy
      || FUNC_2(VAR_11->async) > 0
      || !(FUNC_7(VAR_11) &
    VAR_4)) {
   VAR_7 |= VAR_0 | VAR_2;
  }
 }
 VAR_12 = FUNC_8(VAR_9);
 if (VAR_12) {
  FUNC_12(VAR_5, &VAR_12->async->wait_head, VAR_6);
  FUNC_3(VAR_12->async,
           VAR_12->async->prealloc_bufsz);
  if (!VAR_12->busy
      || !(FUNC_7(VAR_12) &
    VAR_4)
      || FUNC_4(VAR_12->async) >=
      FUNC_1(VAR_12->async->subdevice)) {
   VAR_7 |= VAR_1 | VAR_3;
  }
 }

 FUNC_11(&VAR_10->mutex);
 return VAR_7;
}
