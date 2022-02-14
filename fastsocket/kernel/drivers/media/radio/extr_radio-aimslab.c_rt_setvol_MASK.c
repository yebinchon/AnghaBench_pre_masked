
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtrack {int curvol; int lock; scalar_t__ muted; int io; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (struct rtrack*) ;
 int FUNC_4 (struct rtrack*) ;
 int FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct rtrack *VAR_0, int VAR_1)
{
 int VAR_2;

 FUNC_0(&VAR_0->lock);

 if (VAR_1 == VAR_0->curvol) {
  if (VAR_0->muted) {
   VAR_0->muted = 0;
   FUNC_2(0xd8, VAR_0->io);
  }
  FUNC_1(&VAR_0->lock);
  return 0;
 }

 if (VAR_1 == 0) {
  FUNC_2(0x48, VAR_0->io);
  FUNC_5(2000000);
  FUNC_2(0xd0, VAR_0->io);
  VAR_0->curvol = 0;
  FUNC_1(&VAR_0->lock);
  return 0;
 }

 VAR_0->muted = 0;
 if (VAR_1 > VAR_0->curvol)
  for (VAR_2 = VAR_0->curvol; VAR_2 < VAR_1; VAR_2++)
   FUNC_4(VAR_0);
 else
  for (VAR_2 = VAR_0->curvol; VAR_2 > VAR_1; VAR_2--)
   FUNC_3(VAR_0);

 VAR_0->curvol = VAR_1;
 FUNC_1(&VAR_0->lock);
 return 0;
}
