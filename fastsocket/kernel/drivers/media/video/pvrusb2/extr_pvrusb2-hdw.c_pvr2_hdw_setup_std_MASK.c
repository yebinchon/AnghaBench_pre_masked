
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int v4l2_std_id ;
struct pvr2_hdw {int std_mask_eeprom; int std_mask_avail; int std_mask_cur; int std_dirty; int std_enum_cnt; int std_enum_cur; TYPE_2__* std_defs; TYPE_1__* hdw_desc; } ;
typedef int buf ;
struct TYPE_7__ {int msk; int pat; int std; } ;
struct TYPE_6__ {int id; int name; } ;
struct TYPE_5__ {int default_std_mask; } ;


 unsigned int FUNC_0 (TYPE_3__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct pvr2_hdw*) ;
 int FUNC_2 (struct pvr2_hdw*) ;
 int FUNC_3 (struct pvr2_hdw*) ;
 unsigned int FUNC_4 (char*,int,int) ;
 int FUNC_5 (int ,char*,...) ;
 TYPE_3__* VAR_2 ;

__attribute__((used)) static void FUNC_6(struct pvr2_hdw *VAR_3)
{
 char VAR_4[40];
 unsigned int VAR_5;
 v4l2_std_id VAR_6,VAR_7,VAR_8;

 VAR_6 = FUNC_1(VAR_3);
 VAR_8 = VAR_6 ? 0 : VAR_3->hdw_desc->default_std_mask;

 VAR_5 = FUNC_4(VAR_4,sizeof(VAR_4),VAR_3->std_mask_eeprom);
 FUNC_5(VAR_1,
     "Supported video standard(s) reported available"
     " in hardware: %.*s",
     VAR_5,VAR_4);

 VAR_3->std_mask_avail = VAR_3->std_mask_eeprom;

 VAR_7 = (VAR_6|VAR_8) & ~VAR_3->std_mask_avail;
 if (VAR_7) {
  VAR_5 = FUNC_4(VAR_4,sizeof(VAR_4),VAR_7);
  FUNC_5(VAR_1,
      "Expanding supported video standards"
      " to include: %.*s",
      VAR_5,VAR_4);
  VAR_3->std_mask_avail |= VAR_7;
 }

 FUNC_3(VAR_3);

 if (VAR_6) {
  VAR_5 = FUNC_4(VAR_4,sizeof(VAR_4),VAR_6);
  FUNC_5(VAR_1,
      "Initial video standard forced to %.*s",
      VAR_5,VAR_4);
  VAR_3->std_mask_cur = VAR_6;
  VAR_3->std_dirty = !0;
  FUNC_2(VAR_3);
  return;
 }
 if (VAR_8) {
  VAR_5 = FUNC_4(VAR_4,sizeof(VAR_4),VAR_8);
  FUNC_5(VAR_1,
      "Initial video standard"
      " (determined by device type): %.*s",VAR_5,VAR_4);
  VAR_3->std_mask_cur = VAR_8;
  VAR_3->std_dirty = !0;
  FUNC_2(VAR_3);
  return;
 }

 {
  unsigned int VAR_9;
  for (VAR_9 = 0; VAR_9 < FUNC_0(VAR_2); VAR_9++) {
   if (VAR_2[VAR_9].msk ?
       ((VAR_2[VAR_9].pat ^
        VAR_3->std_mask_eeprom) &
        VAR_2[VAR_9].msk) :
       (VAR_2[VAR_9].pat !=
        VAR_3->std_mask_eeprom)) continue;
   VAR_5 = FUNC_4(VAR_4,sizeof(VAR_4),
        VAR_2[VAR_9].std);
   FUNC_5(VAR_1,
       "Initial video standard guessed as %.*s",
       VAR_5,VAR_4);
   VAR_3->std_mask_cur = VAR_2[VAR_9].std;
   VAR_3->std_dirty = !0;
   FUNC_2(VAR_3);
   return;
  }
 }

 if (VAR_3->std_enum_cnt > 1) {

  VAR_3->std_enum_cur = 1;
  VAR_3->std_mask_cur = VAR_3->std_defs[VAR_3->std_enum_cur-1].id;
  VAR_3->std_dirty = !0;
  FUNC_5(VAR_1,
      "Initial video standard auto-selected to %s",
      VAR_3->std_defs[VAR_3->std_enum_cur-1].name);
  return;
 }

 FUNC_5(VAR_0,
     "Unable to select a viable initial video standard");
}
