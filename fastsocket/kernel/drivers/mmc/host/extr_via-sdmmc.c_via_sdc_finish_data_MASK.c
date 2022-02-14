
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct via_crdr_mmc_host {int finish_tasklet; int mmc; struct mmc_data* data; } ;
struct mmc_data {int bytes_xfered; int blocks; int blksz; int flags; scalar_t__ stop; int sg_len; int sg; scalar_t__ error; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct via_crdr_mmc_host*,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct via_crdr_mmc_host *VAR_3)
{
 struct mmc_data *VAR_4;

 FUNC_0(!VAR_3->data);

 VAR_4 = VAR_3->data;
 VAR_3->data = ((void*)0);

 if (VAR_4->error)
  VAR_4->bytes_xfered = 0;
 else
  VAR_4->bytes_xfered = VAR_4->blocks * VAR_4->blksz;

 FUNC_1(FUNC_2(VAR_3->mmc), VAR_4->sg, VAR_4->sg_len,
  ((VAR_4->flags & VAR_0) ?
  VAR_1 : VAR_2));

 if (VAR_4->stop)
  FUNC_4(VAR_3, VAR_4->stop);
 else
  FUNC_3(&VAR_3->finish_tasklet);
}
