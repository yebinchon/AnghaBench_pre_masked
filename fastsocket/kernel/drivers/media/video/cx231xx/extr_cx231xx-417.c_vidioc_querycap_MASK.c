
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_capability {int dummy; } ;
struct file {int dummy; } ;


 int FUNC_0 (struct v4l2_capability*,int *,int) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(struct file *VAR_1, void *VAR_2,
    struct v4l2_capability *VAR_3)
{



  FUNC_0(VAR_3, &VAR_0, sizeof(struct v4l2_capability));
 return 0;
}
