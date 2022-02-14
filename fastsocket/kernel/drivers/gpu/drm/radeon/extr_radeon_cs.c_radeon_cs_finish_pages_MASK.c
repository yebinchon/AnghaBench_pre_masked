
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ ptr; } ;
struct radeon_cs_parser {size_t chunk_ib_idx; TYPE_1__ ib; struct radeon_cs_chunk* chunks; } ;
struct radeon_cs_chunk {int last_copied_page; int last_page_index; int length_dw; scalar_t__ user_ptr; } ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__,int) ;
 int VAR_0 ;
 int VAR_1 ;

int FUNC_1(struct radeon_cs_parser *VAR_2)
{
 struct radeon_cs_chunk *VAR_3 = &VAR_2->chunks[VAR_2->chunk_ib_idx];
 int VAR_4;
 int VAR_5 = VAR_1;

 for (VAR_4 = VAR_3->last_copied_page + 1; VAR_4 <= VAR_3->last_page_index; VAR_4++) {
  if (VAR_4 == VAR_3->last_page_index) {
   VAR_5 = (VAR_3->length_dw * 4) % VAR_1;
   if (VAR_5 == 0)
    VAR_5 = VAR_1;
  }

  if (FUNC_0(VAR_2->ib.ptr + (VAR_4 * (VAR_1/4)),
           VAR_3->user_ptr + (VAR_4 * VAR_1),
           VAR_5))
   return -VAR_0;
 }
 return 0;
}
