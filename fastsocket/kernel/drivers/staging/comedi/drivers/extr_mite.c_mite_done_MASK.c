
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mite_struct {int lock; } ;
struct mite_channel {int done; struct mite_struct* mite; } ;


 int FUNC_0 (struct mite_channel*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

int FUNC_3(struct mite_channel *VAR_0)
{
 struct mite_struct *VAR_1 = VAR_0->mite;
 unsigned long VAR_2;
 int VAR_3;

 FUNC_0(VAR_0);
 FUNC_1(&VAR_1->lock, VAR_2);
 VAR_3 = VAR_0->done;
 FUNC_2(&VAR_1->lock, VAR_2);
 return VAR_3;
}
