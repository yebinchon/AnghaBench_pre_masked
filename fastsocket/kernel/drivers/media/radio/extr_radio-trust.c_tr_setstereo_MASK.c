
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trust {int curstereo; int ioval; int lock; int io; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,int ) ;

__attribute__((used)) static void FUNC_3(struct trust *VAR_0, int VAR_1)
{
 FUNC_0(&VAR_0->lock);
 VAR_0->curstereo = !!VAR_1;
 VAR_0->ioval = (VAR_0->ioval & 0xfb) | (!VAR_0->curstereo << 2);
 FUNC_2(VAR_0->ioval, VAR_0->io);
 FUNC_1(&VAR_0->lock);
}
