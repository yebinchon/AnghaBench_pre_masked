
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct lcs_channel {scalar_t__ state; size_t io_idx; TYPE_2__* ccwdev; TYPE_1__* ccws; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int flags; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int,int ,char*,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int *) ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_4(struct lcs_channel *VAR_4)
{
 int VAR_5;

 if (VAR_4->state != VAR_2)
  return 0;
 if (VAR_4->ccws[VAR_4->io_idx].flags & VAR_0)
  return 0;
 FUNC_0(5, VAR_3, "rsch%s", FUNC_3(&VAR_4->ccwdev->dev));
 VAR_5 = FUNC_1(VAR_4->ccwdev);
 if (VAR_5) {
  FUNC_0(4, VAR_3, "ersc%s",
         FUNC_3(&VAR_4->ccwdev->dev));
  FUNC_2(&VAR_4->ccwdev->dev,
   "Sending data from the LCS device to the LAN failed"
   " with rc=%d\n",VAR_5);
 } else
  VAR_4->state = VAR_1;
 return VAR_5;

}
