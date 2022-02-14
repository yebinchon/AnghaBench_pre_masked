
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct osd_info {int dummy; } ;
struct ivtv {int ivtvfb_restore; TYPE_1__* osd_info; int osd_video_pbase; } ;
struct TYPE_2__ {int ivtvfb_info; int video_pbase; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,...) ;
 int VAR_5 ;
 int FUNC_1 (struct ivtv*) ;
 int FUNC_2 (int ,int *) ;
 int VAR_6 ;
 int FUNC_3 (struct ivtv*) ;
 int FUNC_4 (struct ivtv*) ;
 int FUNC_5 (struct ivtv*) ;
 int VAR_7 ;
 int FUNC_6 (int *) ;
 TYPE_1__* FUNC_7 (int,int) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int ,int) ;

__attribute__((used)) static int FUNC_10(struct ivtv *VAR_8)
{
 int VAR_9;

 if (VAR_8->osd_info) {
  FUNC_0("Card %d already initialised\n", VAR_6);
  return -VAR_0;
 }

 VAR_8->osd_info = FUNC_7(sizeof(struct osd_info),
     VAR_4|VAR_5);
 if (VAR_8->osd_info == ((void*)0)) {
  FUNC_0("Failed to allocate memory for osd_info\n");
  return -VAR_2;
 }


 VAR_9 = FUNC_3(VAR_8);
 if (VAR_9) {
  FUNC_5(VAR_8);
  return VAR_9;
 }


 if ((VAR_9 = FUNC_4(VAR_8))) {
  FUNC_5(VAR_8);
  return VAR_9;
 }


 if (FUNC_8(&VAR_8->osd_info->ivtvfb_info) < 0) {
  FUNC_5(VAR_8);
  return -VAR_1;
 }

 VAR_8->osd_video_pbase = VAR_8->osd_info->video_pbase;


 FUNC_6(&VAR_8->osd_info->ivtvfb_info);


 FUNC_9(0, 0x02a30);
 FUNC_9(0, 0x02a34);


 FUNC_2(VAR_3, &VAR_8->osd_info->ivtvfb_info);


 VAR_8->ivtvfb_restore = VAR_7;


 FUNC_1(VAR_8);
 return 0;

}
