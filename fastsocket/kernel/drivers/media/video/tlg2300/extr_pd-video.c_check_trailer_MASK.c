
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int sizeimage; } ;
struct TYPE_4__ {TYPE_1__ pix; } ;
struct video_data {int lines_size; int lines_copied; int prev_left; int field_count; TYPE_2__ context; struct vbi_data* vbi; } ;
struct vbi_data {int vbi_size; int copied; } ;


 int FUNC_0 (struct video_data*,char*,int) ;
 int FUNC_1 (struct video_data*) ;
 int FUNC_2 (struct video_data*,int) ;
 int FUNC_3 (char*,char*,int) ;

__attribute__((used)) static void FUNC_4(struct video_data *VAR_0, char *VAR_1, int VAR_2)
{
 struct vbi_data *VAR_3 = VAR_0->vbi;
 int VAR_4;
 char *VAR_5;

 VAR_4 = (VAR_0->context.pix.sizeimage / 2 + VAR_3->vbi_size / 2)
  - (VAR_3->copied + VAR_0->lines_size * VAR_0->lines_copied);
 if (VAR_0->prev_left)
  VAR_4 -= (VAR_0->lines_size - VAR_0->prev_left);

 if (VAR_4 > VAR_2 || VAR_4 <= 0)
  goto short_package;

 VAR_5 = VAR_1 + VAR_4;


 if (!FUNC_3(VAR_5, "VFHS", 4)) {
  int VAR_6 = *((u32 *)(VAR_5 + 12));

  if ((VAR_6 & 1) ^ VAR_0->field_count) {
   FUNC_2(VAR_0, VAR_0->field_count);
   return;
  }
  FUNC_0(VAR_0, VAR_1, VAR_4);
 }
short_package:
 FUNC_1(VAR_0);
}
