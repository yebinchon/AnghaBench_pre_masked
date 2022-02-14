
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ib_pd {int dummy; } ;
struct ocrdma_pd {int dpp_enabled; struct ib_pd ibpd; int num_dpp_qp; struct ocrdma_dev* dev; } ;
struct TYPE_2__ {scalar_t__ dev_family; } ;
struct ocrdma_dev {TYPE_1__ nic_info; } ;
struct ib_udata {int dummy; } ;
struct ib_ucontext {int dummy; } ;
struct ib_device {int dummy; } ;


 int VAR_0 ;
 struct ib_pd* FUNC_0 (int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 struct ocrdma_dev* FUNC_1 (struct ib_device*) ;
 int FUNC_2 (struct ocrdma_pd*) ;
 struct ocrdma_pd* FUNC_3 (int,int ) ;
 int FUNC_4 (struct ocrdma_pd*,struct ib_ucontext*,struct ib_udata*) ;
 int FUNC_5 (struct ib_pd*) ;
 int FUNC_6 (struct ocrdma_dev*,struct ocrdma_pd*) ;

struct ib_pd *FUNC_7(struct ib_device *VAR_4,
         struct ib_ucontext *VAR_5,
         struct ib_udata *VAR_6)
{
 struct ocrdma_dev *VAR_7 = FUNC_1(VAR_4);
 struct ocrdma_pd *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_3(sizeof(*VAR_8), VAR_1);
 if (!VAR_8)
  return FUNC_0(-VAR_0);
 VAR_8->dev = VAR_7;
 if (VAR_6 && VAR_5) {
  VAR_8->dpp_enabled = (VAR_7->nic_info.dev_family ==
     VAR_2) ? 1 : 0;
  VAR_8->num_dpp_qp =
   VAR_8->dpp_enabled ? VAR_3 : 0;
 }
 VAR_9 = FUNC_6(VAR_7, VAR_8);
 if (VAR_9) {
  FUNC_2(VAR_8);
  return FUNC_0(VAR_9);
 }

 if (VAR_6 && VAR_5) {
  VAR_9 = FUNC_4(VAR_8, VAR_5, VAR_6);
  if (VAR_9)
   goto err;
 }
 return &VAR_8->ibpd;

err:
 FUNC_5(&VAR_8->ibpd);
 return FUNC_0(VAR_9);
}
