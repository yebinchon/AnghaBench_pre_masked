
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* fbdev; int dss1_fck; } ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (int) ;
 unsigned long FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int) ;
 TYPE_2__ VAR_0 ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static void FUNC_4(int VAR_1, int VAR_2, int *VAR_3, int *VAR_4)
{
 unsigned long VAR_5, VAR_6;

 *VAR_3 = 1;
 VAR_2 = FUNC_3(1, VAR_2);
 VAR_5 = FUNC_1(VAR_0.dss1_fck);
 VAR_6 = VAR_5;
 *VAR_4 = (VAR_6 + VAR_2 - 1) / VAR_2;
 if (VAR_1)
  *VAR_4 = FUNC_3(2, *VAR_4);
 else
  *VAR_4 = FUNC_3(3, *VAR_4);
 if (*VAR_4 > 255) {
  *VAR_4 = 255;
  VAR_6 = VAR_2 * *VAR_4;
  *VAR_3 = VAR_5 / VAR_6;
  FUNC_0(*VAR_3 < 1);
  if (*VAR_3 > 255) {
   *VAR_3 = 255;
   FUNC_2(VAR_0.fbdev->dev, "pixclock %d kHz too low.\n",
     VAR_2 / 1000);
  }
 }
}
