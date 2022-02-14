
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mite_struct {scalar_t__ mite_io_addr; } ;
struct mite_channel {int channel; struct mite_struct* mite; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;

u32 FUNC_2(struct mite_channel *VAR_0)
{
 struct mite_struct *VAR_1 = VAR_0->mite;
 return FUNC_1(VAR_1->mite_io_addr + FUNC_0(VAR_0->channel));
}
