
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int bus_widths; } ;
struct mmc_card {scalar_t__ type; TYPE_2__ scr; TYPE_1__* host; } ;
struct TYPE_3__ {int caps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct mmc_card*,int ) ;
 int FUNC_1 (struct mmc_card*) ;

__attribute__((used)) static int FUNC_2(struct mmc_card *VAR_5)
{
 int VAR_6;

 if (VAR_5->type == VAR_3)
  return FUNC_1(VAR_5);

 if ((VAR_5->host->caps & VAR_2) &&
  (VAR_5->scr.bus_widths & VAR_4)) {
  VAR_6 = FUNC_0(VAR_5, VAR_1);
  if (VAR_6)
   return VAR_6;
 } else
  return 0;

 VAR_6 = FUNC_1(VAR_5);
 if (VAR_6 <= 0)
  FUNC_0(VAR_5, VAR_0);

 return VAR_6;
}
