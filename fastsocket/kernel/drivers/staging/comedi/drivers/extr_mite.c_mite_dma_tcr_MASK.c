
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mite_struct {scalar_t__ mite_io_addr; } ;
struct mite_channel {int channel; struct mite_struct* mite; } ;


 int FUNC_0 (char*,int ,int,int) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;

unsigned FUNC_4(struct mite_channel *VAR_0)
{
 struct mite_struct *VAR_1 = VAR_0->mite;
 int VAR_2;
 int VAR_3;

 VAR_3 = FUNC_3(VAR_1->mite_io_addr + FUNC_1(VAR_0->channel));
 VAR_2 = FUNC_3(VAR_1->mite_io_addr + FUNC_2(VAR_0->channel));
 FUNC_0("mite_dma_tcr ch%i, lkar=0x%08x tcr=%d\n", VAR_0->channel,
   VAR_3, VAR_2);

 return VAR_2;
}
