
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vme_master_resource {int lock; scalar_t__ kern_base; } ;
typedef int ssize_t ;
typedef scalar_t__ loff_t ;


 int FUNC_0 (scalar_t__,void*,unsigned int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

ssize_t FUNC_3(struct vme_master_resource *VAR_0, void *VAR_1,
 size_t VAR_2, loff_t VAR_3)
{
 int VAR_4 = 0;

 FUNC_1(&(VAR_0->lock));

 FUNC_0(VAR_0->kern_base + VAR_3, VAR_1, (unsigned int)VAR_2);
 VAR_4 = VAR_2;

 FUNC_2(&(VAR_0->lock));

 return VAR_4;
}
