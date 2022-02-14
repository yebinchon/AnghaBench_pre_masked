
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int readbuffers; } ;
struct TYPE_4__ {TYPE_1__ capture; } ;
struct v4l2_streamparm {TYPE_2__ parm; } ;
struct file {int dummy; } ;
struct cafe_camera {int s_mutex; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct cafe_camera*,int ,int ,struct v4l2_streamparm*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_3(struct file *VAR_3, void *VAR_4,
  struct v4l2_streamparm *VAR_5)
{
 struct cafe_camera *VAR_6 = VAR_4;
 int VAR_7;

 FUNC_0(&VAR_6->s_mutex);
 VAR_7 = FUNC_2(VAR_6, VAR_2, VAR_1, VAR_5);
 FUNC_1(&VAR_6->s_mutex);
 VAR_5->parm.capture.readbuffers = VAR_0;
 return VAR_7;
}
