
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttm_tt {int num_pages; int pages; } ;


 int FUNC_0 (int ,int) ;

__attribute__((used)) static void FUNC_1(struct ttm_tt *VAR_0)
{
 VAR_0->pages = FUNC_0(VAR_0->num_pages, sizeof(void*));
}
