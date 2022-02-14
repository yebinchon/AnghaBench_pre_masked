
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_ucontext {int dummy; } ;
struct qib_ucontext {struct ib_ucontext ibucontext; } ;
struct ib_udata {int dummy; } ;
struct ib_device {int dummy; } ;


 int VAR_0 ;
 struct ib_ucontext* FUNC_0 (int ) ;
 int VAR_1 ;
 struct qib_ucontext* FUNC_1 (int,int ) ;

__attribute__((used)) static struct ib_ucontext *FUNC_2(struct ib_device *VAR_2,
           struct ib_udata *VAR_3)
{
 struct qib_ucontext *VAR_4;
 struct ib_ucontext *VAR_5;

 VAR_4 = FUNC_1(sizeof *VAR_4, VAR_1);
 if (!VAR_4) {
  VAR_5 = FUNC_0(-VAR_0);
  goto bail;
 }

 VAR_5 = &VAR_4->ibucontext;

bail:
 return VAR_5;
}
