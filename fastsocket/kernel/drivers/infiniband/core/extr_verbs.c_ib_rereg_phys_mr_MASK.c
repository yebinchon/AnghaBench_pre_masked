
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct ib_phys_buf {int dummy; } ;
struct ib_pd {int usecnt; } ;
struct ib_mr {TYPE_1__* device; struct ib_pd* pd; int usecnt; } ;
struct TYPE_2__ {int (* rereg_phys_mr ) (struct ib_mr*,int,struct ib_pd*,struct ib_phys_buf*,int,int,int *) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (struct ib_mr*,int,struct ib_pd*,struct ib_phys_buf*,int,int,int *) ;

int FUNC_4(struct ib_mr *VAR_3,
       int VAR_4,
       struct ib_pd *VAR_5,
       struct ib_phys_buf *VAR_6,
       int VAR_7,
       int VAR_8,
       u64 *VAR_9)
{
 struct ib_pd *VAR_10;
 int VAR_11;

 if (!VAR_3->device->rereg_phys_mr)
  return -VAR_1;

 if (FUNC_2(&VAR_3->usecnt))
  return -VAR_0;

 VAR_10 = VAR_3->pd;

 VAR_11 = VAR_3->device->rereg_phys_mr(VAR_3, VAR_4, VAR_5,
     VAR_6, VAR_7,
     VAR_8, VAR_9);

 if (!VAR_11 && (VAR_4 & VAR_2)) {
  FUNC_0(&VAR_10->usecnt);
  FUNC_1(&VAR_5->usecnt);
 }

 return VAR_11;
}
