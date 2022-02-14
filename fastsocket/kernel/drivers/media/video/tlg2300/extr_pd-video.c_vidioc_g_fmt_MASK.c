
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int pix; } ;
struct v4l2_format {TYPE_1__ fmt; } ;
struct TYPE_5__ {int pix; } ;
struct TYPE_6__ {TYPE_2__ context; } ;
struct poseidon {TYPE_3__ video_data; } ;
struct front_face {struct poseidon* pd; } ;
struct file {int dummy; } ;


 int FUNC_0 (struct front_face*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_0, void *VAR_1, struct v4l2_format *VAR_2)
{
 struct front_face *VAR_3 = VAR_1;
 struct poseidon *VAR_4 = VAR_3->pd;

 FUNC_0(VAR_3);
 VAR_2->fmt.pix = VAR_4->video_data.context.pix;
 return 0;
}
