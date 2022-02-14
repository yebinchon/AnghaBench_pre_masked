
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trust {int lock; int io; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct trust *VAR_0)
{
 int VAR_1, VAR_2;

 FUNC_1(&VAR_0->lock);
 for (VAR_1 = 0, VAR_2 = 0; VAR_1 < 100; VAR_1++)
  VAR_2 |= FUNC_0(VAR_0->io);
 FUNC_2(&VAR_0->lock);
 return (VAR_2 & 1) ? 0 : 0xffff;
}
