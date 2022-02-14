
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct s2255_pipeinfo {int dummy; } ;
struct s2255_dev {scalar_t__ cc; TYPE_1__* udev; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (struct s2255_dev*,struct s2255_pipeinfo*) ;

__attribute__((used)) static void FUNC_3(struct s2255_dev *VAR_1,
          struct s2255_pipeinfo *VAR_2)
{
 int VAR_3;
 FUNC_1(50, "callback read video \n");

 if (VAR_1->cc >= VAR_0) {
  VAR_1->cc = 0;
  FUNC_0(&VAR_1->udev->dev, "invalid channel\n");
  return;
 }

 VAR_3 = FUNC_2(VAR_1, VAR_2);
 if (VAR_3 != 0)
  FUNC_1(4, "s2255: read callback failed\n");

 FUNC_1(50, "callback read video done\n");
 return;
}
