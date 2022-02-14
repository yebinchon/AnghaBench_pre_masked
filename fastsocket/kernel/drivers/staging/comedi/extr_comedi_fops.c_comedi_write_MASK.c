
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct file {int f_flags; TYPE_1__* f_dentry; } ;
struct comedi_subdevice {struct file* busy; struct comedi_async* async; } ;
struct comedi_device_file_info {struct comedi_device* device; } ;
struct comedi_device {int minor; int attached; } ;
struct comedi_async {scalar_t__ buf_write_ptr; scalar_t__ prealloc_bufsz; int prealloc_buf; int wait_head; } ;
typedef int ssize_t ;
typedef int loff_t ;
struct TYPE_2__ {int d_inode; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char*,int ) ;
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
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (struct comedi_async*,int) ;
 int FUNC_4 (struct comedi_async*,int) ;
 int FUNC_5 (struct comedi_async*) ;
 struct comedi_device_file_info* FUNC_6 (unsigned int const) ;
 int FUNC_7 (struct comedi_subdevice*) ;
 struct comedi_subdevice* FUNC_8 (struct comedi_device_file_info*) ;
 int FUNC_9 (int,char const*,int) ;
 int VAR_12 ;
 int FUNC_10 (struct comedi_device*,struct comedi_subdevice*) ;
 unsigned int FUNC_11 (int ) ;
 int FUNC_12 (int *,int *) ;
 int FUNC_13 () ;
 int FUNC_14 (int ) ;
 scalar_t__ FUNC_15 (int ) ;
 int VAR_13 ;

__attribute__((used)) static ssize_t FUNC_16(struct file *VAR_14, const char *VAR_15, size_t VAR_16,
       loff_t * VAR_17)
{
 struct comedi_subdevice *VAR_18;
 struct comedi_async *VAR_19;
 int VAR_20, VAR_21, VAR_22 = 0, VAR_23 = 0;
 FUNC_0(VAR_13, VAR_12);
 const unsigned VAR_24 = FUNC_11(VAR_14->f_dentry->d_inode);
 struct comedi_device_file_info *VAR_25 =
     FUNC_6(VAR_24);
 struct comedi_device *VAR_26 = VAR_25->device;

 if (!VAR_26->attached) {
  FUNC_1("no driver configured on comedi%i\n", VAR_26->minor);
  VAR_23 = -VAR_4;
  goto done;
 }

 VAR_18 = FUNC_8(VAR_25);
 if (VAR_18 == ((void*)0)) {
  VAR_23 = -VAR_3;
  goto done;
 }
 VAR_19 = VAR_18->async;

 if (!VAR_16) {
  VAR_23 = 0;
  goto done;
 }
 if (!VAR_18->busy) {
  VAR_23 = 0;
  goto done;
 }
 if (VAR_18->busy != VAR_14) {
  VAR_23 = -VAR_0;
  goto done;
 }
 FUNC_2(&VAR_19->wait_head, &VAR_13);
 while (VAR_16 > 0 && !VAR_23) {
  FUNC_14(VAR_10);

  VAR_20 = VAR_16;

  VAR_21 = VAR_20;
  if (VAR_19->buf_write_ptr + VAR_21 > VAR_19->prealloc_bufsz)
   VAR_21 = VAR_19->prealloc_bufsz - VAR_19->buf_write_ptr;
  FUNC_3(VAR_19, VAR_19->prealloc_bufsz);
  if (VAR_21 > FUNC_5(VAR_19))
   VAR_21 = FUNC_5(VAR_19);
  if (VAR_21 < VAR_20)
   VAR_20 = VAR_21;

  if (VAR_20 == 0) {
   if (!(FUNC_7(VAR_18) & VAR_9)) {
    if (FUNC_7(VAR_18) &
        VAR_8) {
     VAR_23 = -VAR_5;
    } else {
     VAR_23 = 0;
    }
    FUNC_10(VAR_26, VAR_18);
    break;
   }
   if (VAR_14->f_flags & VAR_7) {
    VAR_23 = -VAR_1;
    break;
   }
   if (FUNC_15(VAR_12)) {
    VAR_23 = -VAR_6;
    break;
   }
   FUNC_13();
   if (!VAR_18->busy)
    break;
   if (VAR_18->busy != VAR_14) {
    VAR_23 = -VAR_0;
    break;
   }
   continue;
  }

  VAR_21 = FUNC_9(VAR_19->prealloc_buf + VAR_19->buf_write_ptr,
       VAR_15, VAR_20);
  if (VAR_21) {
   VAR_20 -= VAR_21;
   VAR_23 = -VAR_2;
  }
  FUNC_4(VAR_19, VAR_20);

  VAR_22 += VAR_20;
  VAR_16 -= VAR_20;

  VAR_15 += VAR_20;
  break;
 }
 FUNC_14(VAR_11);
 FUNC_12(&VAR_19->wait_head, &VAR_13);

done:
 return VAR_22 ? VAR_22 : VAR_23;
}
