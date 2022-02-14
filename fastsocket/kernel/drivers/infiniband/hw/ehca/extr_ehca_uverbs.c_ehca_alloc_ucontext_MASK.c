
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_udata {int dummy; } ;
struct ib_ucontext {int dummy; } ;
struct ib_device {int dummy; } ;
struct ehca_ucontext {struct ib_ucontext ib_ucontext; } ;


 int VAR_0 ;
 struct ib_ucontext* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (struct ib_device*,char*,struct ib_device*) ;
 struct ehca_ucontext* FUNC_2 (int,int ) ;

struct ib_ucontext *FUNC_3(struct ib_device *VAR_2,
     struct ib_udata *VAR_3)
{
 struct ehca_ucontext *VAR_4;

 VAR_4 = FUNC_2(sizeof *VAR_4, VAR_1);
 if (!VAR_4) {
  FUNC_1(VAR_2, "Out of memory device=%p", VAR_2);
  return FUNC_0(-VAR_0);
 }

 return &VAR_4->ib_ucontext;
}
