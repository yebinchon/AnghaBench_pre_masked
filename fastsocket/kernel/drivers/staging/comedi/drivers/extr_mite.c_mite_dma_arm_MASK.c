
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mite_struct {int lock; scalar_t__ mite_io_addr; } ;
struct mite_channel {int channel; scalar_t__ done; struct mite_struct* mite; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int,scalar_t__) ;

void FUNC_7(struct mite_channel *VAR_2)
{
 struct mite_struct *VAR_3 = VAR_2->mite;
 int VAR_4;
 unsigned long VAR_5;

 FUNC_0("mite_dma_arm ch%i\n", VAR_1);


 FUNC_3();

 VAR_4 = VAR_0;
 FUNC_4(&VAR_3->lock, VAR_5);
 VAR_2->done = 0;
 FUNC_6(VAR_4, VAR_3->mite_io_addr + FUNC_1(VAR_2->channel));
 FUNC_2();
 FUNC_5(&VAR_3->lock, VAR_5);

}
