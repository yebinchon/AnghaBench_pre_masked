
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wbsd_host {scalar_t__ num_sg; int offset; scalar_t__ remain; int fifo_tasklet; scalar_t__ base; TYPE_2__* mrq; } ;
struct mmc_data {int bytes_xfered; } ;
struct TYPE_4__ {TYPE_1__* cmd; } ;
struct TYPE_3__ {struct mmc_data* data; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (char,scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct wbsd_host*) ;
 char* FUNC_4 (struct wbsd_host*) ;

__attribute__((used)) static void FUNC_5(struct wbsd_host *VAR_5)
{
 struct mmc_data *VAR_6 = VAR_5->mrq->cmd->data;
 char *VAR_7;
 int VAR_8, VAR_9, VAR_10;





 if (VAR_5->num_sg == 0)
  return;

 VAR_7 = FUNC_4(VAR_5) + VAR_5->offset;





 while (!((VAR_9 = FUNC_0(VAR_5->base + VAR_4)) & VAR_3)) {




  if (VAR_9 & VAR_1)
   VAR_10 = 0;
  else if (VAR_9 & VAR_2)
   VAR_10 = 8;
  else
   VAR_10 = 15;

  for (VAR_8 = 16; VAR_8 > VAR_10; VAR_8--) {
   FUNC_1(*VAR_7, VAR_5->base + VAR_0);
   VAR_7++;
   VAR_5->offset++;
   VAR_5->remain--;

   VAR_6->bytes_xfered++;




   if (VAR_5->remain == 0) {



    if (!FUNC_3(VAR_5))
     return;

    VAR_7 = FUNC_4(VAR_5);
   }
  }
 }






 FUNC_2(&VAR_5->fifo_tasklet);
}
