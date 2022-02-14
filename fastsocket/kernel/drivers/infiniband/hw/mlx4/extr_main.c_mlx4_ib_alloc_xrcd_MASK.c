
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ib_xrcd {int dummy; } ;
struct mlx4_ib_xrcd {int xrcdn; int pd; struct ib_xrcd ibxrcd; int cq; } ;
struct ib_udata {int dummy; } ;
struct ib_ucontext {int dummy; } ;
struct ib_device {int dummy; } ;
struct TYPE_5__ {int flags; } ;
struct TYPE_7__ {TYPE_1__ caps; } ;
struct TYPE_6__ {TYPE_3__* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ib_xrcd* FUNC_0 (int) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ib_device*) ;
 int FUNC_4 (struct ib_device*,int *,int *,struct mlx4_ib_xrcd*,int,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct mlx4_ib_xrcd*) ;
 struct mlx4_ib_xrcd* FUNC_7 (int,int ) ;
 int FUNC_8 (TYPE_3__*,int *) ;
 int FUNC_9 (TYPE_3__*,int ) ;
 TYPE_2__* FUNC_10 (struct ib_device*) ;

__attribute__((used)) static struct ib_xrcd *FUNC_11(struct ib_device *VAR_4,
       struct ib_ucontext *VAR_5,
       struct ib_udata *VAR_6)
{
 struct mlx4_ib_xrcd *VAR_7;
 int VAR_8;

 if (!(FUNC_10(VAR_4)->dev->caps.flags & VAR_3))
  return FUNC_0(-VAR_1);

 VAR_7 = FUNC_7(sizeof *VAR_7, VAR_2);
 if (!VAR_7)
  return FUNC_0(-VAR_0);

 VAR_8 = FUNC_8(FUNC_10(VAR_4)->dev, &VAR_7->xrcdn);
 if (VAR_8)
  goto err1;

 VAR_7->pd = FUNC_3(VAR_4);
 if (FUNC_1(VAR_7->pd)) {
  VAR_8 = FUNC_2(VAR_7->pd);
  goto err2;
 }

 VAR_7->cq = FUNC_4(VAR_4, ((void*)0), ((void*)0), VAR_7, 1, 0);
 if (FUNC_1(VAR_7->cq)) {
  VAR_8 = FUNC_2(VAR_7->cq);
  goto err3;
 }

 return &VAR_7->ibxrcd;

err3:
 FUNC_5(VAR_7->pd);
err2:
 FUNC_9(FUNC_10(VAR_4)->dev, VAR_7->xrcdn);
err1:
 FUNC_6(VAR_7);
 return FUNC_0(VAR_8);
}
