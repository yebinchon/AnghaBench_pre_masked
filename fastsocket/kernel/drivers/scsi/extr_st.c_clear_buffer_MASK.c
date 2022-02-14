
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st_buffer {int frp_segs; int reserved_page_order; int cleared; int * reserved_pages; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct st_buffer * VAR_1)
{
 int VAR_2;

 for (VAR_2=0; VAR_2 < VAR_1->frp_segs; VAR_2++)
  FUNC_0(FUNC_1(VAR_1->reserved_pages[VAR_2]), 0,
         VAR_0 << VAR_1->reserved_page_order);
 VAR_1->cleared = 1;
}
