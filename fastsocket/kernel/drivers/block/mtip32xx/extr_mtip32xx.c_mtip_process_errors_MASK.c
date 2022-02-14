
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct driver_data {TYPE_2__* pdev; TYPE_1__* port; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {scalar_t__ mmio; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int *,char*,...) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct driver_data*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static inline void FUNC_5(struct driver_data *VAR_6, u32 VAR_7)
{
 if (FUNC_1(VAR_7 & (VAR_4 | VAR_2)))
  FUNC_2(VAR_6);

 if (FUNC_3(VAR_7 & VAR_0)) {
  FUNC_0(&VAR_6->pdev->dev,
   "Clearing PxSERR.DIAG.x\n");
  FUNC_4((1 << 26), VAR_6->port->mmio + VAR_5);
 }

 if (FUNC_3(VAR_7 & VAR_3)) {
  FUNC_0(&VAR_6->pdev->dev,
   "Clearing PxSERR.DIAG.n\n");
  FUNC_4((1 << 16), VAR_6->port->mmio + VAR_5);
 }

 if (FUNC_3(VAR_7 & ~VAR_1)) {
  FUNC_0(&VAR_6->pdev->dev,
   "Port stat errors %x unhandled\n",
   (VAR_7 & ~VAR_1));
 }
}
