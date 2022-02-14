
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct io_ctl {scalar_t__ index; scalar_t__ num_pages; int cur; int size; int orig; int page; int * pages; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct io_ctl *VAR_1, int VAR_2)
{
 FUNC_1(VAR_1->cur);
 FUNC_0(VAR_1->index >= VAR_1->num_pages);
 VAR_1->page = VAR_1->pages[VAR_1->index++];
 VAR_1->cur = FUNC_2(VAR_1->page);
 VAR_1->orig = VAR_1->cur;
 VAR_1->size = VAR_0;
 if (VAR_2)
  FUNC_3(VAR_1->cur, 0, VAR_0);
}
