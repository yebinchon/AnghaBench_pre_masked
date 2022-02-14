
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct videobuf_queue {struct em28xx_fh* priv_data; } ;
struct v4l2_frequency {int type; int frequency; } ;
struct em28xx_fh {scalar_t__ radio; struct em28xx* dev; } ;
struct em28xx {int width; int height; int v4l2_dev; int ctl_freq; TYPE_1__* format; } ;
typedef int f ;
struct TYPE_2__ {int depth; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct v4l2_frequency*,int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *,int ,int ,int ,struct v4l2_frequency*) ;

__attribute__((used)) static int
FUNC_2(struct videobuf_queue *VAR_6, unsigned int *VAR_7, unsigned int *VAR_8)
{
 struct em28xx_fh *VAR_9 = VAR_6->priv_data;
 struct em28xx *VAR_10 = VAR_9->dev;
 struct v4l2_frequency VAR_11;

 *VAR_8 = (VAR_9->dev->width * VAR_9->dev->height * VAR_10->format->depth + 7)
  >> 3;

 if (0 == *VAR_7)
  *VAR_7 = VAR_0;

 if (*VAR_7 < VAR_1)
  *VAR_7 = VAR_1;


 FUNC_0(&VAR_11, 0, sizeof(VAR_11));
 VAR_11.frequency = VAR_10->ctl_freq;
 VAR_11.type = VAR_9->radio ? VAR_3 : VAR_2;

 FUNC_1(&VAR_10->v4l2_dev, 0, VAR_5, VAR_4, &VAR_11);

 return 0;
}
