
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {int index; int low_latency; int count; struct slgt_info* driver_data; int name; } ;
struct TYPE_2__ {int count; int flags; struct tty_struct* tty; int close_wait; } ;
struct slgt_info {int line; int device_name; TYPE_1__ port; int netlock; scalar_t__ netcount; scalar_t__ init_error; struct slgt_info* next_device; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 long VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct tty_struct*,struct file*,struct slgt_info*) ;
 int VAR_7 ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (struct slgt_info*,int ,char*) ;
 int VAR_8 ;
 struct slgt_info* VAR_9 ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (struct slgt_info*) ;
 scalar_t__ FUNC_8 (struct file*) ;

__attribute__((used)) static int FUNC_9(struct tty_struct *VAR_10, struct file *VAR_11)
{
 struct slgt_info *VAR_12;
 int VAR_13, VAR_14;
 unsigned long VAR_15;

 VAR_14 = VAR_10->index;
 if ((VAR_14 < 0) || (VAR_14 >= VAR_8)) {
  FUNC_0(("%s: open with invalid line #%d.\n", VAR_7, VAR_14));
  return -VAR_5;
 }

 VAR_12 = VAR_9;
 while(VAR_12 && VAR_12->line != VAR_14)
  VAR_12 = VAR_12->next_device;
 if (FUNC_4(VAR_12, VAR_10->name, "open"))
  return -VAR_5;
 if (VAR_12->init_error) {
  FUNC_0(("%s init error=%d\n", VAR_12->device_name, VAR_12->init_error));
  return -VAR_5;
 }

 VAR_10->driver_data = VAR_12;
 VAR_12->port.tty = VAR_10;

 FUNC_1(("%s open, old ref count = %d\n", VAR_12->device_name, VAR_12->port.count));


 if (FUNC_8(VAR_11) || VAR_12->port.flags & VAR_0){
  if (VAR_12->port.flags & VAR_0)
   FUNC_3(&VAR_12->port.close_wait);
  VAR_13 = ((VAR_12->port.flags & VAR_1) ?
   -VAR_3 : -VAR_6);
  goto cleanup;
 }

 VAR_12->port.tty->low_latency = (VAR_12->port.flags & VAR_2) ? 1 : 0;

 FUNC_5(&VAR_12->netlock, VAR_15);
 if (VAR_12->netcount) {
  VAR_13 = -VAR_4;
  FUNC_6(&VAR_12->netlock, VAR_15);
  goto cleanup;
 }
 VAR_12->port.count++;
 FUNC_6(&VAR_12->netlock, VAR_15);

 if (VAR_12->port.count == 1) {

  VAR_13 = FUNC_7(VAR_12);
  if (VAR_13 < 0)
   goto cleanup;
 }

 VAR_13 = FUNC_2(VAR_10, VAR_11, VAR_12);
 if (VAR_13) {
  FUNC_1(("%s block_til_ready rc=%d\n", VAR_12->device_name, VAR_13));
  goto cleanup;
 }

 VAR_13 = 0;

cleanup:
 if (VAR_13) {
  if (VAR_10->count == 1)
   VAR_12->port.tty = ((void*)0);
  if(VAR_12->port.count)
   VAR_12->port.count--;
 }

 FUNC_1(("%s open rc=%d\n", VAR_12->device_name, VAR_13));
 return VAR_13;
}
