
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ function; } ;
struct msmsdcc_host {int eject; unsigned int oldstat; TYPE_2__ timer; int mmc; TYPE_1__* plat; } ;
struct TYPE_3__ {unsigned int (* status ) (int ) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*,scalar_t__) ;
 int FUNC_4 (char*,int ,unsigned int,unsigned int) ;
 unsigned int FUNC_5 (int ) ;

__attribute__((used)) static void
FUNC_6(unsigned long VAR_2)
{
 struct msmsdcc_host *VAR_3 = (struct msmsdcc_host *)VAR_2;
 unsigned int VAR_4;

 if (!VAR_3->plat->status) {
  FUNC_0(VAR_3->mmc, 0);
  goto out;
 }

 VAR_4 = VAR_3->plat->status(FUNC_1(VAR_3->mmc));
 VAR_3->eject = !VAR_4;
 if (VAR_4 ^ VAR_3->oldstat) {
  FUNC_4("%s: Slot status change detected (%d -> %d)\n",
   FUNC_2(VAR_3->mmc), VAR_3->oldstat, VAR_4);
  if (VAR_4)
   FUNC_0(VAR_3->mmc, (5 * VAR_0) / 2);
  else
   FUNC_0(VAR_3->mmc, 0);
 }

 VAR_3->oldstat = VAR_4;

out:
 if (VAR_3->timer.function)
  FUNC_3(&VAR_3->timer, VAR_1 + VAR_0);
}
