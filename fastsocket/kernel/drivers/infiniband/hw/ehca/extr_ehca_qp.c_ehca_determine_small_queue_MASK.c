
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ehca_alloc_queue_parms {int max_wr; int page_size; int is_small; } ;


 int FUNC_0 (int,int) ;

__attribute__((used)) static void FUNC_1(struct ehca_alloc_queue_parms *VAR_0,
           int VAR_1, int VAR_2)
{
 u32 VAR_3, VAR_4;
 int VAR_5 = VAR_1;

 if (!VAR_2)

  for (VAR_5 = 4; VAR_5 <= 252;
       VAR_5 = 4 + 2 * VAR_5)
   if (VAR_5 >= VAR_1)
    break;

 VAR_3 = FUNC_0(VAR_5, VAR_2);
 VAR_4 = VAR_3 * (VAR_0->max_wr + 1);

 if (VAR_4 <= 512)
  VAR_0->page_size = 2;
 else if (VAR_4 <= 1024)
  VAR_0->page_size = 3;
 else
  VAR_0->page_size = 0;

 VAR_0->is_small = (VAR_0->page_size != 0);
}
