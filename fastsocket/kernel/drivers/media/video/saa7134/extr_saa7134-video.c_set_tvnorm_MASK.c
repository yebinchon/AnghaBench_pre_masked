
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct saa7134_tvnorm {int vbi_v_stop_0; int video_v_start; int id; int video_v_stop; scalar_t__ h_start; scalar_t__ h_stop; int name; } ;
struct TYPE_4__ {int top; int height; scalar_t__ width; scalar_t__ left; } ;
struct TYPE_3__ {int top; int height; scalar_t__ width; scalar_t__ left; } ;
struct saa7134_dev {TYPE_2__ crop_defrect; TYPE_2__ crop_current; TYPE_1__ crop_bounds; struct saa7134_tvnorm* tvnorm; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct saa7134_dev*) ;

__attribute__((used)) static void FUNC_2(struct saa7134_dev *VAR_1, struct saa7134_tvnorm *VAR_2)
{
 FUNC_0("set tv norm = %s\n",VAR_2->name);
 VAR_1->tvnorm = VAR_2;


 VAR_1->crop_bounds.left = VAR_2->h_start;
 VAR_1->crop_defrect.left = VAR_2->h_start;
 VAR_1->crop_bounds.width = VAR_2->h_stop - VAR_2->h_start +1;
 VAR_1->crop_defrect.width = VAR_2->h_stop - VAR_2->h_start +1;

 VAR_1->crop_bounds.top = (VAR_2->vbi_v_stop_0+1)*2;
 VAR_1->crop_defrect.top = VAR_2->video_v_start*2;
 VAR_1->crop_bounds.height = ((VAR_2->id & VAR_0) ? 524 : 624)
  - VAR_1->crop_bounds.top;
 VAR_1->crop_defrect.height = (VAR_2->video_v_stop - VAR_2->video_v_start +1)*2;

 VAR_1->crop_current = VAR_1->crop_defrect;

 FUNC_1(VAR_1);
}
