
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tmio_mmc_host {struct mmc_data* data; } ;
struct mmc_data {int bytes_xfered; int blocks; int blksz; int flags; int error; struct mmc_command* stop; } ;
struct mmc_command {int opcode; int arg; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct tmio_mmc_host*,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct tmio_mmc_host*,int ,int) ;
 int FUNC_4 (struct tmio_mmc_host*) ;

__attribute__((used)) static inline void FUNC_5(struct tmio_mmc_host *VAR_4)
{
 struct mmc_data *VAR_5 = VAR_4->data;
 struct mmc_command *VAR_6;

 VAR_4->data = ((void*)0);

 if (!VAR_5) {
  FUNC_2("Spurious data end IRQ\n");
  return;
 }
 VAR_6 = VAR_5->stop;


 if (!VAR_5->error)
  VAR_5->bytes_xfered = VAR_5->blocks * VAR_5->blksz;
 else
  VAR_5->bytes_xfered = 0;

 FUNC_2("Completed data request\n");
 if (VAR_5->flags & VAR_1)
  FUNC_1(VAR_4, VAR_2);
 else
  FUNC_1(VAR_4, VAR_3);

 if (VAR_6) {
  if (VAR_6->opcode == 12 && !VAR_6->arg)
   FUNC_3(VAR_4, VAR_0, 0x000);
  else
   FUNC_0();
 }

 FUNC_4(VAR_4);
}
