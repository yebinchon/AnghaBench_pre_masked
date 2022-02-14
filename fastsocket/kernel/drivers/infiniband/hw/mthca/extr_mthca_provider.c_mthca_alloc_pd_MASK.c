
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_pd {int dummy; } ;
struct mthca_pd {struct ib_pd ibpd; int pd_num; } ;
struct ib_udata {int dummy; } ;
struct ib_ucontext {int dummy; } ;
struct ib_device {int dummy; } ;
typedef int __u32 ;


 int VAR_0 ;
 int VAR_1 ;
 struct ib_pd* FUNC_0 (int) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct ib_udata*,int *,int) ;
 int FUNC_2 (struct mthca_pd*) ;
 struct mthca_pd* FUNC_3 (int,int ) ;
 int FUNC_4 (int ,int,struct mthca_pd*) ;
 int FUNC_5 (int ,struct mthca_pd*) ;
 int FUNC_6 (struct ib_device*) ;

__attribute__((used)) static struct ib_pd *FUNC_7(struct ib_device *VAR_3,
        struct ib_ucontext *VAR_4,
        struct ib_udata *VAR_5)
{
 struct mthca_pd *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_3(sizeof *VAR_6, VAR_2);
 if (!VAR_6)
  return FUNC_0(-VAR_1);

 VAR_7 = FUNC_4(FUNC_6(VAR_3), !VAR_4, VAR_6);
 if (VAR_7) {
  FUNC_2(VAR_6);
  return FUNC_0(VAR_7);
 }

 if (VAR_4) {
  if (FUNC_1(VAR_5, &VAR_6->pd_num, sizeof (__u32))) {
   FUNC_5(FUNC_6(VAR_3), VAR_6);
   FUNC_2(VAR_6);
   return FUNC_0(-VAR_0);
  }
 }

 return &VAR_6->ibpd;
}
