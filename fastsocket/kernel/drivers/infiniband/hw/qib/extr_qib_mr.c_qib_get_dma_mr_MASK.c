
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int access_flags; } ;
struct ib_mr {int dummy; } ;
struct qib_mr {TYPE_2__ mr; struct ib_mr ibmr; } ;
struct ib_pd {int dummy; } ;
struct TYPE_5__ {scalar_t__ user; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ib_mr* FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,struct ib_pd*,int ) ;
 int FUNC_3 (struct qib_mr*) ;
 struct qib_mr* FUNC_4 (int,int ) ;
 int FUNC_5 (TYPE_2__*,int) ;
 TYPE_1__* FUNC_6 (struct ib_pd*) ;

struct ib_mr *FUNC_7(struct ib_pd *VAR_3, int VAR_4)
{
 struct qib_mr *VAR_5 = ((void*)0);
 struct ib_mr *VAR_6;
 int VAR_7;

 if (FUNC_6(VAR_3)->user) {
  VAR_6 = FUNC_0(-VAR_1);
  goto bail;
 }

 VAR_5 = FUNC_4(sizeof *VAR_5, VAR_2);
 if (!VAR_5) {
  VAR_6 = FUNC_0(-VAR_0);
  goto bail;
 }

 VAR_7 = FUNC_2(&VAR_5->mr, VAR_3, 0);
 if (VAR_7) {
  VAR_6 = FUNC_0(VAR_7);
  goto bail;
 }


 VAR_7 = FUNC_5(&VAR_5->mr, 1);
 if (VAR_7) {
  VAR_6 = FUNC_0(VAR_7);
  goto bail_mregion;
 }

 VAR_5->mr.access_flags = VAR_4;
 VAR_6 = &VAR_5->ibmr;
done:
 return VAR_6;

bail_mregion:
 FUNC_1(&VAR_5->mr);
bail:
 FUNC_3(VAR_5);
 goto done;
}
