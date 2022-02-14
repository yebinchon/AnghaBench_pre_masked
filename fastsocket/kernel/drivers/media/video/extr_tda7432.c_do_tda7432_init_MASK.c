
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct tda7432 {int input; int volume; int muted; scalar_t__ loud; void* rr; void* rf; void* lr; void* lf; int bass; int treble; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (struct v4l2_subdev*) ;
 struct tda7432* FUNC_1 (struct v4l2_subdev*) ;
 int FUNC_2 (int,int ,struct v4l2_subdev*,char*) ;

__attribute__((used)) static void FUNC_3(struct v4l2_subdev *VAR_9)
{
 struct tda7432 *VAR_10 = FUNC_1(VAR_9);

 FUNC_2(2, VAR_7, VAR_9, "In tda7432_init\n");

 VAR_10->input = VAR_5 |
      VAR_3 |
      VAR_2;
 VAR_10->volume = 0x3b ;
 if (VAR_8)
  VAR_10->volume |= VAR_4;
 VAR_10->muted = 1;
 VAR_10->treble = VAR_6;
 VAR_10->bass = VAR_1;
 VAR_10->lf = VAR_0;
 VAR_10->lr = VAR_0;
 VAR_10->rf = VAR_0;
 VAR_10->rr = VAR_0;
 VAR_10->loud = VAR_8;

 FUNC_0(VAR_9);
}
