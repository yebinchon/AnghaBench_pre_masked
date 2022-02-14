
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct radeon_vm {int fence; int * page_directory; int * page_tables; int pd_gpu_addr; } ;
struct radeon_sa_bo {int dummy; } ;
struct TYPE_2__ {int sa_manager; } ;
struct radeon_device {TYPE_1__ vm_manager; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_1 (int ) ;
 int VAR_3 ;
 int * FUNC_2 (unsigned int,int ) ;
 int FUNC_3 (int *,int ,unsigned int) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (struct radeon_device*,int **,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct radeon_device*,int *,int **,unsigned int,int ,int) ;
 int FUNC_8 (struct radeon_device*) ;
 int FUNC_9 (struct radeon_device*,struct radeon_vm*) ;
 int FUNC_10 (struct radeon_device*) ;

int FUNC_11(struct radeon_device *VAR_4, struct radeon_vm *VAR_5)
{
 unsigned VAR_6, VAR_7;
 u64 *VAR_8;
 int VAR_9;

 if (VAR_5 == ((void*)0)) {
  return -VAR_0;
 }

 if (VAR_5->page_directory != ((void*)0)) {
  return 0;
 }

retry:
 VAR_6 = FUNC_1(FUNC_8(VAR_4));
 VAR_9 = FUNC_7(VAR_4, &VAR_4->vm_manager.sa_manager,
        &VAR_5->page_directory, VAR_6,
        VAR_3, 0);
 if (VAR_9 == -VAR_1) {
  VAR_9 = FUNC_9(VAR_4, VAR_5);
  if (VAR_9)
   return VAR_9;
  goto retry;

 } else if (VAR_9) {
  return VAR_9;
 }

 VAR_5->pd_gpu_addr = FUNC_6(VAR_5->page_directory);


 VAR_8 = FUNC_4(VAR_5->page_directory);
 FUNC_3(VAR_8, 0, VAR_6);

 VAR_7 = FUNC_10(VAR_4) * sizeof(struct radeon_sa_bo *);
 VAR_5->page_tables = FUNC_2(VAR_7, VAR_2);

 if (VAR_5->page_tables == ((void*)0)) {
  FUNC_0("Cannot allocate memory for page table array\n");
  FUNC_5(VAR_4, &VAR_5->page_directory, VAR_5->fence);
  return -VAR_1;
 }

 return 0;
}
