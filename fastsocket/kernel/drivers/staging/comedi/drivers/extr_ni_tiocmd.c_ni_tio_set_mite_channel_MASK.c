
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni_gpct {int lock; struct mite_channel* mite_chan; } ;
struct mite_channel {int dummy; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

void FUNC_2(struct ni_gpct *VAR_0,
        struct mite_channel *VAR_1)
{
 unsigned long VAR_2;

 FUNC_0(&VAR_0->lock, VAR_2);
 VAR_0->mite_chan = VAR_1;
 FUNC_1(&VAR_0->lock, VAR_2);
}
