
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u32 ;
struct zc0301_device {int state; scalar_t__ io; size_t nbuffers; int fileop_mutex; TYPE_3__* frame; } ;
struct vm_area_struct {unsigned long vm_end; unsigned long vm_start; int vm_flags; int vm_pgoff; TYPE_3__* vm_private_data; int * vm_ops; } ;
struct file {int dummy; } ;
struct TYPE_4__ {int offset; } ;
struct TYPE_5__ {TYPE_1__ m; int length; } ;
struct TYPE_6__ {void* bufmem; TYPE_2__ buf; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 unsigned long FUNC_1 (int ) ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct zc0301_device* FUNC_4 (struct file*) ;
 scalar_t__ FUNC_5 (struct vm_area_struct*,unsigned long,int ) ;
 int FUNC_6 (void*) ;
 int FUNC_7 (struct vm_area_struct*) ;
 int VAR_15 ;

__attribute__((used)) static int FUNC_8(struct file* VAR_16, struct vm_area_struct *VAR_17)
{
 struct zc0301_device *VAR_18 = FUNC_4(VAR_16);
 unsigned long VAR_19 = VAR_17->vm_end - VAR_17->vm_start,
        VAR_20 = VAR_17->vm_start;
 void *VAR_21;
 u32 VAR_22;

 if (FUNC_2(&VAR_18->fileop_mutex))
  return -VAR_7;

 if (VAR_18->state & VAR_0) {
  FUNC_0(1, "Device not present");
  FUNC_3(&VAR_18->fileop_mutex);
  return -VAR_6;
 }

 if (VAR_18->state & VAR_1) {
  FUNC_0(1, "The camera is misconfigured. Close and open it "
         "again.");
  FUNC_3(&VAR_18->fileop_mutex);
  return -VAR_5;
 }

 if (!(VAR_17->vm_flags & (VAR_14 | VAR_12))) {
  FUNC_3(&VAR_18->fileop_mutex);
  return -VAR_2;
 }

 if (VAR_18->io != VAR_8 ||
     VAR_19 != FUNC_1(VAR_18->frame[0].buf.length)) {
  FUNC_3(&VAR_18->fileop_mutex);
  return -VAR_4;
 }

 for (VAR_22 = 0; VAR_22 < VAR_18->nbuffers; VAR_22++) {
  if ((VAR_18->frame[VAR_22].buf.m.offset>>VAR_9) == VAR_17->vm_pgoff)
   break;
 }
 if (VAR_22 == VAR_18->nbuffers) {
  FUNC_3(&VAR_18->fileop_mutex);
  return -VAR_4;
 }

 VAR_17->vm_flags |= VAR_11;
 VAR_17->vm_flags |= VAR_13;

 VAR_21 = VAR_18->frame[VAR_22].bufmem;
 while (VAR_19 > 0) {
  if (FUNC_5(VAR_17, VAR_20, FUNC_6(VAR_21))) {
   FUNC_3(&VAR_18->fileop_mutex);
   return -VAR_3;
  }
  VAR_20 += VAR_10;
  VAR_21 += VAR_10;
  VAR_19 -= VAR_10;
 }

 VAR_17->vm_ops = &VAR_15;
 VAR_17->vm_private_data = &VAR_18->frame[VAR_22];
 FUNC_7(VAR_17);

 FUNC_3(&VAR_18->fileop_mutex);

 return 0;
}
