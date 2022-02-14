
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct go7007 {int modet_enable; int video_dev; scalar_t__ seen_frame; scalar_t__ parse_length; int state; TYPE_1__* modet; int dvd_mode; } ;
struct TYPE_2__ {int pixel_threshold; int motion_threshold; int mb_threshold; scalar_t__ enable; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct go7007*,int **,int*) ;
 scalar_t__ FUNC_1 (struct go7007*,int *,int *) ;
 scalar_t__ FUNC_2 (struct go7007*,int *,int) ;
 scalar_t__ FUNC_3 (struct go7007*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,char*) ;

int FUNC_6(struct go7007 *VAR_1)
{
 u8 *VAR_2;
 int VAR_3, VAR_4 = 0, VAR_5;
 u16 VAR_6, VAR_7;

 VAR_1->modet_enable = 0;
 if (!VAR_1->dvd_mode)
  for (VAR_5 = 0; VAR_5 < 4; ++VAR_5) {
   if (VAR_1->modet[VAR_5].enable) {
    VAR_1->modet_enable = 1;
    continue;
   }
   VAR_1->modet[VAR_5].pixel_threshold = 32767;
   VAR_1->modet[VAR_5].motion_threshold = 32767;
   VAR_1->modet[VAR_5].mb_threshold = 32767;
  }

 if (FUNC_0(VAR_1, &VAR_2, &VAR_3) < 0)
  return -1;

 if (FUNC_2(VAR_1, VAR_2, VAR_3) < 0 ||
   FUNC_1(VAR_1, &VAR_6, &VAR_7) < 0) {
  FUNC_5(VAR_1->video_dev, "error transferring firmware\n");
  VAR_4 = -1;
  goto start_error;
 }

 VAR_1->state = VAR_0;
 VAR_1->parse_length = 0;
 VAR_1->seen_frame = 0;
 if (FUNC_3(VAR_1) < 0) {
  FUNC_5(VAR_1->video_dev, "error starting stream transfer\n");
  VAR_4 = -1;
  goto start_error;
 }

start_error:
 FUNC_4(VAR_2);
 return VAR_4;
}
