
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {int high_speed; } ;
struct mmc_card {TYPE_2__ cccr; TYPE_1__* host; } ;
struct TYPE_3__ {int caps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mmc_card*,int,int ,int ,int ,int *) ;

__attribute__((used)) static int FUNC_1(struct mmc_card *VAR_3, int VAR_4)
{
 int VAR_5;
 u8 VAR_6;

 if (!(VAR_3->host->caps & VAR_0))
  return 0;

 if (!VAR_3->cccr.high_speed)
  return 0;

 VAR_5 = FUNC_0(VAR_3, 0, 0, VAR_1, 0, &VAR_6);
 if (VAR_5)
  return VAR_5;

 if (VAR_4)
  VAR_6 |= VAR_2;
 else
  VAR_6 &= ~VAR_2;

 VAR_5 = FUNC_0(VAR_3, 1, 0, VAR_1, VAR_6, ((void*)0));
 if (VAR_5)
  return VAR_5;

 return 1;
}
