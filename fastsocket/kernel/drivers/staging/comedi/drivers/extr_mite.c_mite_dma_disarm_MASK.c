
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mite_struct {scalar_t__ mite_io_addr; } ;
struct mite_channel {int channel; struct mite_struct* mite; } ;


 unsigned int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (unsigned int,scalar_t__) ;

void FUNC_2(struct mite_channel *VAR_1)
{
 struct mite_struct *VAR_2 = VAR_1->mite;
 unsigned VAR_3;


 VAR_3 = VAR_0;
 FUNC_1(VAR_3, VAR_2->mite_io_addr + FUNC_0(VAR_1->channel));
}
