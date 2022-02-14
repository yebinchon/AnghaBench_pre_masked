
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int start_col; int safe_mas_per_col; int unsafe_mas_per_col; scalar_t__ interval; } ;
struct uwb_rsv_col_info {TYPE_1__ csi; } ;
struct uwb_rsv_alloc_info {unsigned char* bm; struct uwb_rsv_col_info* ci; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;

__attribute__((used)) static void FUNC_0(struct uwb_rsv_alloc_info *VAR_4)
{
 int VAR_5, VAR_6, VAR_7, VAR_8;
 unsigned char *VAR_9 = VAR_4->bm;
 struct uwb_rsv_col_info *VAR_10 = VAR_4->ci;
 unsigned char VAR_11;

 for (VAR_5 = VAR_10->csi.start_col; VAR_5 < VAR_1; VAR_5 += VAR_10->csi.interval) {

  VAR_7 = VAR_10->csi.safe_mas_per_col;
  VAR_8 = VAR_10->csi.unsafe_mas_per_col;

  for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++ ) {
   if (VAR_9[VAR_5 * VAR_0 + VAR_6] == 0) {

    if (VAR_7 > 0) {
     VAR_7--;
     VAR_11 = VAR_2;
    } else if (VAR_8 > 0) {
     VAR_8--;
     VAR_11 = VAR_3;
    } else {
     break;
    }
    VAR_9[VAR_5 * VAR_0 + VAR_6] = VAR_11;
   }
  }
 }
}
