
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtrack2 {int muted; int lock; int io; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,int ) ;

__attribute__((used)) static void FUNC_3(struct rtrack2 *VAR_0)
{
 if (VAR_0->muted)
  return;
 FUNC_0(&VAR_0->lock);
 FUNC_2(1, VAR_0->io);
 FUNC_1(&VAR_0->lock);
 VAR_0->muted = 1;
}
