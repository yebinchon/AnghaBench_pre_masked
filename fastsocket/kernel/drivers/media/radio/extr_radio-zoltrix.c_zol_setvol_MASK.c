
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zoltrix {int curvol; int lock; scalar_t__ io; scalar_t__ muted; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct zoltrix *VAR_0, int VAR_1)
{
 VAR_0->curvol = VAR_1;
 if (VAR_0->muted)
  return 0;

 FUNC_2(&VAR_0->lock);
 if (VAR_1 == 0) {
  FUNC_4(0, VAR_0->io);
  FUNC_4(0, VAR_0->io);
  FUNC_0(VAR_0->io + 3);
  FUNC_3(&VAR_0->lock);
  return 0;
 }

 FUNC_4(VAR_0->curvol-1, VAR_0->io);
 FUNC_1(10);
 FUNC_0(VAR_0->io + 2);
 FUNC_3(&VAR_0->lock);
 return 0;
}
