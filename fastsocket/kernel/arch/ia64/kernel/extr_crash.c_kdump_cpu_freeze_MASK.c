
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct unw_frame_info {scalar_t__ sw; } ;
typedef scalar_t__ __u64 ;
struct TYPE_3__ {scalar_t__ ksp; } ;
struct TYPE_4__ {TYPE_1__ thread; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 TYPE_2__* VAR_0 ;
 int FUNC_3 () ;
 int VAR_1 ;
 int* VAR_2 ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;

void
FUNC_7(struct unw_frame_info *VAR_3, void *VAR_4)
{
 int VAR_5;

 FUNC_4();
 VAR_5 = FUNC_6();
 FUNC_2();
 VAR_0->thread.ksp = (__u64)VAR_3->sw - 16;

 FUNC_3();

 FUNC_0(&VAR_1);
 VAR_2[VAR_5] = 1;
 FUNC_5();
 for (;;)
  FUNC_1();
}
