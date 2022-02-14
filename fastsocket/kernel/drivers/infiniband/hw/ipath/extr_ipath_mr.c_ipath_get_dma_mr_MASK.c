
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ib_mr {int dummy; } ;
struct TYPE_2__ {int access_flags; } ;
struct ipath_mr {struct ib_mr ibmr; TYPE_1__ mr; } ;
struct ib_pd {int dummy; } ;


 int VAR_0 ;
 struct ib_mr* FUNC_0 (int ) ;
 int VAR_1 ;
 struct ipath_mr* FUNC_1 (int,int ) ;

struct ib_mr *FUNC_2(struct ib_pd *VAR_2, int VAR_3)
{
 struct ipath_mr *VAR_4;
 struct ib_mr *VAR_5;

 VAR_4 = FUNC_1(sizeof *VAR_4, VAR_1);
 if (!VAR_4) {
  VAR_5 = FUNC_0(-VAR_0);
  goto bail;
 }

 VAR_4->mr.access_flags = VAR_3;
 VAR_5 = &VAR_4->ibmr;

bail:
 return VAR_5;
}
