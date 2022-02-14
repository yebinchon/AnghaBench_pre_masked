
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int width; int height; } ;
struct TYPE_4__ {TYPE_1__ pix; } ;
struct v4l2_format {TYPE_2__ fmt; } ;
struct ivtv_open_id {scalar_t__ type; struct ivtv* itv; } ;
struct ivtv {scalar_t__ is_50hz; } ;
struct file {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct file*,void*,struct v4l2_format*) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_1, void *VAR_2, struct v4l2_format *VAR_3)
{
 struct ivtv_open_id *VAR_4 = VAR_2;
 struct ivtv *VAR_5 = VAR_4->itv;
 int VAR_6 = VAR_3->fmt.pix.width;
 int VAR_7 = VAR_3->fmt.pix.height;
 int VAR_8 = 2;

 VAR_6 = FUNC_2(VAR_6, 720);
 VAR_6 = FUNC_1(VAR_6, 2);
 if (VAR_4->type == VAR_0) {

  VAR_7 &= ~0x1f;
  VAR_8 = 32;
 }
 VAR_7 = FUNC_2(VAR_7, VAR_5->is_50hz ? 576 : 480);
 VAR_7 = FUNC_1(VAR_7, VAR_8);
 FUNC_0(VAR_1, VAR_2, VAR_3);
 VAR_3->fmt.pix.width = VAR_6;
 VAR_3->fmt.pix.height = VAR_7;
 return 0;
}
