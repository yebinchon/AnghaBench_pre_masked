
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int v4l2_std_id ;
struct file {int dummy; } ;
struct cx18_open_id {int prio; struct cx18* cx; } ;
struct TYPE_4__ {int count; int* start; } ;
struct TYPE_3__ {int is_50hz; int width; int height; } ;
struct cx18 {int std; int is_60hz; int is_50hz; TYPE_2__ vbi; TYPE_1__ params; int ana_capturing; int i_flags; int prio; } ;


 int FUNC_0 (char*,unsigned long long) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_5 ;
 int FUNC_2 (struct cx18*,int ,int ,int) ;
 int VAR_6 ;
 scalar_t__ FUNC_3 (int ,int *) ;
 int FUNC_4 (int *,int ) ;

int FUNC_5(struct file *VAR_7, void *VAR_8, v4l2_std_id *VAR_9)
{
 struct cx18_open_id *VAR_10 = VAR_8;
 struct cx18 *VAR_11 = VAR_10->cx;
 int VAR_12;

 VAR_12 = FUNC_4(&VAR_11->prio, VAR_10->prio);
 if (VAR_12)
  return VAR_12;

 if ((*VAR_9 & VAR_4) == 0)
  return -VAR_2;

 if (*VAR_9 == VAR_11->std)
  return 0;

 if (FUNC_3(VAR_0, &VAR_11->i_flags) ||
     FUNC_1(&VAR_11->ana_capturing) > 0) {



  return -VAR_1;
 }

 VAR_11->std = *VAR_9;
 VAR_11->is_60hz = (*VAR_9 & VAR_3) ? 1 : 0;
 VAR_11->params.is_50hz = VAR_11->is_50hz = !VAR_11->is_60hz;
 VAR_11->params.width = 720;
 VAR_11->params.height = VAR_11->is_50hz ? 576 : 480;
 VAR_11->vbi.count = VAR_11->is_50hz ? 18 : 12;
 VAR_11->vbi.start[0] = VAR_11->is_50hz ? 6 : 10;
 VAR_11->vbi.start[1] = VAR_11->is_50hz ? 318 : 273;
 FUNC_0("Switching standard to %llx.\n",
   (unsigned long long) VAR_11->std);


 FUNC_2(VAR_11, VAR_5, VAR_6, VAR_11->std);
 return 0;
}
