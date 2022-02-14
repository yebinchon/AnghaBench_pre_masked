
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct imxmci_host {TYPE_2__* mmc; scalar_t__ base; } ;
struct TYPE_3__ {int clock; } ;
struct TYPE_4__ {TYPE_1__ ios; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int ,char*,char const*,unsigned int,unsigned int) ;
 int FUNC_1 (int ,char*,int,char const*,unsigned int,unsigned int) ;
 int FUNC_2 (TYPE_2__*) ;
 unsigned int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct imxmci_host *VAR_2,
           unsigned int *VAR_3, unsigned int VAR_4,
           int VAR_5, const char *VAR_6)
{
 int VAR_7 = 0;

 while (!(*VAR_3 & VAR_4)) {
  VAR_7 += 2;
  if (VAR_7 >= VAR_5) {
   FUNC_0(FUNC_2(VAR_2->mmc), "busy wait timeout in %s, STATUS = 0x%x (0x%x)\n",
    VAR_6, *VAR_3, VAR_4);
   return -1;
  }
  FUNC_4(2);
  *VAR_3 |= FUNC_3(VAR_2->base + VAR_0);
 }
 if (!VAR_7)
  return 0;


 if (!(VAR_4 & VAR_1) || (VAR_2->mmc->ios.clock >= 8000000))
  FUNC_1(FUNC_2(VAR_2->mmc), "busy wait for %d usec in %s, STATUS = 0x%x (0x%x)\n",
    VAR_7, VAR_6, *VAR_3, VAR_4);
 return VAR_7;
}
