
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uwb_rsv_row_info {int free_rows; int* avail; } ;
struct uwb_rsv_alloc_info {unsigned char* bm; struct uwb_rsv_row_info ri; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned char VAR_2 ;

__attribute__((used)) static void FUNC_0(struct uwb_rsv_alloc_info *VAR_3)
{
 unsigned char *VAR_4 = VAR_3->bm;
 struct uwb_rsv_row_info *VAR_5 = &VAR_3->ri;
 int VAR_6, VAR_7;

 VAR_5->free_rows = 16;
 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7 ++) {
  VAR_5->avail[VAR_7] = 1;
  for (VAR_6 = 1; VAR_6 < VAR_1; VAR_6++) {
   if (VAR_4[VAR_6 * VAR_1 + VAR_7] == VAR_2) {
    VAR_5->free_rows--;
    VAR_5->avail[VAR_7]=0;
    break;
   }
  }
 }
}
