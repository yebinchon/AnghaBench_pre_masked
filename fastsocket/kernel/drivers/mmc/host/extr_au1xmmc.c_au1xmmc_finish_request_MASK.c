
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mmc_request {int dummy; } ;
struct TYPE_4__ {scalar_t__ len; scalar_t__ offset; scalar_t__ index; } ;
struct TYPE_3__ {scalar_t__ dir; scalar_t__ len; } ;
struct au1xmmc_host {int flags; int mmc; int status; TYPE_2__ pio; TYPE_1__ dma; struct mmc_request* mrq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct mmc_request*) ;

__attribute__((used)) static void FUNC_1(struct au1xmmc_host *VAR_3)
{
 struct mmc_request *VAR_4 = VAR_3->mrq;

 VAR_3->mrq = ((void*)0);
 VAR_3->flags &= VAR_0 | VAR_1;

 VAR_3->dma.len = 0;
 VAR_3->dma.dir = 0;

 VAR_3->pio.index = 0;
 VAR_3->pio.offset = 0;
 VAR_3->pio.len = 0;

 VAR_3->status = VAR_2;

 FUNC_0(VAR_3->mmc, VAR_4);
}
