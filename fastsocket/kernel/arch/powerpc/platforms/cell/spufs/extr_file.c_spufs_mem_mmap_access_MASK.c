
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vm_area_struct {unsigned long vm_start; int vm_flags; unsigned long vm_end; TYPE_2__* vm_file; } ;
struct spu_context {TYPE_1__* ops; } ;
struct TYPE_4__ {struct spu_context* private_data; } ;
struct TYPE_3__ {char* (* get_ls ) (struct spu_context*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (void*,char*,int) ;
 int FUNC_1 (char*,void*,int) ;
 scalar_t__ FUNC_2 (struct spu_context*) ;
 int FUNC_3 (struct spu_context*) ;
 char* FUNC_4 (struct spu_context*) ;

__attribute__((used)) static int FUNC_5(struct vm_area_struct *VAR_3,
    unsigned long VAR_4,
    void *VAR_5, int VAR_6, int VAR_7)
{
 struct spu_context *VAR_8 = VAR_3->vm_file->private_data;
 unsigned long VAR_9 = VAR_4 - VAR_3->vm_start;
 char *VAR_10;

 if (VAR_7 && !(VAR_3->vm_flags & VAR_2))
  return -VAR_0;
 if (FUNC_2(VAR_8))
  return -VAR_1;
 if ((VAR_9 + VAR_6) > VAR_3->vm_end)
  VAR_6 = VAR_3->vm_end - VAR_9;
 VAR_10 = VAR_8->ops->get_ls(VAR_8);
 if (VAR_7)
  FUNC_1(VAR_10 + VAR_9, VAR_5, VAR_6);
 else
  FUNC_0(VAR_5, VAR_10 + VAR_9, VAR_6);
 FUNC_3(VAR_8);
 return VAR_6;
}
