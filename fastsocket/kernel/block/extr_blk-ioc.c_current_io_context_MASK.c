
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {struct io_context* io_context; } ;
struct io_context {int dummy; } ;
typedef int gfp_t ;


 struct io_context* FUNC_0 (int ,int) ;
 struct task_struct* VAR_0 ;
 scalar_t__ FUNC_1 (struct io_context*) ;
 int FUNC_2 () ;

struct io_context *FUNC_3(gfp_t VAR_1, int VAR_2)
{
 struct task_struct *VAR_3 = VAR_0;
 struct io_context *VAR_4;

 VAR_4 = VAR_3->io_context;
 if (FUNC_1(VAR_4))
  return VAR_4;

 VAR_4 = FUNC_0(VAR_1, VAR_2);
 if (VAR_4) {

  FUNC_2();
  VAR_3->io_context = VAR_4;
 }

 return VAR_4;
}
