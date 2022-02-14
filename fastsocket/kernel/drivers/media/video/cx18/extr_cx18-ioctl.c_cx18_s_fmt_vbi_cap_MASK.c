
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int vbi; } ;
struct v4l2_format {TYPE_1__ fmt; } ;
struct file {int dummy; } ;
struct cx18_open_id {int prio; struct cx18* cx; } ;
struct TYPE_7__ {int type; } ;
struct TYPE_8__ {TYPE_3__ in; TYPE_2__* sliced_in; } ;
struct cx18 {TYPE_4__ vbi; int sd_av; int ana_capturing; int prio; } ;
struct TYPE_6__ {scalar_t__ service_set; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct file*,void*,struct v4l2_format*) ;
 int FUNC_2 (struct cx18*) ;
 int VAR_2 ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int ,int ,int ,int *) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_5(struct file *VAR_4, void *VAR_5,
    struct v4l2_format *VAR_6)
{
 struct cx18_open_id *VAR_7 = VAR_5;
 struct cx18 *VAR_8 = VAR_7->cx;
 int VAR_9;

 VAR_9 = FUNC_3(&VAR_8->prio, VAR_7->prio);
 if (VAR_9)
  return VAR_9;





 if (!FUNC_2(VAR_8) && FUNC_0(&VAR_8->ana_capturing) > 0)
  return -VAR_0;






 VAR_9 = FUNC_4(VAR_8->sd_av, VAR_3, VAR_2, &VAR_6->fmt.vbi);
 if (VAR_9)
  return VAR_9;


 VAR_8->vbi.sliced_in->service_set = 0;
 VAR_8->vbi.in.type = VAR_1;

 return FUNC_1(VAR_4, VAR_5, VAR_6);
}
