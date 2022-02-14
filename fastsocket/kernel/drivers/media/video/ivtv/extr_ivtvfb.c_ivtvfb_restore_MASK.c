
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct osd_info {int* palette_cur; int pan_cur; int ivtvfb_info; int blank_cur; int fbvar_cur; } ;
struct ivtv {struct osd_info* osd_info; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct ivtv*,int *) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static void FUNC_3(struct ivtv *VAR_0)
{
 struct osd_info *VAR_1 = VAR_0->osd_info;
 int VAR_2;

 FUNC_1(VAR_0, &VAR_1->fbvar_cur);
 FUNC_0(VAR_1->blank_cur, &VAR_1->ivtvfb_info);
 for (VAR_2 = 0; VAR_2 < 256; VAR_2++) {
  FUNC_2(VAR_2, 0x02a30);
  FUNC_2(VAR_1->palette_cur[VAR_2], 0x02a34);
 }
 FUNC_2(VAR_1->pan_cur, 0x02a0c);
}
