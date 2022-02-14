
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mmc_host {TYPE_1__* card; } ;
struct TYPE_2__ {int sdio_funcs; int ** sdio_func; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct mmc_host *VAR_0)
{
 int VAR_1;

 FUNC_0(!VAR_0);
 FUNC_0(!VAR_0->card);

 for (VAR_1 = 0;VAR_1 < VAR_0->card->sdio_funcs;VAR_1++) {
  if (VAR_0->card->sdio_func[VAR_1]) {
   FUNC_2(VAR_0->card->sdio_func[VAR_1]);
   VAR_0->card->sdio_func[VAR_1] = ((void*)0);
  }
 }

 FUNC_1(VAR_0->card);
 VAR_0->card = ((void*)0);
}
