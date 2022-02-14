
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mem_ctl_info {int nr_csrows; struct csrow_info* csrows; } ;
struct csrow_info {scalar_t__ nr_pages; } ;
typedef int ssize_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_2(struct mem_ctl_info *VAR_0, char *VAR_1)
{
 int VAR_2, VAR_3;

 for (VAR_2 = VAR_3 = 0; VAR_3 < VAR_0->nr_csrows;
  VAR_3++) {
  struct csrow_info *VAR_4 = &VAR_0->csrows[VAR_3];

  if (!VAR_4->nr_pages)
   continue;

  VAR_2 += VAR_4->nr_pages;
 }

 return FUNC_1(VAR_1, "%u\n", FUNC_0(VAR_2));
}
