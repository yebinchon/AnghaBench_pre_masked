
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tmio_mmc_host {unsigned int sg_off; TYPE_1__* sg_ptr; struct mmc_data* data; } ;
struct mmc_data {unsigned int blksz; int flags; } ;
struct TYPE_2__ {unsigned int length; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (struct tmio_mmc_host*,int ,unsigned short*,unsigned int) ;
 int FUNC_2 (struct tmio_mmc_host*,int ,unsigned short*,unsigned int) ;
 unsigned int FUNC_3 (struct tmio_mmc_host*,unsigned long*) ;
 int FUNC_4 (struct tmio_mmc_host*,unsigned long*) ;
 int FUNC_5 (struct tmio_mmc_host*) ;

__attribute__((used)) static inline void FUNC_6(struct tmio_mmc_host *VAR_2)
{
 struct mmc_data *VAR_3 = VAR_2->data;
 unsigned short *VAR_4;
 unsigned int VAR_5;
 unsigned long VAR_6;

 if (!VAR_3) {
  FUNC_0("Spurious PIO IRQ\n");
  return;
 }

 VAR_4 = (unsigned short *)(FUNC_3(VAR_2, &VAR_6) +
       VAR_2->sg_off);

 VAR_5 = VAR_2->sg_ptr->length - VAR_2->sg_off;
 if (VAR_5 > VAR_3->blksz)
  VAR_5 = VAR_3->blksz;

 FUNC_0("count: %08x offset: %08x flags %08x\n",
     VAR_5, VAR_2->sg_off, VAR_3->flags);


 if (VAR_3->flags & VAR_1)
  FUNC_1(VAR_2, VAR_0, VAR_4, VAR_5 >> 1);
 else
  FUNC_2(VAR_2, VAR_0, VAR_4, VAR_5 >> 1);

 VAR_2->sg_off += VAR_5;

 FUNC_4(VAR_2, &VAR_6);

 if (VAR_2->sg_off == VAR_2->sg_ptr->length)
  FUNC_5(VAR_2);

 return;
}
