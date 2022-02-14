
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct lcs_channel {TYPE_1__* ccwdev; int state; scalar_t__ io_idx; scalar_t__ ccws; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ,char*,int ) ;
 int FUNC_1 (TYPE_1__*,scalar_t__,int ,int ,int) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ,unsigned long) ;
 int FUNC_6 (int ,unsigned long) ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_7(struct lcs_channel *VAR_4)
{
 unsigned long VAR_5;
 int VAR_6;

 FUNC_0(4, VAR_3,"ssch%s", FUNC_3(&VAR_4->ccwdev->dev));
 FUNC_5(FUNC_4(VAR_4->ccwdev), VAR_5);
 VAR_6 = FUNC_1(VAR_4->ccwdev,
         VAR_4->ccws + VAR_4->io_idx, 0, 0,
         VAR_1 | VAR_0);
 if (VAR_6 == 0)
  VAR_4->state = VAR_2;
 FUNC_6(FUNC_4(VAR_4->ccwdev), VAR_5);
 if (VAR_6) {
  FUNC_0(4,VAR_3,"essh%s",
         FUNC_3(&VAR_4->ccwdev->dev));
  FUNC_2(&VAR_4->ccwdev->dev,
   "Starting an LCS device resulted in an error,"
   " rc=%d!\n", VAR_6);
 }
 return VAR_6;
}
