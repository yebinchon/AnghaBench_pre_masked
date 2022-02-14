
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct uwb_mas_bm {int bm; } ;
struct TYPE_2__ {int length; } ;
struct uwb_ie_drp {struct uwb_drp_alloc* allocs; TYPE_1__ hdr; } ;
struct uwb_drp_alloc {int mas_bm; int zone_bm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct uwb_mas_bm*,int,int) ;

void FUNC_3(struct uwb_mas_bm *VAR_2, const struct uwb_ie_drp *VAR_3)
{
 int VAR_4 = (VAR_3->hdr.length - 4) / 4;
 const struct uwb_drp_alloc *VAR_5;
 int VAR_6;
 u16 VAR_7, VAR_8;
 u8 VAR_9;
 u16 VAR_10;

 FUNC_0(VAR_2->bm, VAR_0);

 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
  VAR_5 = &VAR_3->allocs[VAR_6];
  VAR_7 = FUNC_1(VAR_5->zone_bm);
  VAR_8 = FUNC_1(VAR_5->mas_bm);
  for (VAR_9 = 0; VAR_9 < VAR_1; VAR_9++) {
   VAR_10 = 1 << VAR_9;
   if (VAR_7 & VAR_10)
    FUNC_2(VAR_2, VAR_9, VAR_8);
  }
 }
}
