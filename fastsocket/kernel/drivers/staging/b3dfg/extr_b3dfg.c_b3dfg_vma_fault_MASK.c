
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vm_fault {unsigned long pgoff; scalar_t__ virtual_address; } ;
struct vm_area_struct {TYPE_2__* vm_file; } ;
struct b3dfg_dev {unsigned int frame_size; TYPE_1__* buffers; } ;
struct TYPE_4__ {struct b3dfg_dev* private_data; } ;
struct TYPE_3__ {unsigned char** frame; } ;


 unsigned int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 scalar_t__ FUNC_0 (int) ;
 unsigned long FUNC_1 (unsigned char*) ;
 int FUNC_2 (struct vm_area_struct*,unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct vm_area_struct *VAR_5,
 struct vm_fault *VAR_6)
{
 struct b3dfg_dev *VAR_7 = VAR_5->vm_file->private_data;
 unsigned long VAR_8 = VAR_6->pgoff << VAR_1;
 unsigned int VAR_9 = VAR_7->frame_size;
 unsigned int VAR_10 = VAR_9 * VAR_0;
 unsigned char *VAR_11;


 unsigned int VAR_12 = VAR_8 / VAR_10;

 unsigned int VAR_13 = VAR_8 % VAR_10;


 unsigned int VAR_14 = VAR_13 / VAR_9;

 unsigned int VAR_15 = VAR_13 % VAR_9;

 if (FUNC_0(VAR_12 >= VAR_4))
  return VAR_3;

 VAR_11 = VAR_7->buffers[VAR_12].frame[VAR_14] + VAR_15;
 FUNC_2(VAR_5, (unsigned long)VAR_6->virtual_address,
     FUNC_1(VAR_11) >> VAR_1);

 return VAR_2;
}
