
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mite_struct {int lock; scalar_t__ mite_io_addr; } ;
struct mite_channel {int done; int channel; struct mite_struct* mite; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 () ;
 unsigned int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int ,scalar_t__) ;

unsigned FUNC_7(struct mite_channel *VAR_2)
{
 struct mite_struct *VAR_3 = VAR_2->mite;
 unsigned VAR_4;
 unsigned long VAR_5;

 FUNC_4(&VAR_3->lock, VAR_5);
 VAR_4 = FUNC_3(VAR_3->mite_io_addr + FUNC_1(VAR_2->channel));
 if (VAR_4 & VAR_1) {
  VAR_2->done = 1;
  FUNC_6(VAR_0,
         VAR_3->mite_io_addr + FUNC_0(VAR_2->channel));
 }
 FUNC_2();
 FUNC_5(&VAR_3->lock, VAR_5);
 return VAR_4;
}
