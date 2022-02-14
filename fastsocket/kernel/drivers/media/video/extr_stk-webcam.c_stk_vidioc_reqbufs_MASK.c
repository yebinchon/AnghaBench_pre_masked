
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_requestbuffers {scalar_t__ memory; int count; } ;
struct stk_camera {int n_sbufs; struct file* owner; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (struct stk_camera*) ;
 int FUNC_1 (struct stk_camera*,int) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_4,
  void *VAR_5, struct v4l2_requestbuffers *VAR_6)
{
 struct stk_camera *VAR_7 = VAR_5;

 if (VAR_7 == ((void*)0))
  return -VAR_2;
 if (VAR_6->memory != VAR_3)
  return -VAR_1;
 if (FUNC_0(VAR_7)
  || (VAR_7->owner && VAR_7->owner != VAR_4))
  return -VAR_0;
 VAR_7->owner = VAR_4;


 if (VAR_6->count < 3)
  VAR_6->count = 3;

 else if (VAR_6->count > 5)
  VAR_6->count = 5;

 FUNC_1(VAR_7, VAR_6->count);
 VAR_6->count = VAR_7->n_sbufs;
 return 0;
}
