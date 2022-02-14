
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int dummy; } ;
struct flush_cache_page_args {unsigned long addr; unsigned long pfn; struct vm_area_struct* vma; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct flush_cache_page_args*,int) ;

__attribute__((used)) static void FUNC_1(struct vm_area_struct *VAR_1,
 unsigned long VAR_2, unsigned long VAR_3)
{
 struct flush_cache_page_args VAR_4;

 VAR_4.vma = VAR_1;
 VAR_4.addr = VAR_2;
 VAR_4.pfn = VAR_3;

 FUNC_0(VAR_0, &VAR_4, 1);
}
