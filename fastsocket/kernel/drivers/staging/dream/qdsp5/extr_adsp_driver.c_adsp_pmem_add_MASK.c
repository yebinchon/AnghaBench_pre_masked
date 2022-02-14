
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_adsp_module {int pmem_regions_lock; int pmem_regions; } ;
struct file {int dummy; } ;
struct adsp_pmem_region {unsigned long paddr; unsigned long kvaddr; unsigned long len; int list; struct file* file; int vaddr; } ;
struct adsp_pmem_info {int vaddr; int fd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct msm_adsp_module*,int ,unsigned long) ;
 scalar_t__ FUNC_2 (int ,unsigned long*,unsigned long*,unsigned long*,struct file**) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (struct adsp_pmem_region*) ;
 struct adsp_pmem_region* FUNC_5 (int,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct file*) ;

__attribute__((used)) static int FUNC_9(struct msm_adsp_module *VAR_3,
    struct adsp_pmem_info *VAR_4)
{
 unsigned long VAR_5, VAR_6, VAR_7;
 struct file *VAR_8;
 struct adsp_pmem_region *VAR_9;
 int VAR_10 = -VAR_0;

 FUNC_6(&VAR_3->pmem_regions_lock);
 VAR_9 = FUNC_5(sizeof(*VAR_9), VAR_2);
 if (!VAR_9) {
  VAR_10 = -VAR_1;
  goto end;
 }
 FUNC_0(&VAR_9->list);
 if (FUNC_2(VAR_4->fd, &VAR_5, &VAR_6, &VAR_7, &VAR_8)) {
  FUNC_4(VAR_9);
  goto end;
 }

 VAR_10 = FUNC_1(VAR_3, VAR_4->vaddr, VAR_7);
 if (VAR_10 < 0) {
  FUNC_8(VAR_8);
  FUNC_4(VAR_9);
  goto end;
 }

 VAR_9->vaddr = VAR_4->vaddr;
 VAR_9->paddr = VAR_5;
 VAR_9->kvaddr = VAR_6;
 VAR_9->len = VAR_7;
 VAR_9->file = VAR_8;

 FUNC_3(&VAR_9->list, &VAR_3->pmem_regions);
end:
 FUNC_7(&VAR_3->pmem_regions_lock);
 return VAR_10;
}
